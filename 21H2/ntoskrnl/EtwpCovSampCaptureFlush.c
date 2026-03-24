/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x1409427D0
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140946424 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AEC30 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF068 (EtwpCovSampCaptureQueueBuffer.c)
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
