/*
 * XREFs of KiVerifyXcpt15 @ 0x140A1C320
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x140227050 (RtlSectionTableFromVirtualAddress.c)
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     KeExpandKernelStackAndCallout @ 0x140251680 (KeExpandKernelStackAndCallout.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     RtlCaptureImageExceptionValues @ 0x1403720FC (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1403CFB90 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1403D1D00 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x140510F80 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140A433F0 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140A671DC (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A749D8 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140A1C345);
}
