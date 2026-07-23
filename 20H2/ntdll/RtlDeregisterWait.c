/*
 * XREFs of RtlDeregisterWait @ 0x180085960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeregisterWait(HANDLE WaitHandle)
{
  return RtlDeregisterWaitEx(WaitHandle, 0LL);
}
