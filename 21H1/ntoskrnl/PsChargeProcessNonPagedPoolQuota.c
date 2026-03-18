/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x1402A3090
 * Callers:
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140553FD0 (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x1406CED78 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406E7820 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x1408D103C (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D3988 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D45B4 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x140947D84 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1409CE730 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x1402641B0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 0, a2);
}
