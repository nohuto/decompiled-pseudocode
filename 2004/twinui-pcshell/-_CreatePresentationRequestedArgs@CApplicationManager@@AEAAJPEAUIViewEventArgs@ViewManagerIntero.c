/*
 * XREFs of ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18000A944
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000C580 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007CEAC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1801442A4 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180145AA4 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180146C80 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a2,
        struct IPresentationRequestedArgs **a3)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v6; // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int (__fastcall *v10)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  CTaskWindowFinder *v11; // rbx
  int First; // ebx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v13; // rcx
  int v14; // eax
  PVOID Ptr; // rdi
  __int64 (__fastcall *v16)(PVOID, __int64, int *); // rbx
  int v17; // eax
  _QWORD *v18; // rax
  struct IPresentationRequestedArgs *v19; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v20; // rcx
  int v21[2]; // [rsp+20h] [rbp-88h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+28h] [rbp-80h] BYREF
  __int64 v23; // [rsp+30h] [rbp-78h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v24; // [rsp+38h] [rbp-70h] BYREF
  struct IPresentationRequestedArgs *v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  char v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-48h]
  _BYTE v30[8]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v31[56]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v33; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    *a3 = 0LL;
    v34 = 0LL;
    v33 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = **(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs ***)a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    LOBYTE(v6) = ((int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))v6)(
                   a2,
                   &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684,
                   &v34) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    if ( !(_BYTE)v6 )
      goto LABEL_7;
    v33 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*(_QWORD *)v34 + 48LL))(
           v34,
           &v33);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x211F,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v7,
        v21[0]);
    }
    else
    {
      v6 = v33;
      if ( !v33 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        return 2147943568LL;
      }
    }
    v22 = 0LL;
    *(_QWORD *)v21 = 0LL;
    v10 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v6 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( v10(v6, &v22) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v35 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      v11 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v30, v22);
      v26 = *(_QWORD *)v11;
      v27 = *((_QWORD *)v11 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
      v28 = *((_BYTE *)v11 + 16);
      v29 = 0;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v26, &v35, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( First < 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        v13 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, _QWORD))(*(_QWORD *)v13 + 16LL))(
            v13,
            *(_QWORD *)v13);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        return (unsigned int)First;
      }
      v23 = 0LL;
      v14 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v35, &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x212F,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v14,
          v21[0]);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v16 = *(__int64 (__fastcall **)(PVOID, __int64, int *))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
      v17 = v16(Ptr, v23, v21);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2130,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v17,
          v21[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    }
    v25 = 0LL;
    v23 = *(_QWORD *)v21;
    v24 = v33;
    v18 = (_QWORD *)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                      &v35,
                      &v24,
                      &v23);
    if ( *v18 )
      v19 = (struct IPresentationRequestedArgs *)(*v18 + 16LL);
    else
      v19 = 0LL;
    *v18 = 0LL;
    v25 = v19;
    if ( v35 )
    {
      v35 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release();
    }
    if ( v19 )
      (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)v19 + 8LL))(v19);
    *a3 = v19;
    if ( v19 )
      (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v20 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v33) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x213E,
                     (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v8);
    return (unsigned int)v33;
  }
  return result;
}
