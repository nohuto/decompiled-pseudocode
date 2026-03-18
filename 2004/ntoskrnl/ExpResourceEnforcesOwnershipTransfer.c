/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14020A2F0
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14020A1C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReinitializeResourceLite @ 0x140278850 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
