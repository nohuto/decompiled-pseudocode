/*
 * XREFs of KiVerifyXcpt15 @ 0x140A1B320
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140294E50 (MmMapIoSpaceEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402A8F10 (RtlSectionTableFromVirtualAddress.c)
 *     MiCreateSystemWsles @ 0x1402C0BD0 (MiCreateSystemWsles.c)
 *     KeExpandKernelStackAndCallout @ 0x1402D3350 (KeExpandKernelStackAndCallout.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     RtlCaptureImageExceptionValues @ 0x1403725AC (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1403CFA20 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1403D1B90 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x140510D40 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140A423F0 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140A661DC (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A739D8 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KiVerifyXcpt15()
{
  _QWORD v1[42]; // [rsp+0h] [rbp-198h] BYREF

  v1[21] = v1;
  KiVerifyXcpt2();
  return local_unwind((unsigned __int64)v1, (__int64)&loc_140A1B345);
}
