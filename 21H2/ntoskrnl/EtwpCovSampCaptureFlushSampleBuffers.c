/*
 * XREFs of EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AEE60
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1405AEC8C (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureFlush @ 0x1409429A0 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1405AFAA0 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AFE60 (EtwpCovSampTryAcquireBufferLock.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushSampleBuffers(__int64 a1)
{
  ULONG result; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  KSPIN_LOCK v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  KSPIN_LOCK *v8; // rbx
  KSPIN_LOCK v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v3 = 0LL;
    v4 = result;
    do
    {
      v5 = 0LL;
      v6 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v7, v6);
      v8 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + ExSaPageArrays) + 8LL * (v7 - 2))
                                    + 8LL * (v6 ^ (1 << v7))
                                    + 8)
                        + 8 * ((*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL));
      result = EtwpCovSampTryAcquireBufferLock(v8);
      if ( result )
      {
        v9 = v8[1];
        if ( v9 )
        {
          v8[1] = 0LL;
          v5 = v9;
        }
        KxReleaseSpinLock(v8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v13 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
              SchedulerAssist[5] &= 0xFFFF0001;
              if ( v13 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        result = 0;
        __writecr8(0LL);
        if ( v5 )
          result = EtwpCovSampSampleBufferDecRef(a1, v5);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
