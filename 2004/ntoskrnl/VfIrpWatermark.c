/*
 * XREFs of VfIrpWatermark @ 0x1409CE68C
 * Callers:
 *     IovUtilWatermarkIrp @ 0x1402716FC (IovUtilWatermarkIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409DD798 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD91C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIrpWatermark(__int64 a1, char a2)
{
  __int64 result; // rax

  result = VfIrpDatabaseEntryFindAndLock(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return VfIrpDatabaseEntryReleaseLock(result);
  }
  return result;
}
