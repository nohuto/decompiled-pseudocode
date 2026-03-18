/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x1409EEF94
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1409F2984 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140460CEC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406360C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (struct _SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
