/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1402799D0
 * Callers:
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140554504 (MiDeleteCloneDescriptor.c)
 *     MiReturnVadQuota @ 0x14062DB60 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406DD89C (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406EB458 (MiFreeRotateVadEvent.c)
 *     MiDeleteAweBitMap @ 0x1408D149C (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D3988 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D3B18 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D45B4 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1408D4710 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x1408D4D98 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x140947D24 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x140947D84 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1409CE22C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1409CE730 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 0, a2);
  return result;
}
