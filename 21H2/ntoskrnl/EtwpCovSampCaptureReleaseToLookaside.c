/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA
 * Callers:
 *     EtwpCovSampCaptureBufferRelease @ 0x14041AAB8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampLookasidePop @ 0x140460E30 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureApc @ 0x140635A00 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140635B34 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140635B80 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140635C4C (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x140636520 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, struct _SLIST_ENTRY *a3)
{
  __int64 v4; // rbx
  unsigned __int32 v6; // eax

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 40) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
    v6 = *(_DWORD *)(a2 + 40);
    if ( !v6 )
LABEL_5:
      LOBYTE(v6) = KeInsertQueueDpc((PRKDPC)(a1 + 936), 0LL, 0LL);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    v6 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( v6 >= *(_DWORD *)(v4 + 72) )
      goto LABEL_5;
  }
  return v6;
}
