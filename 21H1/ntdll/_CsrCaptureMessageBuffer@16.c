/*
 * XREFs of _CsrCaptureMessageBuffer@16 @ 0x4B33E730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall CsrCaptureMessageBuffer(int a1, int a2, int a3, int a4)
{
  return ZwWow64CsrCaptureMessageBuffer(a1, a2, a3, a4);
}
