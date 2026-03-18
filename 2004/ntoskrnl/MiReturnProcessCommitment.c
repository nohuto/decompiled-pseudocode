/*
 * XREFs of MiReturnProcessCommitment @ 0x14054B2A4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
