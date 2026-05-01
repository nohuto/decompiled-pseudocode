/*
 * XREFs of ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007A438
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007A380 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F6A44 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180016480 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x18007A4E8 (--$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18007A7DC (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppExperienceManager::_ApplyPriorityBoostIfNeeded(SearchAppExperienceManager *this)
{
  char *v1; // rdi
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp+30h] BYREF

  v7 = 0;
  v1 = (char *)this + 540;
  v2 = 0;
  if ( *((_DWORD *)this + 135) )
  {
    SearchAppExperienceManager::_GetViewWrapper(this, &v9);
    if ( v9 )
    {
      v8 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             &v9,
             (__int64)&v8);
      v2 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x57E,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      v7 = v2;
      if ( v2 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
        v2 = v4;
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x581,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
        v7 = v2;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
    else
    {
      v2 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  CortanaProactiveTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v7, v1);
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x586,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
