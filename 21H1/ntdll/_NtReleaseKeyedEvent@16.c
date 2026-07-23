/*
 * XREFs of _NtReleaseKeyedEvent@16 @ 0x4B2F4060
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtReleaseKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  return Wow64SystemServiceCall();
}
