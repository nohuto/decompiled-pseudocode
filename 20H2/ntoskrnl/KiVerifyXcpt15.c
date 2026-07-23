/*
 * XREFs of KiVerifyXcpt15 @ 0x140A1E320
 * Callers:
 *     <none>
 * Callees:
 *     MiCreateSystemWsles @ 0x140231820 (MiCreateSystemWsles.c)
 *     MmMapIoSpaceEx @ 0x14025FEE0 (MmMapIoSpaceEx.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402FE1D0 (RtlSectionTableFromVirtualAddress.c)
 *     KeExpandKernelStackAndCallout @ 0x140331040 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x140371DB0 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1403CF0B0 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1403D1220 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x14050F210 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140A4A494 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140A64BBC (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A76A58 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140A1E345);
}
