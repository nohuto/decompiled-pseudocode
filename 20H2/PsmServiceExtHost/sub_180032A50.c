/*
 * XREFs of sub_180032A50 @ 0x180032A50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032A50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        int *a10)
{
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  int v19; // eax
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h]

  if ( !a7 && !a8 && !a9 && !a10 )
    return 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a7 )
  {
    v12 = *a7;
    v13 = 2;
    HIDWORD(v21) = 2;
    if ( v12 == -1 )
      v12 = 0LL;
    *(_QWORD *)&v20 = v12;
  }
  else
  {
    v13 = HIDWORD(v21);
  }
  if ( a8 )
  {
    v14 = *a8;
    v13 |= 4u;
    v15 = *a8 == -1;
    HIDWORD(v21) = v13;
    if ( v15 )
      v14 = 0LL;
    *((_QWORD *)&v20 + 1) = v14;
  }
  if ( a9 )
  {
    v16 = *a9;
    v13 |= 8u;
    HIDWORD(v21) = v13;
    v17 = 0LL;
    if ( v16 != -1 )
      v17 = v16;
    *(_QWORD *)&v21 = v17;
  }
  if ( a10 )
  {
    v19 = *a10;
    HIDWORD(v21) = v13 | 0x10;
    DWORD2(v21) = v19;
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, __int128 *))(a1 + 8))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v20);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
