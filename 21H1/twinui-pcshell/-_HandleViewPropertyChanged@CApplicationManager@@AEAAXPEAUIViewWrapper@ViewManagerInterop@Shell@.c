/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180030430
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000BFE0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18000C5CC (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801213F0 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180122598 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18012AB18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801326A8 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180132950 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *); // rbx
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  HRESULT v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // ebx
  int (__fastcall *v18)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *); // rbx
  HRESULT v19; // eax
  int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // edi
  __int64 v23; // r8
  HRESULT v24; // ebx
  CTaskWindowFinder *v25; // rbx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+20h] [rbp-69h]
  INT32 result; // [rsp+30h] [rbp-59h] BYREF
  __int64 v31; // [rsp+38h] [rbp-51h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-49h] BYREF
  __int64 v33; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-31h] BYREF
  __int64 v36; // [rsp+60h] [rbp-29h] BYREF
  int v37; // [rsp+68h] [rbp-21h]
  IUnknown *punk; // [rsp+70h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h] BYREF
  __int64 v40; // [rsp+80h] [rbp-9h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v41; // [rsp+88h] [rbp-1h] BYREF
  char v42; // [rsp+90h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v37 = 0;
  string1 = 0LL;
  v6 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( v6(a3, &string1) < 0 )
    goto LABEL_33;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    v25 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&v40, a2);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&hstringHeader.Reserved.Reserved2[8]);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v25 + 16);
    LODWORD(string) = 0;
    LOBYTE(v25) = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                         this,
                         &hstringHeader,
                         &v31,
                         0LL) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    if ( (_BYTE)v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 208LL))(v31);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_32;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const WCHAR **)&off_18046D1E8,
          v10);
  if ( WindowsCompareStringOrdinal(string1, (HSTRING)v11[1].Reserved.Reserved1, &result) >= 0 && !result )
  {
    v26 = CApplicationManager::_HandleUniversalFrameChangeRequest(this, a2);
    v27 = retaddr;
    if ( v26 >= 0 )
      goto LABEL_33;
    v28 = 6473LL;
LABEL_42:
    wil::details::in1diag3::_Log_Hr(
      v27,
      (void *)v28,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v26,
      v29);
    goto LABEL_33;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const WCHAR **)&off_18046D1F0,
          v12);
  if ( WindowsCompareStringOrdinal(string1, (HSTRING)v13[1].Reserved.Reserved1, &result) >= 0 && !result )
  {
    v26 = CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(this, a2);
    v27 = retaddr;
    if ( v26 >= 0 )
      goto LABEL_33;
    v28 = 6477LL;
    goto LABEL_42;
  }
  string = 0LL;
  v14 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14, v15, v16);
    goto LABEL_44;
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v31 = 0LL;
    v40 = 0LL;
    v41 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v42 = 0;
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    hstringHeader.Reserved.Reserved2[16] = 0;
    LODWORD(string) = 0;
    v31 = 0LL;
    v33 = 0LL;
    v17 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
            (_QWORD *)this + 79,
            (__int64)&hstringHeader,
            &v33,
            &ppvOut,
            v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    if ( v17 >= 0 )
      v17 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut))(
              *(_QWORD *)(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut),
              &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
              &v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    v39 = 0LL;
    if ( v17 >= 0 )
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v31 + 352LL))(
              v31,
              2LL,
              &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
              &v39);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v17 < 0
      || !(*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v39 + 48LL))(
            v39,
            a2) )
    {
      goto LABEL_31;
    }
    v33 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v31)(v31, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v33);
    v36 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr
                                                          + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
           v33,
           &v36) < 0 )
    {
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
LABEL_31:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      goto LABEL_33;
    }
    v34 = 0;
    v18 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 416LL);
    string = 0LL;
    v19 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v19 >= 0 )
    {
      if ( v18(a2, string, &v34) >= 0 )
      {
        v22 = v34;
        if ( v34 )
        {
          v23 = 0LL;
          if ( v34 == 1 )
            v23 = 64LL;
        }
        else
        {
          v23 = 32LL;
        }
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v36 + 464LL))(v36, 96LL, v23);
        ppvOut = 0LL;
        punk = 0LL;
        v37 = 32;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
          (char *)this + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        v24 = IUnknown_QueryService(
                punk,
                &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                &ppvOut);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
        if ( v24 >= 0 )
          (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v36, v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      }
      goto LABEL_30;
    }
LABEL_44:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19, v20, v21);
    __debugbreak();
  }
LABEL_33:
  WindowsDeleteString(string1);
}
