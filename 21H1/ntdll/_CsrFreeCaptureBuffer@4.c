/*
 * XREFs of _CsrFreeCaptureBuffer@4 @ 0x4B33E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall CsrFreeCaptureBuffer(int a1)
{
  return ZwWow64CsrFreeCaptureBuffer(a1);
}
