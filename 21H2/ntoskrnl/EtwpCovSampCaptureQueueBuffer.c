/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x140460CEC
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140635B80 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x140636A30 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampCaptureFlush @ 0x1409EEF94 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 832), a2);
    if ( !v3 )
      LOBYTE(v3) = KeSetEvent((PRKEVENT)(a1 + 848), *(_DWORD *)(a1 + 1048), 0);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 816), a2);
    if ( !v3 )
      LOBYTE(v3) = KeInsertQueueDpc((PRKDPC)(a1 + 872), 0LL, 0LL);
  }
  return (char)v3;
}
