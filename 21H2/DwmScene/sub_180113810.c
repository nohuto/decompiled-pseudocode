/*
 * XREFs of sub_180113810 @ 0x180113810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180025F94 @ 0x180025F94 (sub_180025F94.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_1800FAF8C @ 0x1800FAF8C (sub_1800FAF8C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ceilf @ 0x180125024 (ceilf.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180113810(__int64 a1, __int64 a2, int a3, int a4, char a5, int a6)
{
  float v8; // xmm1_4
  float v9; // xmm8_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  int v13; // r14d
  int v14; // r15d
  __int64 *v15; // rsi
  __int64 v16; // r8
  volatile signed __int32 *v17; // rbx
  __int64 *v18; // rsi
  __int64 v19; // r8
  volatile signed __int32 *v20; // rbx
  __int64 *v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rdi
  __int64 result; // rax
  int v26; // r14d
  const void **v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // ebx
  float v33; // xmm0_4
  _QWORD *v34; // rdx
  char *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  volatile signed __int32 *v38; // rbx
  int v39; // [rsp+38h] [rbp-D0h]
  float v40[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h]
  __int128 Src_8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44[3]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v49; // [rsp+B0h] [rbp-58h]
  __int64 v50[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v51[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v52[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v53; // [rsp+118h] [rbp+10h] BYREF
  __int128 v54; // [rsp+128h] [rbp+20h] BYREF
  __int128 v55; // [rsp+138h] [rbp+30h]

  v8 = (float)*(int *)(a1 + 376);
  v9 = (float)a3;
  v10 = (float)a3 / v8;
  v11 = (float)a4;
  v12 = (float)a4 / v8;
  *(float *)(a1 + 264) = v10;
  *(float *)(a1 + 268) = v12;
  v13 = (int)ceilf(v10);
  v14 = (int)ceilf(v12);
  if ( !v13 )
    v13 = 1;
  if ( !v14 )
    v14 = 1;
  v39 = *(_DWORD *)(a1 + 376);
  v41 = sub_1800703D4(a2);
  sub_18000F8A8(v41, &v46, 0);
  v15 = (__int64 *)(a1 + 184);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), &v46);
  v17 = v47;
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v50[2] = 0LL;
  v50[3] = 15LL;
  LOBYTE(v50[0]) = 0;
  LOBYTE(v16) = 0;
  sub_18000FC14(v50, 0x14uLL, v16, "ImageProcessingBlurX");
  sub_180068194(*v15, v50);
  sub_180068A0C(*v15, v13, v14, a5, a6, 0LL);
  sub_18000F8A8(v41, &v48, 0);
  v18 = (__int64 *)(a1 + 200);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 200), &v48);
  v20 = v49;
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v51[2] = 0LL;
  v51[3] = 15LL;
  LOBYTE(v51[0]) = 0;
  LOBYTE(v19) = 0;
  sub_18000FC14(v51, 0x14uLL, v19, "ImageProcessingBlurY");
  sub_180068194(*v18, v51);
  sub_180068A0C(*v18, v13, v14, a5, a6, 0LL);
  v21 = (__int64 *)(a1 + 216);
  v22 = *(_QWORD *)(a1 + 224);
  v23 = *(_QWORD *)(a1 + 216);
  if ( v23 != v22 )
  {
    do
    {
      unknown_libname_102(v23, 0);
      v23 += 16LL;
    }
    while ( v23 != v22 );
    v23 = *v21;
  }
  *(_QWORD *)(a1 + 224) = v23;
  v24 = (__int64 *)(a1 + 240);
  result = *v24;
  v24[1] = *v24;
  v26 = 2;
  while ( v26 <= v39 )
  {
    v53 = 0LL;
    sub_18000F8A8(v41, &v53, 0);
    sub_180025F94(v44, v26);
    v27 = sub_18005A894(v44, 0LL, "ImageProcessingBlur Downsample ", 0x1FuLL);
    v43 = 0uLL;
    Src_8 = *(_OWORD *)v27;
    v43 = *((_OWORD *)v27 + 1);
    v27[2] = 0LL;
    v27[3] = (const void *)15;
    *(_BYTE *)v27 = 0;
    v28 = std::string::append(&Src_8, "x", 1uLL);
    v54 = *(_OWORD *)v28;
    v55 = *((_OWORD *)v28 + 1);
    v28[2] = 0LL;
    v28[3] = 15LL;
    *(_BYTE *)v28 = 0;
    if ( *((_QWORD *)&v43 + 1) >= 0x10uLL )
    {
      v29 = Src_8;
      if ( (unsigned __int64)(*((_QWORD *)&v43 + 1) + 1LL) >= 0x1000 )
      {
        v29 = *(_QWORD *)(Src_8 - 8);
        if ( (unsigned __int64)(Src_8 - v29 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v29, *((_QWORD *)&v43 + 1) + 40LL);
LABEL_44:
          o__invalid_parameter_noinfo_noreturn(v30, v31);
LABEL_45:
          o__invalid_parameter_noinfo_noreturn(v36, v37);
          JUMPOUT(0x180113D90LL);
        }
      }
      j_j__o_free(v29);
    }
    *(_QWORD *)&v43 = 0LL;
    *((_QWORD *)&v43 + 1) = 15LL;
    LOBYTE(Src_8) = 0;
    if ( v45 >= 0x10 )
    {
      v30 = v44[0];
      if ( v45 + 1 >= 0x1000 )
      {
        v31 = v45 + 40;
        v30 = *(_QWORD *)(v44[0] - 8);
        if ( (unsigned __int64)(v44[0] - v30 - 8) > 0x1F )
          goto LABEL_44;
      }
      j_j__o_free(v30);
    }
    v44[2] = 0LL;
    v45 = 15LL;
    LOBYTE(v44[0]) = 0;
    v52[2] = 0LL;
    v52[3] = 0LL;
    sub_180020B7C(v52, (__int64)&v54);
    sub_180068194(v53, v52);
    v32 = (int)ceilf(v9 / (float)v26);
    v33 = ceilf(v11 / (float)v26);
    sub_180068A0C(v53, v32, (int)v33, a5, a6, 0LL);
    v34 = (_QWORD *)v21[1];
    if ( (_QWORD *)v21[2] == v34 )
    {
      result = sub_18001101C(v21, v34, &v53);
    }
    else
    {
      *v34 = 0LL;
      v34[1] = 0LL;
      if ( *((_QWORD *)&v53 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL));
      *v34 = v53;
      result = *((_QWORD *)&v53 + 1);
      v34[1] = *((_QWORD *)&v53 + 1);
      v21[1] += 16LL;
    }
    v40[0] = v9 / (float)v26;
    v40[1] = v11 / (float)v26;
    v35 = (char *)v24[1];
    if ( (char *)v24[2] == v35 )
    {
      result = sub_1800FAF8C(v24, v35, v40);
    }
    else
    {
      *(_QWORD *)v35 = *(_QWORD *)v40;
      v24[1] += 8LL;
    }
    v26 *= 2;
    if ( *((_QWORD *)&v55 + 1) >= 0x10uLL )
    {
      v36 = v54;
      if ( (unsigned __int64)(*((_QWORD *)&v55 + 1) + 1LL) >= 0x1000 )
      {
        v37 = *((_QWORD *)&v55 + 1) + 40LL;
        v36 = *(_QWORD *)(v54 - 8);
        if ( (unsigned __int64)(v54 - v36 - 8) > 0x1F )
          goto LABEL_45;
      }
      result = j_j__o_free(v36);
    }
    v38 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
    if ( *((_QWORD *)&v53 + 1) )
    {
      result = (unsigned int)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL),
                               0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
        result = (unsigned int)_InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      }
    }
  }
  return result;
}
