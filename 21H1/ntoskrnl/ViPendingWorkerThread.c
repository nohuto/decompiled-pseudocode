/*
 * XREFs of ViPendingWorkerThread @ 0x1409D2E30
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2AB4 (ViPendingCompleteAfterWait.c)
 */

void __fastcall __noreturn ViPendingWorkerThread(_QWORD *StartContext)
{
  char *v2; // rcx

  while ( 1 )
  {
    KeWaitForSingleObject(StartContext + 2, Executive, 0, 0, 0LL);
    v2 = (char *)StartContext[1];
    ++*((_DWORD *)StartContext + 10);
    ViPendingCompleteAfterWait(v2);
    StartContext[1] = 0LL;
  }
}
