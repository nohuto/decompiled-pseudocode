/*
 * XREFs of HalpDpInitSystem @ 0x1409A2490
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpDpInitDiscard @ 0x140A6E3F4 (HalpDpInitDiscard.c)
 */

__int64 HalpDpInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() == 1 )
  {
    if ( v0 == 7 )
    {
      HalpDpInitDiscard(v1);
    }
    else if ( v0 == 17 )
    {
      off_140C00678[0] = (__int64 (__fastcall *)())HalpDpReplaceBegin;
      off_140C00680[0] = HalpDpReplaceTarget;
      off_140C00688[0] = HalpDpReplaceControl;
      off_140C00690[0] = (__int64 (__fastcall *)())HalpDpReplaceEnd;
      off_140C006D8[0] = HalpInterruptMaskLevelTriggeredLines;
      off_140C006E8[0] = HalpDpGetInterruptReplayState;
      off_140C006F0[0] = HalpDpReplayInterrupts;
      off_140C006E0[0] = HalpInterruptUnmaskLevelTriggeredLines;
    }
  }
  return 0LL;
}
