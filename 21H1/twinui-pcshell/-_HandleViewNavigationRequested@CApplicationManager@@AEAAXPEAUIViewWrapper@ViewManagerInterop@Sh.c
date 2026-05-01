/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18000C268
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000BFE0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18000C5CC (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000C6EC (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  int v8; // ebx
  HRESULT v9; // ebx
  HRESULT v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  struct Windows::Foundation::Collections::IPropertySet *v15; // r8
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-39h]
  IUnknown *punk; // [rsp+30h] [rbp-29h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-21h] BYREF
  __int64 v21; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-9h] BYREF
  __int64 v24; // [rsp+58h] [rbp-1h] BYREF
  __int64 v25; // [rsp+60h] [rbp+7h]
  void *v26; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+70h] [rbp+17h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v28; // [rsp+78h] [rbp+1Fh] BYREF
  char v29; // [rsp+80h] [rbp+27h]
  int v30; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v32; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+6Fh] BYREF

  LODWORD(v32) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v33 = 0LL;
  pv = 0LL;
  v24 = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  LOBYTE(v25) = 0;
  v27 = 0LL;
  v28 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v29 = 0;
  v30 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
         (int)this + 632,
         (unsigned int)&v27,
         (unsigned int)&v32,
         (unsigned int)&ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  if ( v8 >= 0 )
    v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut))(
           *(_QWORD *)(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 **))v33)(v33, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v22);
    v21 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, __int64 *, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr
                                                            + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
           v22,
           &v21) >= 0 )
    {
      ppvOut = 0LL;
      punk = 0LL;
      LODWORD(v32) = 2;
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
        (char *)this + 48,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      v9 = IUnknown_QueryService(
             punk,
             &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
             &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
             &ppvOut);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
      if ( v9 >= 0
        && (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             v21,
             a3) >= 0 )
      {
        v26 = 0LL;
        punk = 0LL;
        LODWORD(v32) = 9;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
          (char *)this + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        v10 = IUnknown_QueryService(
                punk,
                &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                &v26);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
        if ( v10 >= 0 )
        {
          LODWORD(v32) = 0;
          if ( (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *, __int64 *))(*(_QWORD *)v26 + 80LL))(
                 v26,
                 v21,
                 a3,
                 &v32) >= 0 )
          {
            if ( (_DWORD)v32 )
            {
              LOBYTE(v11) = 1;
              v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 72LL))(
                      a4,
                      v11);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x17DD,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v17,
                  v18);
            }
          }
        }
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 640LL))(v33);
        v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, _QWORD))(*(_QWORD *)a4 + 56LL))(
                a4,
                v12);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x17E3,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v13,
            v18);
        pv = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v14 = *v22;
        v24 = -1LL;
        v25 = -1LL;
        if ( (*(int (__fastcall **)(__int64 *, LPVOID *))(v14 + 32))(v22, &pv) >= 0 )
        {
          v16 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
                  (LPCWSTR)pv,
                  (const unsigned __int16 *)a3,
                  v15);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x17ED,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v16,
              v18);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v24 = 0LL;
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
}
