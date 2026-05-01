/*
 * XREFs of ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x18034F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803563B4 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180356494 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::OobeCompletedCallback(TouchKeyboardExperienceManager *a1)
{
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(a1);
  TouchKeyboardExperienceManager::UpdateOobeRunningState(a1);
  if ( *((_QWORD *)a1 + 100) )
  {
    UnregisterWaitUntilOOBECompleted();
    *((_QWORD *)a1 + 100) = 0LL;
  }
}
