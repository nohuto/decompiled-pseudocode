/*
 * XREFs of EtwpCovSampCaptureBufferQueue @ 0x140635B80
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140636520 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409EE8FC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140460CEC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x140636A30 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140636A64 (EtwpCovSampSampleBufferReserve.c)
 */

char __fastcall EtwpCovSampCaptureBufferQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 62);
  if ( !(_WORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    return EtwpCovSampCaptureReleaseToLookaside(a1, v5, (struct _SLIST_ENTRY *)a2);
  }
  v7 = 8 * v4;
  v8 = EtwpCovSampSampleBufferReserve(a1, (unsigned __int16)(8 * v4), &v9);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 4) ^= (*(_DWORD *)(v8 + 4) ^ (*(unsigned __int16 *)(a2 + 62) << 16)) & 0x7FFF0000;
    *(_DWORD *)(v8 + 4) = (*(_DWORD *)(a2 + 56) << 29) ^ (*(_DWORD *)(v8 + 4) ^ (*(_DWORD *)(a2 + 56) << 29)) & 0x7FFFFFFF;
    memmove((void *)(v8 + 8), (const void *)(a2 + 64), v7);
    EtwpCovSampSampleBufferDecRef(v3, v9);
    v5 = *(_QWORD *)(a2 + 48);
    a1 = v3;
    return EtwpCovSampCaptureReleaseToLookaside(a1, v5, (struct _SLIST_ENTRY *)a2);
  }
  return EtwpCovSampCaptureQueueBuffer(v3, (struct _SLIST_ENTRY *)a2);
}
