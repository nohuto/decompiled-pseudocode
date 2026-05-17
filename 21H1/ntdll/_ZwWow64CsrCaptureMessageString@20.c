/*
 * XREFs of _ZwWow64CsrCaptureMessageString@20 @ 0x4B2F4760
 * Callers:
 *     _CsrCaptureMessageString@20 @ 0x4B33E7D0 (_CsrCaptureMessageString@20.c)
 *     _CsrCaptureMessageUnicodeStringInPlace@8 @ 0x4B33E7D5 (_CsrCaptureMessageUnicodeStringInPlace@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwWow64CsrCaptureMessageString(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
