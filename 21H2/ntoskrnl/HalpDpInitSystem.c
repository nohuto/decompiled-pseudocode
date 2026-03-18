/*
 * XREFs of HalpDpInitSystem @ 0x140A5B590
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpDpInitDiscard @ 0x140B27788 (HalpDpInitDiscard.c)
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
      off_140C01CC8[0] = (__int64 (__fastcall *)())HalpDpReplaceBegin;
      off_140C01CD0[0] = HalpDpReplaceTarget;
      off_140C01CD8[0] = HalpDpReplaceControl;
      off_140C01CE0[0] = (__int64 (__fastcall *)())HalpDpReplaceEnd;
      off_140C01D28[0] = HalpInterruptMaskLevelTriggeredLines;
      off_140C01D38[0] = HalpDpGetInterruptReplayState;
      off_140C01D40[0] = HalpDpReplayInterrupts;
      off_140C01D30[0] = HalpInterruptUnmaskLevelTriggeredLines;
    }
  }
  return 0LL;
}
