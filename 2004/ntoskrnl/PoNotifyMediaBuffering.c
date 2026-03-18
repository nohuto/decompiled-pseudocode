/*
 * XREFs of PoNotifyMediaBuffering @ 0x14036A2E0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1402D1A50 (KeQueryPriorityThread.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx
  int v5; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_140C24468 )
  {
    v2 = 1;
    byte_140C24468 = 1;
  }
  byte_140C24469 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    v4 = PriorityThread + 1;
    if ( PriorityThread >= 31 )
      v4 = PriorityThread;
    if ( !a1 )
    {
      v5 = 16;
      if ( v4 > 16 )
        v5 = v4;
      v4 = v5;
    }
    ExQueueWorkItem(&stru_140C24470, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
