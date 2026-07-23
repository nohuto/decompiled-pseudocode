/*
 * XREFs of HalpUnregisterSecondaryIcInterface @ 0x1404D1750
 * Callers:
 *     <none>
 * Callees:
 *     HalpDeleteSecondaryIcEntry @ 0x1404D0D60 (HalpDeleteSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404D0F6C (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404D1704 (HalpReleaseSecondaryIcEntryShared.c)
 */

__int64 __fastcall HalpUnregisterSecondaryIcInterface(int a1, int a2, __int64 a3)
{
  void *SecondaryIcEntryFromObjectAndRange; // rax
  __int64 v4; // rdi
  int v5; // ebx

  SecondaryIcEntryFromObjectAndRange = (void *)HalpFindSecondaryIcEntryFromObjectAndRange(a3, a1, a2);
  v4 = (__int64)SecondaryIcEntryFromObjectAndRange;
  if ( SecondaryIcEntryFromObjectAndRange )
  {
    v5 = HalpDeleteSecondaryIcEntry(SecondaryIcEntryFromObjectAndRange);
    if ( v5 < 0 )
      HalpReleaseSecondaryIcEntryShared(v4, 1);
  }
  else
  {
    return (unsigned int)-1073700575;
  }
  return (unsigned int)v5;
}
