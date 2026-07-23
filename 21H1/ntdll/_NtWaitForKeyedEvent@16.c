/*
 * XREFs of _NtWaitForKeyedEvent@16 @ 0x4B2F46A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  return Wow64SystemServiceCall();
}
