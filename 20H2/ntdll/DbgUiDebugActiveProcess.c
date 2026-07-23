/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CCAE0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x18009EA40 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x18009FEC0 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CCB70 (DbgUiIssueRemoteBreakin.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}
