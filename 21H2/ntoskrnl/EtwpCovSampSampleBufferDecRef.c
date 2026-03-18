/*
 * XREFs of EtwpCovSampSampleBufferDecRef @ 0x140636A30
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140635B80 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406360C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140636A64 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     EtwpCovSampCaptureQueueBuffer @ 0x140460CEC (EtwpCovSampCaptureQueueBuffer.c)
 */

char __fastcall EtwpCovSampSampleBufferDecRef(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 48), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    LOBYTE(v4) = EtwpCovSampCaptureQueueBuffer(a1, (struct _SLIST_ENTRY *)a2);
  }
  return v4;
}
