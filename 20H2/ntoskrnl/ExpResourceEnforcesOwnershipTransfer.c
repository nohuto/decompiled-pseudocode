/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x140223270
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140223140 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x14035B400 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14035CC50 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
