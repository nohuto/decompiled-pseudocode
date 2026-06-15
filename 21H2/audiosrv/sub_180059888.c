/*
 * XREFs of sub_180059888 @ 0x180059888
 * Callers:
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 * Callees:
 *     sub_1800233E0 @ 0x1800233E0 (sub_1800233E0.c)
 *     sub_180028DAC @ 0x180028DAC (sub_180028DAC.c)
 *     sub_1800291D4 @ 0x1800291D4 (sub_1800291D4.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180059F70 @ 0x180059F70 (sub_180059F70.c)
 *     sub_18005A334 @ 0x18005A334 (sub_18005A334.c)
 *     sub_18005B694 @ 0x18005B694 (sub_18005B694.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180059888(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, __int64); // rax
  __int64 v27; // rax
  __int64 v28; // rax
  std::_Ref_count_base *v29[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v30; // [rsp+48h] [rbp-61h] BYREF
  __int64 v31; // [rsp+50h] [rbp-59h]
  __int64 v32; // [rsp+58h] [rbp-51h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h]
  __int64 v34; // [rsp+68h] [rbp-41h] BYREF
  __int64 v35; // [rsp+70h] [rbp-39h]
  __int64 v36; // [rsp+78h] [rbp-31h] BYREF
  __int64 v37; // [rsp+80h] [rbp-29h]
  _BYTE v38[72]; // [rsp+90h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+47h]

  sub_18005A334();
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  sub_1800291D4(a1, a2, (__int64)&v36, (__int64)&v34);
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  sub_180028DAC(a1, a3, a4, a5, (__int64)&v32, (__int64)&v30);
  v11 = a7;
  if ( (int)v37 <= 0 )
    goto LABEL_2;
  *(_OWORD *)v29 = 0LL;
  v18 = sub_180059F70((unsigned int)&v36, v31, v30, 0, 0LL, (__int64)v29);
  v14 = v18;
  if ( v18 < 0 )
  {
    sub_18004BD84((int)retaddr, 346, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v18);
    if ( v29[1] )
      sub_180052600(v29[1]);
    sub_1800384A4(&v30);
    sub_1800384A4(&v32);
    sub_1800384A4(&v34);
    sub_1800384A4(&v36);
    v11 = a7;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a7 + 56) || (v19 = sub_18005B754(v38, a7), v20 = sub_18005B694(v29[0], v19), v14 = v20, v20 >= 0) )
  {
    if ( !(unsigned int)sub_1800233E0(a1 + 32, v29) )
    {
      sub_18004BD84(
        (int)retaddr,
        348,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        -2147024882);
      if ( v29[1] )
        sub_180052600(v29[1]);
      sub_1800384A4(&v30);
      sub_1800384A4(&v32);
      sub_1800384A4(&v34);
      sub_1800384A4(&v36);
      v25 = *(_QWORD *)(a7 + 56);
      if ( !v25 )
        return 2147942414LL;
      v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL);
      goto LABEL_43;
    }
    if ( v29[1] )
      sub_180052600(v29[1]);
LABEL_2:
    if ( (int)v35 <= 0 )
    {
LABEL_10:
      sub_1800384A4(&v30);
      sub_1800384A4(&v32);
      sub_1800384A4(&v34);
      sub_1800384A4(&v36);
      v16 = *(_QWORD *)(a7 + 56);
      if ( v16 )
      {
        LOBYTE(v15) = v16 != a7;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
        *(_QWORD *)(a7 + 56) = 0LL;
      }
      return 0LL;
    }
    *(_OWORD *)v29 = 0LL;
    if ( a6 == 1 && (v27 = *(_QWORD *)(a1 + 16)) != 0 )
    {
      v12 = *(_QWORD *)(v27 + 56);
      v13 = *(_DWORD *)(v27 + 64);
    }
    else
    {
      v12 = 0LL;
      v13 = 0;
    }
    v14 = sub_180059F70((unsigned int)&v34, v33, v32, v13, v12, (__int64)v29);
    if ( v14 < 0 )
    {
      v23 = 359;
LABEL_28:
      sub_18004BD84((int)retaddr, v23, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v14);
      goto LABEL_29;
    }
    if ( *(_QWORD *)(a7 + 56) )
    {
      v28 = sub_18005B754(v38, a7);
      v14 = sub_18005B694(v29[0], v28);
      if ( v14 < 0 )
      {
        v23 = 360;
        goto LABEL_28;
      }
    }
    if ( (unsigned int)sub_1800233E0(a1 + 32, v29) )
    {
      if ( v29[1] )
        sub_180052600(v29[1]);
      goto LABEL_10;
    }
    sub_18004BD84(
      (int)retaddr,
      361,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      -2147024882);
    if ( v29[1] )
      sub_180052600(v29[1]);
    sub_1800384A4(&v30);
    sub_1800384A4(&v32);
    sub_1800384A4(&v34);
    sub_1800384A4(&v36);
    v25 = *(_QWORD *)(a7 + 56);
    if ( !v25 )
      return 2147942414LL;
    v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL);
LABEL_43:
    LOBYTE(v24) = v25 != a7;
    v26(v25, v24);
    *(_QWORD *)(a7 + 56) = 0LL;
    return 2147942414LL;
  }
  sub_18004BD84((int)retaddr, 347, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v20);
LABEL_29:
  if ( v29[1] )
    sub_180052600(v29[1]);
  sub_1800384A4(&v30);
  sub_1800384A4(&v32);
  sub_1800384A4(&v34);
  sub_1800384A4(&v36);
LABEL_23:
  v22 = *(_QWORD *)(v11 + 56);
  if ( v22 )
  {
    LOBYTE(v21) = v22 != v11;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
    *(_QWORD *)(v11 + 56) = 0LL;
  }
  return (unsigned int)v14;
}
