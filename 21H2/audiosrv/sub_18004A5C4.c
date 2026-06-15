/*
 * XREFs of sub_18004A5C4 @ 0x18004A5C4
 * Callers:
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 * Callees:
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_18004BAE4 @ 0x18004BAE4 (sub_18004BAE4.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004A5C4(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  int v8; // ebx
  __int128 *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v17 = 0LL;
  v16 = 0LL;
  if ( a2 == 1 )
    return 0LL;
  if ( a4 )
  {
    if ( (unsigned int)sub_18004BB48(a4) )
    {
      v8 = -2004287480;
      v15 = 8086LL;
      goto LABEL_14;
    }
    v17 = a4;
    LOWORD(v16) = 65;
    DWORD2(v16) = *(unsigned __int16 *)(a4 + 16) + 18;
  }
  v18 = *(_OWORD *)a3;
  v8 = sub_18004BAE4(&v18, a2 == 3, v19);
  if ( v8 < 0 )
  {
    v15 = 8095LL;
    goto LABEL_14;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
         *(_QWORD *)(a1 + 40),
         v19,
         &v16);
  if ( v8 < 0 )
  {
    v15 = 8097LL;
    goto LABEL_14;
  }
  v9 = sub_180022AC0((_QWORD *)a1, &v18, a2, 0);
  v10 = *a3;
  v11 = *v9;
  v12 = *(_QWORD *)v9;
  v18 = v11;
  v13 = v10 - v12;
  if ( !v13 )
    v13 = a3[1] - *((_QWORD *)&v18 + 1);
  if ( v13 )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
         *(_QWORD *)(a1 + 40),
         &xmmword_18015C5A8,
         &v16);
  if ( v8 >= 0 )
    return 0LL;
  v15 = 8105LL;
LABEL_14:
  sub_18004BD84(
    retaddr,
    v15,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v8);
  return (unsigned int)v8;
}
