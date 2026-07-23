/*
 * XREFs of KiVerifyXcpt15 @ 0x140A18320
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MiCreateSystemWsles @ 0x14025A450 (MiCreateSystemWsles.c)
 *     MmMapIoSpaceEx @ 0x140335F40 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x140360460 (KeExpandKernelStackAndCallout.c)
 *     RtlSectionTableFromVirtualAddress @ 0x140361FE0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlCaptureImageExceptionValues @ 0x14036FE60 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1403CC490 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1403CE590 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x14050B8E0 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140A441F4 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140A5D85C (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A70620 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140A18345);
}
