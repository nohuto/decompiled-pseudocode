/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x14022E5E0
 * Callers:
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140557FF0 (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x1406C3B04 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406DD978 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x1408D81CC (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408DAB18 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x1408DB744 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x14094EEE4 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D4760 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x14027C5C0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], a1, 0LL, a2);
}
