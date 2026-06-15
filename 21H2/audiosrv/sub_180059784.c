/*
 * XREFs of sub_180059784 @ 0x180059784
 * Callers:
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180059784(int a1, _OWORD *a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  int v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+5Ch] [rbp-Dh]
  _BYTE v23[56]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+98h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+47h]

  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  if ( !(unsigned int)sub_1800273F8((__int64)&v20, a2) )
  {
    v13 = -2147024882;
    sub_18004BD84(
      (int)retaddr,
      312,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      -2147024882);
    sub_1800384A4(&v20);
    v10 = a7;
    v18 = *(_QWORD *)(a7 + 56);
    if ( !v18 )
      return v13;
    v19 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL);
LABEL_10:
    LOBYTE(v17) = v18 != v10;
    v19(v18, v17);
    *(_QWORD *)(v10 + 56) = 0LL;
    return v13;
  }
  v24 = 0LL;
  v10 = a7;
  v11 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a7 + 56);
  if ( v11 )
    v24 = (**v11)(v11, v23);
  v12 = sub_180059888(a1, (unsigned int)&v20, a3, a4, a5, a6, (__int64)v23);
  v13 = v12;
  if ( v12 < 0 )
  {
    sub_18004BD84((int)retaddr, 313, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v12);
    sub_1800384A4(&v20);
    v18 = *(_QWORD *)(a7 + 56);
    if ( !v18 )
      return v13;
    v19 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL);
    goto LABEL_10;
  }
  sub_1800384A4(&v20);
  v15 = *(_QWORD *)(a7 + 56);
  if ( v15 )
  {
    LOBYTE(v14) = v15 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v14);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return 0LL;
}
