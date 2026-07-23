/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x1405A9418
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1405A8A94 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1405A9C20 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampCaptureFlush @ 0x14093DFC0 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 720), a2);
    if ( !v3 )
      LOBYTE(v3) = KeSetEvent((PRKEVENT)(a1 + 736), *(_DWORD *)(a1 + 936), 0);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 704), a2);
    if ( !v3 )
      LOBYTE(v3) = KeInsertQueueDpc((PRKDPC)(a1 + 760), 0LL, 0LL);
  }
  return (char)v3;
}
