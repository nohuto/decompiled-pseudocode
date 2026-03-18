/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x140220980
 * Callers:
 *     MiFreeVadRange @ 0x140252064 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140554B54 (MiDeleteCloneDescriptor.c)
 *     MiReturnVadQuota @ 0x1405F8B20 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407005BC (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x14070F0C0 (MiFreeRotateVadEvent.c)
 *     MiDeleteAweBitMap @ 0x1408D27EC (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408D4CD8 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D4E68 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D5904 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x1408D5A60 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x1408D60E8 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409490C4 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x140949124 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1409CE23C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1409CE740 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 0LL, a2);
  return result;
}
