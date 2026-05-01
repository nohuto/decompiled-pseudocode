/*
 * XREFs of ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F5524
 * Callers:
 *     ?UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F54E0 (-UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D64C (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(
        CortanaStoreAppExperienceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 200);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *((_QWORD *)this + 21));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 29) && *((_QWORD *)this + 22) )
  {
    v11 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))this + 29,
           (__int64)&v11);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 88LL))(v11, *((_QWORD *)this + 22));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  if ( *((_QWORD *)this + 33) )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  v6 = *((_QWORD *)this + 35);
  if ( v6 )
  {
    if ( *((_DWORD *)this + 46) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    if ( *((_DWORD *)this + 47) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 48LL))(*((_QWORD *)this + 35));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  v7 = *((_QWORD *)this + 36);
  if ( v7 && *((_DWORD *)this + 48) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v8 = *((_QWORD *)this + 36);
  if ( v8 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)this + 48) = 0;
  return 0LL;
}
