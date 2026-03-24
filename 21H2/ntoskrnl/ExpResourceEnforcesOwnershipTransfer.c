/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14034D1A0
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x140286C70 (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x1402F50A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402F7920 (ExReinitializeResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14034D070 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
