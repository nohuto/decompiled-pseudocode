/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1402AF060
 * Callers:
 *     ExReinitializeResourceLite @ 0x14021A5F0 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14021A7D0 (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402AEF40 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
