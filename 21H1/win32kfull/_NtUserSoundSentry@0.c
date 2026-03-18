/*
 * XREFs of _NtUserSoundSentry@0 @ 0x16AA91
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 */

int __stdcall NtUserSoundSentry()
{
  int v0; // esi

  EnterCrit(0, 1);
  v0 = xxxSoundSentry();
  UserSessionSwitchLeaveCrit();
  return v0;
}
