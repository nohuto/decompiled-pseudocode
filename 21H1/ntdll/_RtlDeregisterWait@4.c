/*
 * XREFs of _RtlDeregisterWait@4 @ 0x4B385450
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 */

NTSTATUS __cdecl RtlDeregisterWait(HANDLE WaitHandle)
{
  return RtlDeregisterWaitEx(WaitHandle, 0);
}
