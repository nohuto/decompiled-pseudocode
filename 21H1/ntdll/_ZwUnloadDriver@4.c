/*
 * XREFs of _ZwUnloadDriver@4 @ 0x4B2F45E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return Wow64SystemServiceCall();
}
