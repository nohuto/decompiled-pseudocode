/*
 * XREFs of _NtWow64CsrAllocateCaptureBuffer@8 @ 0x4B2F4720
 * Callers:
 *     _CsrAllocateCaptureBuffer@8 @ 0x4B33E710 (_CsrAllocateCaptureBuffer@8.c)
 *     _CsrCaptureMessageMultiUnicodeStringsInPlace@12 @ 0x4B33E740 (_CsrCaptureMessageMultiUnicodeStringsInPlace@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64CsrAllocateCaptureBuffer(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
