/*
 * XREFs of ?OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099300
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D110 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180098844 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewDestroyed(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(
    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
    0);
  if ( *((_QWORD *)a2 + 3) && *((_QWORD *)this + 54) )
  {
    v11 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))a2 + 3,
           (__int64)&v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 259LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return v5;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 88LL))(v11, *((_QWORD *)this + 54));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 260LL;
      goto LABEL_7;
    }
    *((_QWORD *)this + 54) = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  v8 = *((_QWORD *)this + 42);
  if ( v8 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v8 + 8LL))(v8, a2);
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    if ( *((_DWORD *)this + 105) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      *((_DWORD *)this + 105) = 0;
    }
  }
  return 0LL;
}
