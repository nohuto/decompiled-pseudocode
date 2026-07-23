/*
 * XREFs of _ZwSuspendProcess@4 @ 0x4B2F4530
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSuspendProcess(HANDLE ProcessHandle)
{
  return Wow64SystemServiceCall();
}
