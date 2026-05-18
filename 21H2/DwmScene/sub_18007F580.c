/*
 * XREFs of sub_18007F580 @ 0x18007F580
 * Callers:
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_1800237BC @ 0x1800237BC (sub_1800237BC.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C61C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180070374 @ 0x180070374 (sub_180070374.c)
 *     sub_1800703A4 @ 0x1800703A4 (sub_1800703A4.c)
 *     sub_1800703DC @ 0x1800703DC (sub_1800703DC.c)
 *     sub_180075E6C @ 0x180075E6C (sub_180075E6C.c)
 *     sub_180075F1C @ 0x180075F1C (sub_180075F1C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall sub_18007F580(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  char *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  const void *v22; // rdx
  __int64 v23; // rbx
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  __int64 v27; // rbx
  volatile signed __int32 *v28; // rcx
  __int64 v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v39[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v42[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v43[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v44[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v45[4]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v46; // [rsp+168h] [rbp+68h]
  __int128 v47; // [rsp+178h] [rbp+78h]
  unsigned __int64 v48; // [rsp+188h] [rbp+88h] BYREF
  double v49; // [rsp+190h] [rbp+90h] BYREF
  __int64 v50; // [rsp+198h] [rbp+98h] BYREF

  v36 = a2;
  v46 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v4 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v11 + 1, v11) )
      {
        v5 = *a2;
        v46 = *(_OWORD *)a2;
        goto LABEL_3;
      }
    }
  }
  v5 = v46;
LABEL_3:
  if ( v5 )
  {
    v48 = v5;
    v49 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 *, double *))(*(_QWORD *)v5 + 224LL))(v5, 0LL, &v50, &v49);
    sub_180075F1C((__int64 **)(a1 + 1440), (__int64)&v37, &v48);
    *(_QWORD *)(v37 + 40) = v50;
    sub_180075E6C((__int64 **)(a1 + 1424), (__int64)&v38, &v48);
    v6 = v38;
    v7 = (char *)(v38 + 64);
    v30 = 0LL;
    v31 = 0LL;
    sub_18001277C(v29, v38 + 64);
    v8 = v30;
    unknown_libname_103(v29);
    if ( !v8 )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *))(*(_QWORD *)v5 + 376LL))(v5, v39);
      v47 = 0LL;
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = *(_DWORD *)(v10 + 8);
          if ( !v12 )
            break;
          if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v12 + 1, v12) )
          {
            v47 = *(_OWORD *)v9;
            break;
          }
        }
      }
      v13 = v40;
      if ( v40 && !_InterlockedDecrement((volatile signed __int32 *)(v40 + 12)) )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v10, v9);
      v14 = v47;
      if ( (_QWORD)v47 )
      {
        v15 = sub_1800703DC(v47, v45);
        v16 = sub_1800703A4(v14, v44);
        v17 = sub_180070374(v14, v43);
        v18 = std::wstring::append(v17, L" ", 1uLL);
        v35 = 0LL;
        v34 = *(_OWORD *)v18;
        v35 = *((_OWORD *)v18 + 1);
        v18[2] = 0LL;
        v18[3] = 7LL;
        *(_WORD *)v18 = 0;
        v19 = (_QWORD *)sub_1800237BC((__int64)v42, &v34, (__int64)v16);
        v20 = std::wstring::append(v19, L" ", 1uLL);
        v33 = 0LL;
        v32 = *(_OWORD *)v20;
        v33 = *((_OWORD *)v20 + 1);
        v20[2] = 0LL;
        v20[3] = 7LL;
        *(_WORD *)v20 = 0;
        v21 = sub_1800237BC((__int64)v41, &v32, (__int64)v15);
        if ( v7 != (char *)v21 )
        {
          v22 = (const void *)v21;
          if ( *(_QWORD *)(v21 + 24) >= 8uLL )
            v22 = *(const void **)v21;
          std::wstring::assign(v7, v22, *(_QWORD *)(v21 + 16));
        }
        unknown_libname_103(v41);
        unknown_libname_103((__int64 *)&v32);
        unknown_libname_103(v42);
        unknown_libname_103((__int64 *)&v34);
        unknown_libname_103(v43);
        unknown_libname_103(v44);
        unknown_libname_103(v45);
      }
      if ( *((_QWORD *)&v47 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL)) )
        {
          v23 = *((_QWORD *)&v47 + 1);
          (***((void (__fastcall ****)(_QWORD, __int64, __int64))&v47 + 1))(*((_QWORD *)&v47 + 1), v10, v9);
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v23 + 12)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
        }
      }
    }
    v24 = v49;
    if ( v24 > 0.0 )
    {
      v25 = *(float *)(v6 + 40);
      if ( v24 > v25 )
        v25 = v49;
      *(float *)(v6 + 40) = v25;
      v26 = *(float *)(v6 + 44);
      if ( v26 > v24 )
        v26 = v24;
      *(float *)(v6 + 44) = v26;
      *(float *)(v6 + 48) = v24 + *(float *)(v6 + 48);
      ++*(_QWORD *)(v6 + 56);
    }
  }
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL)) )
    {
      v27 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v27 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  v28 = (volatile signed __int32 *)a2[1];
  if ( v28 )
  {
    if ( !_InterlockedDecrement(v28 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
  }
}
