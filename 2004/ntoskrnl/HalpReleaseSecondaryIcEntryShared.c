/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x1404CC594
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x1404CBC7C (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404CBEEC (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1404CC244 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x1404CC5E0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpEnableSecondaryInterrupt @ 0x140861EB4 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140861FA0 (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x1404CBFD0 (HalpInsertSecondarySignalList.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryShared(__int64 a1, char a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return HalpInsertSecondarySignalList(a1);
      }
    }
  }
  return result;
}
