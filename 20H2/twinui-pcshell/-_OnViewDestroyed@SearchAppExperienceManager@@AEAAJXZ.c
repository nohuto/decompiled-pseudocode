/*
 * XREFs of ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F6B30
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007A380 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 * Callees:
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x180010778 (--$InvokeAll@PEAVSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180046868 (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F7058 (-_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewDestroyed(SearchAppExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = SearchAppExperienceManager::_CancelDeferredSuspensionTimer(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x488,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = SearchAppExperienceManager::_UnregisterViewPresentationChanged(this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x489,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
    (__int64)this + 96,
    (__int64)this);
  return 0LL;
}
