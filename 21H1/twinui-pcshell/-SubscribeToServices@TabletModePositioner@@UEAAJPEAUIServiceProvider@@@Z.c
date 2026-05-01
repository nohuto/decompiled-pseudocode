/*
 * XREFs of ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803DD810
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180092F94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::SubscribeToServices(TabletModePositioner *this, struct IServiceProvider *a2)
{
  char *v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  char *v9; // r14
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-59h] BYREF
  __int64 v22; // [rsp+38h] [rbp-51h] BYREF
  int v23; // [rsp+40h] [rbp-49h] BYREF
  __int64 v24; // [rsp+48h] [rbp-41h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-31h] BYREF
  char *v27; // [rsp+70h] [rbp-19h]
  __int128 v28; // [rsp+80h] [rbp-9h] BYREF
  __int128 v29; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v25 = 0LL;
  v2 = (char *)this + 312;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 341LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_73;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         (char *)this + 320);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 342LL;
    goto LABEL_71;
  }
  v8 = (_QWORD *)((char *)this + 328);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 328);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 343LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 336);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 344LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
         &GUID_2010122c_468a_480f_8cd1_b85e76f5882e,
         (char *)this + 344);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 345LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopManager,
         &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
         (char *)this + 352);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 346LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         (char *)this + 360);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 347LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &unk_18051A8E8,
         &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714,
         (char *)this + 368);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 348LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 349LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         (char *)this + 376);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 350LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_MultitaskingViewVisibilityService,
         &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
         (char *)this + 384);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 351LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ShellTargetingTracker,
         &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
         &v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 352LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         (char *)this + 392);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 353LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         (char *)this + 416);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 354LL;
    goto LABEL_71;
  }
  v9 = (char *)this - 24;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 40) + 24LL))(
         *((_QWORD *)this + 40),
         ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
         (char *)this + 460);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 356LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v8 + 72LL))(
         *v8,
         ((unsigned __int64)this + 120) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 464);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 358LL;
    goto LABEL_71;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 212);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 408);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 361LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         ((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 484);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 362LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
         *((_QWORD *)this + 47),
         &unk_18051A908,
         1LL,
         ((unsigned __int64)this + 144) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 472);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 368LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 476);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 369LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v24 + 24LL))(
         v24,
         ((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 480);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 370LL;
    goto LABEL_71;
  }
  v26[0] = *((_QWORD *)this + 39);
  v26[1] = *v8;
  v26[2] = *((_QWORD *)this + 43);
  if ( this == (TabletModePositioner *)24 )
    v27 = 0LL;
  else
    v27 = (char *)this + 64;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 379LL;
    goto LABEL_71;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
    0,
    v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         (char *)this + 424);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 390LL;
    goto LABEL_71;
  }
  v11 = *((_QWORD *)this + 53);
  if ( !v11 )
  {
LABEL_69:
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v25 + 24LL))(
           v25,
           ((unsigned __int64)this + 128) & -(__int64)(this != (TabletModePositioner *)24),
           (char *)this + 468);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_73;
    }
    v7 = 424LL;
    goto LABEL_71;
  }
  v22 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, 2LL, &v22);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_65;
  }
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  if ( ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v21) >= 0 )
  {
    v23 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v23);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x194,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v13);
    if ( v23 )
    {
      v29 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 88LL))(v21, &v29);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x199,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v14);
      v28 = v29;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v22 + 56LL))(
              v22,
              v21,
              &v28,
              1LL);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19A,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v15);
    }
  }
  v16 = 3LL;
  if ( *((_DWORD *)this + 53) != 1 )
    v16 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 40LL))(v22, v16);
  v6 = v17;
  if ( v17 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v19 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_69;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A3,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_65:
  v18 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_73:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v6;
}
