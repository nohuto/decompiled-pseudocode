/*
 * XREFs of _NtSetDebugFilterState@12 @ 0x4B2F4240
 * Callers:
 *     _DbgSetDebugFilterState@12 @ 0x4B33EEB0 (_DbgSetDebugFilterState@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return Wow64SystemServiceCall();
}
