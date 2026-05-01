/*
 * XREFs of ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803E70A8
 * Callers:
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803E7750 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18044D8F8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18045C2F8 (-_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 */

__int64 __fastcall AppResizeOperation::QueryResizeApps(__int64 a1, int a2, _DWORD *a3)
{
  const struct LAYOUT_ENVIRONMENT_DETAILS *v6; // rdx
  int v7; // eax
  int v8; // r14d
  unsigned int v9; // r12d
  int v10; // edi
  unsigned int v11; // r15d
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 *v22; // rcx
  __int64 v24; // rbx
  int v25; // eax
  __int128 v26; // xmm6
  __int64 v27; // rbx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rbx
  int v31; // r10d
  int v32; // r8d
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rbx
  int v37; // r10d
  int v38; // r8d
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // [rsp+38h] [rbp-69h] BYREF
  __int64 v43; // [rsp+40h] [rbp-61h] BYREF
  __int128 v44; // [rsp+48h] [rbp-59h] BYREF
  __int128 v45; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v47[12]; // [rsp+6Ch] [rbp-35h]
  int v48; // [rsp+78h] [rbp-29h]
  __int128 v49; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v46);
  v7 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v46, v6);
  v8 = *(_DWORD *)&v47[4];
  v9 = v46;
  v10 = v7;
  v11 = *(_DWORD *)&v47[4] - v46 - v7;
  if ( !a2 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v40 + 96LL))(
            v40,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v42);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 123LL;
      goto LABEL_17;
    }
    *(_QWORD *)&v44 = __PAIR64__(*(unsigned int *)v47, v46);
    HIDWORD(v44) = *(_DWORD *)&v47[8];
    DWORD2(v44) = *a3 - v10 / 2;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v42 + 104LL))(v42, 0LL, &v44);
    v43 = 0LL;
    v41 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v34 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v41 + 96LL))(
            v41,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v43);
    v18 = v34;
    if ( v34 < 0 )
    {
      v35 = 129LL;
      goto LABEL_43;
    }
LABEL_44:
    *(_QWORD *)((char *)&v45 + 4) = *(_QWORD *)v47;
    HIDWORD(v45) = *(_DWORD *)&v47[8];
    LODWORD(v45) = v10 + DWORD2(v44);
    goto LABEL_45;
  }
  v12 = a2 - 1;
  if ( !v12 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v36 + 96LL))(
            v36,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v42);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 140LL;
      goto LABEL_17;
    }
    v37 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v42 + 72LL))(v42, &v46, v11);
    v38 = 320 * v48 / 100 + 2 * (v48 / 100);
    HIDWORD(v44) = *(_DWORD *)&v47[8];
    *(_QWORD *)&v44 = __PAIR64__(*(unsigned int *)v47, v46);
    if ( v37 > v38 )
      v38 = v37;
    DWORD2(v44) = v38 + v46;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v42 + 104LL))(v42, 0LL, &v44);
    v43 = 0LL;
    v39 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v34 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v39 + 96LL))(
            v39,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v43);
    v18 = v34;
    if ( v34 < 0 )
    {
      v35 = 150LL;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v30 = *(_QWORD *)(a1 + 64);
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v30 + 96LL))(
            v30,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v42);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 161LL;
      goto LABEL_17;
    }
    v31 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v42 + 72LL))(v42, &v46, v11);
    *(_QWORD *)((char *)&v44 + 4) = *(_QWORD *)v47;
    v32 = 320 * v48 / 100 + 2 * (v48 / 100);
    HIDWORD(v44) = *(_DWORD *)&v47[8];
    if ( v31 > v32 )
      v32 = v31;
    LODWORD(v44) = *(_DWORD *)&v47[4] - v32;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v42 + 104LL))(v42, 0LL, &v44);
    v43 = 0LL;
    v33 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v33 + 96LL))(
            v33,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v43);
    v18 = v34;
    if ( v34 < 0 )
    {
      v35 = 171LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      goto LABEL_18;
    }
    *(_QWORD *)&v45 = __PAIR64__(*(unsigned int *)v47, v46);
    HIDWORD(v45) = *(_DWORD *)&v47[8];
    DWORD2(v45) = v44 - v10;
LABEL_45:
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v43 + 104LL))(v43, 0LL, &v45);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
LABEL_46:
    v29 = &v42;
    goto LABEL_47;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v24 = *(_QWORD *)(a1 + 64);
    v43 = 0LL;
    *(_QWORD *)&v44 = __PAIR64__(*(unsigned int *)v47, v46);
    *((_QWORD *)&v44 + 1) = *(_QWORD *)&v47[4];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v24 + 96LL))(
            v24,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v43);
    v18 = v25;
    if ( v25 >= 0 )
    {
      v26 = v44;
      v45 = v44;
      DWORD2(v45) = v9 + (int)(v8 - v9 - v10) / 2;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v43 + 104LL))(v43, 0LL, &v45);
      v42 = 0LL;
      v27 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      v28 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v27 + 96LL))(
              v27,
              1LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              &v42);
      v18 = v28;
      if ( v28 >= 0 )
      {
        v49 = v26;
        LODWORD(v49) = v10 + DWORD2(v45);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v42 + 104LL))(v42, 0LL, &v49);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
        v29 = &v43;
LABEL_47:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v25);
    }
    v22 = &v43;
    goto LABEL_19;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v21 + 96LL))(
            v21,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v42);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 87LL;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v42 + 104LL))(v42, 0LL, &v46);
    v17 = CAppLayoutOperation::_EvictItem(a1 + 24, 0LL, 3LL);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 91LL;
      goto LABEL_17;
    }
LABEL_11:
    v20 = v42;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v20 + 48LL))(
           v20,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           a1 + 88) >= 0 )
      *(_DWORD *)(a1 + 104) |= 2u;
    goto LABEL_46;
  }
  if ( v15 == 1 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v16 + 96LL))(
            v16,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v42);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 105LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v17);
LABEL_18:
      v22 = &v42;
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
      return v18;
    }
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v42 + 104LL))(v42, 0LL, &v46);
    v17 = CAppLayoutOperation::_EvictItem(a1 + 24, 1LL, 4LL);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 109LL;
      goto LABEL_17;
    }
    goto LABEL_11;
  }
  return 0LL;
}
