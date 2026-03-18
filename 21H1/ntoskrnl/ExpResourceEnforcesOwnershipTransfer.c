/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x140263210
 * Callers:
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402630E0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DA540 (ExpSetResourceOwnerPointerEx.c)
 *     ExReinitializeResourceLite @ 0x1402DCC60 (ExReinitializeResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
