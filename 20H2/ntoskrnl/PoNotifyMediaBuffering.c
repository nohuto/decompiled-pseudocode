/*
 * XREFs of PoNotifyMediaBuffering @ 0x14036C2C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeQueryPriorityThread @ 0x140257CA0 (KeQueryPriorityThread.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx
  int v5; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_140C24588 )
  {
    v2 = 1;
    byte_140C24588 = 1;
  }
  byte_140C24589 = a1;
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
    ExQueueWorkItem(&stru_140C24590, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
