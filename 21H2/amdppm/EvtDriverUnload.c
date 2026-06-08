/*
 * XREFs of EvtDriverUnload @ 0x1C0021E40
 * Callers:
 *     DriverEntry @ 0x1C0038364 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS EvtDriverUnload()
{
  REGHANDLE v0; // rcx
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C0014068 = 0;
    EtwUnregister(v0);
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
