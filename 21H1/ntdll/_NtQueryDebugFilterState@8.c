/*
 * XREFs of _NtQueryDebugFilterState@8 @ 0x4B2F3D90
 * Callers:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     _DbgQueryDebugFilterState@8 @ 0x4B33EEA0 (_DbgQueryDebugFilterState@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return Wow64SystemServiceCall();
}
