/*
 * XREFs of _xxxOldMessageBeep@0 @ 0x178FE8
 * Callers:
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 * Callees:
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     _UserBeep@8 @ 0x17DF0D (_UserBeep@8.c)
 */

int __stdcall xxxOldMessageBeep()
{
  int v0; // esi

  if ( ((unsigned int)&loc_80000 & _gdwPUDFlags) != 0 )
  {
    if ( _gdwInAtomicOperation )
    {
      if ( (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    }
    UserSessionSwitchLeaveCrit();
    v0 = UserBeep(440, 125);
    EnterCrit(0, 1);
    return v0;
  }
  else
  {
    xxxSoundSentry();
    return 1;
  }
}
