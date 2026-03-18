/*
 * XREFs of MiReturnProcessCommitment @ 0x14054AC54
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
