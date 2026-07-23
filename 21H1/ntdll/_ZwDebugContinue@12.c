/*
 * XREFs of _ZwDebugContinue@12 @ 0x4B2F3660
 * Callers:
 *     _DbgUiContinue@8 @ 0x4B32D850 (_DbgUiContinue@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  return Wow64SystemServiceCall();
}
