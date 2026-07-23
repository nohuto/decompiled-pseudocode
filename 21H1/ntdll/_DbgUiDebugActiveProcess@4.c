/*
 * XREFs of _DbgUiDebugActiveProcess@4 @ 0x4B32DAA0
 * Callers:
 *     <none>
 * Callees:
 *     _NtDebugActiveProcess@8 @ 0x4B2F3650 (_NtDebugActiveProcess@8.c)
 *     _ZwRemoveProcessDebug@8 @ 0x4B2F4090 (_ZwRemoveProcessDebug@8.c)
 *     _DbgUiIssueRemoteBreakin@4 @ 0x4B32DB10 (_DbgUiIssueRemoteBreakin@4.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // esi

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}
