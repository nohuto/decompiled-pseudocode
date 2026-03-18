/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x1404CFAF4
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x1404CF1DC (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404CF44C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1404CF7A4 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x1404CFB40 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpEnableSecondaryInterrupt @ 0x1408678D4 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x1408679C0 (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x1404CF530 (HalpInsertSecondarySignalList.c)
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
