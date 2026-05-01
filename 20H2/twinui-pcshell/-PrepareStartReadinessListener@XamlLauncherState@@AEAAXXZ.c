/*
 * XREFs of ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x180335AF0
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180333960 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7947749ff377f6aa715860047a9db9b7___ @ 0x180331FCC (Windows--Internal--ComTaskPool--QueueTask__lambda_7947749ff377f6aa715860047a9db9b7___.c)
 */

void __fastcall XamlLauncherState::PrepareStartReadinessListener(XamlLauncherState *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlLauncherState *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = Windows::Internal::ComTaskPool::QueueTask__lambda_7947749ff377f6aa715860047a9db9b7___((__int64)this, &v4);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v2);
    *((_BYTE *)this + 974) = 1;
  }
}
