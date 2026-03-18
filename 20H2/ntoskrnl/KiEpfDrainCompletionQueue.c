/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x1405226C8
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x14052247C (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfCompletionDpcRoutine @ 0x140522660 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x140522750 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiEpfComplete @ 0x14052256C (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // di

  v0 = 0LL;
  if ( KiEpfCompletionQueue )
  {
    while ( 1 )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v1 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
      {
        v2 = 0;
      }
      else
      {
        v0 = *(_QWORD *)(KiEpfCompletionQueue + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)KiEpfCompletionQueue = (v1 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      }
      KxReleaseSpinLock(&KiEpfCompletionQueueSpinLock);
      if ( !v2 )
        break;
      KiEpfComplete(v0);
    }
  }
}
