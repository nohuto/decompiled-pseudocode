/*
 * XREFs of MiReturnFullProcessCharges @ 0x140224460
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x1405FA2DC (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406D3450 (PspChangeJobMemoryUsageByProcess.c)
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
