/*
 * XREFs of MiReturnProcessCommitment @ 0x1405B3370
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
