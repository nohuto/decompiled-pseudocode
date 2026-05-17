/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CCAE0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x18009EA40 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x18009FEC0 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CCB70 (DbgUiIssueRemoteBreakin.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = NtDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      ZwRemoveProcessDebug();
  }
  return (unsigned int)active;
}
