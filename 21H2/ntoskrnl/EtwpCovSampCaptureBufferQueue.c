/*
 * XREFs of EtwpCovSampCaptureBufferQueue @ 0x1405AE914
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1405AF408 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14094224C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1405AE9D8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF298 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1405AFAA0 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampSampleBufferReserve @ 0x1405AFADC (EtwpCovSampSampleBufferReserve.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferQueue(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 62);
  if ( !(_WORD)v4 )
    return EtwpCovSampCaptureBufferRelease();
  v6 = 8 * v4;
  v7 = EtwpCovSampSampleBufferReserve(a1, (unsigned __int16)(8 * v4), &v8);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 4) ^= (*(_DWORD *)(v7 + 4) ^ (*(unsigned __int16 *)(a2 + 62) << 16)) & 0x7FFF0000;
    *(_DWORD *)(v7 + 4) = (*(_DWORD *)(a2 + 56) << 29) ^ (*(_DWORD *)(v7 + 4) ^ (*(_DWORD *)(a2 + 56) << 29)) & 0x7FFFFFFF;
    memmove((void *)(v7 + 8), (const void *)(a2 + 64), v6);
    EtwpCovSampSampleBufferDecRef(a1, v8);
    return EtwpCovSampCaptureBufferRelease();
  }
  return EtwpCovSampCaptureQueueBuffer(a1, a2);
}
