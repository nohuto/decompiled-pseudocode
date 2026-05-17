/*
 * XREFs of _CsrCaptureMessageString@20 @ 0x4B33E7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall CsrCaptureMessageString(int a1, int a2, int a3, int a4, int a5)
{
  return ZwWow64CsrCaptureMessageString(a1, a2, a3, a4, a5);
}
