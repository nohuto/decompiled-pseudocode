/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x14093DFC0
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140941C14 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405A8FE0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9418 (EtwpCovSampCaptureQueueBuffer.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (_SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
