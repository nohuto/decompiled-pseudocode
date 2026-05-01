/*
 * XREFs of ?DisplaySettingsChange@CJumpViewExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801D7380
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x180089480 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a3 & 0x11) != 0 )
  {
    v3 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)(a1 - 16), 1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  return 0LL;
}
