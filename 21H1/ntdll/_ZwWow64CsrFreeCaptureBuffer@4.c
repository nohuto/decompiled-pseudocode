/*
 * XREFs of _ZwWow64CsrFreeCaptureBuffer@4 @ 0x4B2F4730
 * Callers:
 *     _CsrFreeCaptureBuffer@4 @ 0x4B33E860 (_CsrFreeCaptureBuffer@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwWow64CsrFreeCaptureBuffer(int a1)
{
  return Wow64SystemServiceCall();
}
