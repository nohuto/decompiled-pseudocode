/*
 * XREFs of PsGetCurrentThreadTeb @ 0x140277FD0
 * Callers:
 *     EtwTraceThread @ 0x14064E3B4 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x14064E710 (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  else
    return CurrentThread->Teb;
}
