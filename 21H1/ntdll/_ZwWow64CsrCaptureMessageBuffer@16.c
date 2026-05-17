/*
 * XREFs of _ZwWow64CsrCaptureMessageBuffer@16 @ 0x4B2F4750
 * Callers:
 *     _CsrCaptureMessageBuffer@16 @ 0x4B33E730 (_CsrCaptureMessageBuffer@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwWow64CsrCaptureMessageBuffer(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
