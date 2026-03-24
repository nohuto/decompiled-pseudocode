/*
 * XREFs of MiReturnFullProcessCharges @ 0x140318370
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140682EB0 (MiDeleteVadBitmap.c)
 *     MiRemoveVadCharges @ 0x1406ED1F0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1406EE5F0 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x140680630 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1406EE75C (PsReturnProcessPageFileQuota.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
