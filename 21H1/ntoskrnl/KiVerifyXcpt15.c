/*
 * XREFs of KiVerifyXcpt15 @ 0x140A18320
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     MiCreateSystemWsles @ 0x1402B3480 (MiCreateSystemWsles.c)
 *     MmMapIoSpaceEx @ 0x1402F8F10 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x140322850 (KeExpandKernelStackAndCallout.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14033B320 (RtlSectionTableFromVirtualAddress.c)
 *     RtlCaptureImageExceptionValues @ 0x14036F230 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1403CB6D0 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1403CD750 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x14050B290 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140A3E990 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140A5E7BC (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A6FA58 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140A18345);
}
