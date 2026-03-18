/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14033E7C0
 * Callers:
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x140700FA0 (EtwpPsProvTraceThread.c)
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
