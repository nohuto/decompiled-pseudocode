/*
 * XREFs of _DbgUiContinue@8 @ 0x4B32D850
 * Callers:
 *     <none>
 * Callees:
 *     _ZwDebugContinue@12 @ 0x4B2F3660 (_ZwDebugContinue@12.c)
 */

NTSTATUS __cdecl DbgUiContinue(PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  return ZwDebugContinue(NtCurrentTeb()->DbgSsReserved[1], AppClientId, ContinueStatus);
}
