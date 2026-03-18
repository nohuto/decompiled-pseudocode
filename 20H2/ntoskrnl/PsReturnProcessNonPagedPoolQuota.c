/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140230440
 * Callers:
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140558524 (MiDeleteCloneDescriptor.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x140625D80 (MiReturnVadQuota.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406D3850 (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406E15D8 (MiFreeRotateVadEvent.c)
 *     MiDeleteAweBitMap @ 0x1408D862C (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408DAB18 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x1408DACA8 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x1408DB744 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1408DB8A0 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x1408DBF28 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094EE84 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14094EEE4 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1409D425C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D4760 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 0, a2);
  return result;
}
