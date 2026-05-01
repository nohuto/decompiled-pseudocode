/*
 * XREFs of sub_180021F28 @ 0x180021F28
 * Callers:
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180021F28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r8
  int v16; // r8d
  int v17; // r9d
  void *v18; // rdx
  unsigned __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  int v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF

  v8 = a6;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, __int64 *, _QWORD))(a1 + 24))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v20,
          0LL);
  if ( v13 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 || !sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      return (unsigned int)v13;
    v18 = &unk_18009AA6C;
LABEL_10:
    v21 = v13;
    v22 = v8;
    sub_180063424((unsigned int)&dword_1800B31E0, (_DWORD)v18, v16, v17, (__int64)&v21, (__int64)&v22);
    return (unsigned int)v13;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *))(a1 + 96))(
          a3,
          a4,
          a2,
          a5,
          v8,
          &v19);
  if ( v13 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 || !sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      return (unsigned int)v13;
    v18 = &unk_18009AA25;
    goto LABEL_10;
  }
  v14 = v19 << 12;
  if ( is_mul_ok(v19, 0x1000uLL) )
  {
    v13 = 0;
  }
  else
  {
    v14 = -1LL;
    v13 = -1073741675;
  }
  *a7 = v20;
  *a8 = v14;
  return (unsigned int)v13;
}
