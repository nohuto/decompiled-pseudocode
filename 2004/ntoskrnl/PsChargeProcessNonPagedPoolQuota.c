/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x14024A060
 * Callers:
 *     MiFreeVadRange @ 0x140252064 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140554620 (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x1406F007C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x14070B750 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x1408D238C (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D4CD8 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D5904 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x140949124 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1409CE740 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], a1, 0LL, a2);
}
