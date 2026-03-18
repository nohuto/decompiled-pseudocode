/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x1404CC0E4
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x1404CB7CC (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404CBA3C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1404CBD94 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x1404CC130 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpEnableSecondaryInterrupt @ 0x140860BB8 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140860CA4 (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x1404CBB20 (HalpInsertSecondarySignalList.c)
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
