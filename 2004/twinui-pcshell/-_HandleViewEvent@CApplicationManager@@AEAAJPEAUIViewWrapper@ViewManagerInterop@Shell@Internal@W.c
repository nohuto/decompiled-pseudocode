/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000C580
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18000A640 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18000A944 (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18000C808 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003068C (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800311BC (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007CEAC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180145AA4 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180146C80 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015028C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801569F8 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801574FC (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  __int64 v6; // rdx
  void *p_ppvOut; // rcx
  int (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **); // rbx
  int (__fastcall *v10)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v11; // r8
  __int64 (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int v13; // eax
  struct IPresentationRequestedArgs *v14; // rbx
  const struct CTaskWindowFinder *v15; // rax
  int (__fastcall *v16)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  char v17; // r15
  CTaskWindowFinder *v18; // rbx
  void (__fastcall *v19)(char *, GUID *, IUnknown **); // rbx
  HRESULT v20; // eax
  __int64 (__fastcall *v21)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int v22; // eax
  int (__fastcall *v23)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int v24; // [rsp+20h] [rbp-39h]
  __int64 v25; // [rsp+30h] [rbp-29h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  struct IPresentationRequestedArgs *v28; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v30[16]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v31; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+70h] [rbp+17h] BYREF
  char v33; // [rsp+78h] [rbp+1Fh]
  int v34; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v36; // [rsp+D0h] [rbp+77h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v37; // [rsp+D8h] [rbp+7Fh] BYREF

  LODWORD(v37) = 0;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v36) < 0 )
    return 0LL;
  if ( v36 == 12 )
  {
    v28 = 0LL;
    CApplicationManager::_CreatePresentationRequestedArgs(this, a3, &v28);
    v37 = 0LL;
    v12 = **(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    v13 = v12(a3, &GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49, &v37);
    v14 = v28;
    if ( v13 >= 0 )
      (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, struct IPresentationRequestedArgs *))(**((_QWORD **)this + 75) + 112LL))(
        *((_QWORD *)this + 75),
        v37,
        v28);
    goto LABEL_30;
  }
  if ( v36 <= 12 )
  {
    if ( v36 )
    {
      switch ( v36 )
      {
        case 1:
          ppvOut = 0LL;
          v9 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*(_QWORD *)a3 + 56LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          if ( v9(a3, &ppvOut) >= 0 )
          {
            v37 = 0LL;
            v10 = **(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
            if ( v10(a3, &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e, &v37) >= 0
              && (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct IPresentationRequestedArgs **))(*(_QWORD *)a2 + 632LL))(
                   a2,
                   &v28) >= 0 )
            {
              CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, (__int64)v28, v11, v37);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
          }
          break;
        case 2:
          ppvOut = 0LL;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*(_QWORD *)a3 + 56LL))(
                 a3,
                 &ppvOut) >= 0 )
          {
            v37 = 0LL;
            if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3)(
                   a3,
                   &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                   &v37) >= 0 )
              CApplicationManager::_HandleViewNavigationRequested(
                this,
                a2,
                (struct Windows::Foundation::Collections::IPropertySet *)ppvOut,
                v37);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
          }
          break;
        case 4:
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v15 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v29, a2);
          CApplicationManager::_HandleTaskWindowDestruction(this, v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          break;
        case 5:
          v37 = 0LL;
          if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3)(
                 a3,
                 &GUID_360030af_7930_47a7_a1dd_184464be39de,
                 &v37) >= 0 )
            CApplicationManager::_HandleViewPropertyChanged(this, a2, v37);
LABEL_52:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
          return 0LL;
        default:
          return 0LL;
      }
      p_ppvOut = &ppvOut;
    }
    else
    {
      v37 = 0LL;
      if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))(*(_QWORD *)a3 + 56LL))(
             a3,
             &v37) >= 0 )
        CApplicationManager::_HandleViewCreation(this, a2, v37);
      p_ppvOut = &v37;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(p_ppvOut);
    return 0LL;
  }
  switch ( v36 )
  {
    case 13:
      v37 = 0LL;
      v23 = **(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      if ( v23(a3, &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248, &v37) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(**((_QWORD **)this + 75) + 120LL))(
          *((_QWORD *)this + 75),
          v37);
      goto LABEL_52;
    case 14:
      v28 = 0LL;
      CApplicationManager::_CreatePresentationRequestedArgs(this, a3, &v28);
      v37 = 0LL;
      v21 = **(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      v22 = v21(a3, &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7, &v37);
      v14 = v28;
      if ( v22 >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, struct IPresentationRequestedArgs *))(**((_QWORD **)this + 75) + 128LL))(
          *((_QWORD *)this + 75),
          v37,
          v28);
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      if ( v14 )
        (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)v14 + 16LL))(v14);
      return 0LL;
    case 35:
      v17 = 1;
      LOBYTE(v6) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetImpl'::`2'::impl,
        v6);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v18 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v29, a2);
      v31 = *(_QWORD *)v18;
      v32 = *((_QWORD *)v18 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
      v33 = *((_BYTE *)v18 + 16);
      v34 = 0;
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v31, &v25, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v25 )
      {
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v25, &v28);
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        punk = 0LL;
        LODWORD(v37) = 2;
        v19 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
        v19((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        v20 = IUnknown_QueryService(punk, &stru_18052B7D8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
        if ( v20 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1756,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v20,
            v24);
          v17 = 0;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
        if ( v17 )
          (*(void (__fastcall **)(void *, struct IPresentationRequestedArgs *, __int64))(*(_QWORD *)ppvOut + 32LL))(
            ppvOut,
            v28,
            8LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      break;
    case 43:
      v37 = 0LL;
      v16 = **(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      if ( v16(a3, &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8, &v37) >= 0 )
        CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(this, v37);
      goto LABEL_52;
  }
  return 0LL;
}
