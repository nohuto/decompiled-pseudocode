/*
 * XREFs of KiVerifyXcpt15 @ 0x140AD6320
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmGetMinWsPagePriority @ 0x14024DA70 (MmGetMinWsPagePriority.c)
 *     KeExpandKernelStackAndCallout @ 0x14025D2A0 (KeExpandKernelStackAndCallout.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402D6F40 (RtlSectionTableFromVirtualAddress.c)
 *     RtlCaptureImageExceptionValues @ 0x1402D8EEC (RtlCaptureImageExceptionValues.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x140565360 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140565580 (KdEnableDebugger.c)
 *     KiVerifyXcpt2 @ 0x140B19880 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140B1D468 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B31590 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KiVerifyXcpt15()
{
  _QWORD v1[42]; // [rsp+0h] [rbp-198h] BYREF

  v1[21] = v1;
  KiVerifyXcpt2();
  return local_unwind((ULONG_PTR)v1, (__int64)&loc_140AD6345);
}
