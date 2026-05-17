/*
 * XREFs of _CsrGetProcessId@0 @ 0x4B33E870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall CsrGetProcessId()
{
  return NtWow64CsrGetProcessId();
}
