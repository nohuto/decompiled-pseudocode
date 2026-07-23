/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x140357EF0
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x140203E10 (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140302670 (ExReinitializeResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140357DC0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
