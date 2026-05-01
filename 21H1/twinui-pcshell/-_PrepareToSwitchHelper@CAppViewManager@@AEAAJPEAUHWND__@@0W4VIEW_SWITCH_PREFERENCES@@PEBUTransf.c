/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x18014CF08
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18014B9F8 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18014CD48 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180014820 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014918 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180014B04 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18001505C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180135D48 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180135E78 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x180136024 (WPP_SF_qd.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180148C4C (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     WPP_SF_qqL @ 0x18014F114 (WPP_SF_qqL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_PrepareToSwitchHelper(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7,
        _BYTE *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // r12
  int GlomForWindow; // r14d
  CAppViewManager *v16; // rcx
  struct IUnknown *v17; // rdi
  char IsMultiViewOperationAllowed; // al
  int v19; // ecx
  struct IUnknown *v20; // rbx
  int v21; // esi
  bool v22; // si
  int v23; // eax
  _QWORD *v24; // rcx
  USHORT v25; // dx
  int v26; // r15d
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rax
  __int64 v32; // [rsp+20h] [rbp-E0h]
  bool v33; // [rsp+30h] [rbp-D0h] BYREF
  bool v34; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v36; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v37; // [rsp+48h] [rbp-B8h] BYREF
  CAppViewManager *v38; // [rsp+50h] [rbp-B0h]
  _BYTE *v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  HWND v41; // [rsp+68h] [rbp-98h]
  _BYTE *v42; // [rsp+70h] [rbp-90h]
  __int64 *v43; // [rsp+78h] [rbp-88h]
  _QWORD v44[40]; // [rsp+80h] [rbp-80h] BYREF

  v41 = a3;
  v38 = a1;
  v40 = a5;
  v43 = a6;
  v42 = a7;
  v39 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v44,
    (__int64)"PrepareToSwitchHelper");
  v44[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v44);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqL(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, a2, a3, a4);
  v35 = 0LL;
  v14 = 0;
  v37 = 0LL;
  v36 = 0LL;
  v33 = 0;
  v34 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_61;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a2, (struct IImmersiveApplicationInternal **)&v37, &v33);
  if ( GlomForWindow < 0 )
    goto LABEL_61;
  if ( !v33 )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids,
        -2147024891);
    goto LABEL_61;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, (struct IImmersiveApplicationInternal **)&v36, &v34);
  if ( GlomForWindow >= 0 )
  {
    v17 = v36;
    IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(
                                    v16,
                                    (struct IImmersiveApplicationInternal *)v36);
    v19 = GlomForWindow;
    if ( !IsMultiViewOperationAllowed )
      v19 = -2147024891;
    GlomForWindow = v19;
    if ( v19 >= 0 )
    {
      v20 = v37;
      v21 = ((__int64 (__fastcall *)(struct IUnknown *))v37->lpVtbl[25].Release)(v37);
      v22 = ((unsigned int (__fastcall *)(struct IUnknown *))v17->lpVtbl[25].Release)(v17) == v21;
      if ( v34 )
      {
        if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *))v20->lpVtbl[16].Release)(v20)
          && !((unsigned __int8 (__fastcall *)(struct IUnknown *))v17->lpVtbl[16].Release)(v17) )
        {
          if ( (a4 & 2) == 0 )
          {
            if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
            goto LABEL_46;
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)v38 + 15)
                                                                                                + 104LL))(
                  *((_QWORD *)v38 + 15),
                  v20,
                  v17,
                  0LL);
          GlomForWindow = v23;
          v24 = WPP_GLOBAL_Control;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
LABEL_46:
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v35, (__int64 *)&v36);
            v28 = 0;
            goto LABEL_55;
          }
          v25 = 20;
LABEL_45:
          WPP_SF_d(v24[2], v25, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids, v23);
          goto LABEL_46;
        }
        v26 = a4 & 2;
        if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v17->lpVtbl[16].Release)(v17) || !v22 && v26 )
        {
          v14 = (((__int64 (__fastcall *)(struct IUnknown *))v20->lpVtbl[11].Release)(v20) & 2) != 0;
          if ( !v26 )
            goto LABEL_46;
          if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v20->lpVtbl[16].Release)(v20) )
            *v39 = 1;
          v23 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)v38 + 15)
                                                                                                + 104LL))(
                  *((_QWORD *)v38 + 15),
                  v20,
                  v17,
                  0LL);
          GlomForWindow = v23;
          v24 = WPP_GLOBAL_Control;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
            goto LABEL_46;
          v25 = 22;
          goto LABEL_45;
        }
        if ( !v26 )
        {
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
          if ( (((__int64 (__fastcall *)(struct IUnknown *))v20->lpVtbl[11].Release)(v20) & 2) != 0 )
          {
            v14 = 1;
          }
          else
          {
            v14 = 0;
            GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)v38 + 15) + 80LL))(
                              *((_QWORD *)v38 + 15),
                              v17);
          }
          *v39 = 1;
          goto LABEL_46;
        }
        v27 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)v38 + 15)
                                                                                               + 104LL))(
                *((_QWORD *)v38 + 15),
                v17,
                v20,
                v40);
        GlomForWindow = v27;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids, v27);
      }
      else if ( (unsigned int)SHIsSameObject(v20, v17) )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)v38 + 15) + 96LL))(
                *((_QWORD *)v38 + 15),
                v41,
                v17,
                v20,
                v40);
        GlomForWindow = v29;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v32) = v29;
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Au,
            &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids,
            a2,
            v32);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v35, (__int64 *)&v37);
      v28 = 1;
LABEL_55:
      if ( GlomForWindow >= 0 )
      {
        if ( v14 )
        {
          *v42 = 1;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
        }
        v30 = v35;
        v35 = 0LL;
        *v43 = v30;
        GlomForWindow = v28;
      }
    }
  }
LABEL_61:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v44, GlomForWindow);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  v44[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v44);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v44);
  return (unsigned int)GlomForWindow;
}
