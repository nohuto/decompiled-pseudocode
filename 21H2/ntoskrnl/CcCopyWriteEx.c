/*
 * XREFs of CcCopyWriteEx @ 0x140226550
 * Callers:
 *     CcCopyWrite @ 0x140539DF0 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x14053A0D0 (CcFastCopyWrite.c)
 *     DifCcCopyWriteExWrapper @ 0x140605840 (DifCcCopyWriteExWrapper.c)
 *     DifCcCopyWriteWrapper @ 0x1406059B0 (DifCcCopyWriteWrapper.c)
 *     DifCcFastCopyWriteWrapper @ 0x140605C60 (DifCcFastCopyWriteWrapper.c)
 * Callees:
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     CcTelemetryBucketizeLatency @ 0x1407BE350 (CcTelemetryBucketizeLatency.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140811AB4 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v12; // r9d
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // ecx
  char v21; // si
  _QWORD *v22; // rbx
  __int64 v23; // r10
  __int64 v24; // r8
  _QWORD *v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // r10
  __int64 v28; // [rsp+58h] [rbp-50h] BYREF
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]
  __int64 v31; // [rsp+70h] [rbp-38h] BYREF
  _QWORD v32[3]; // [rsp+78h] [rbp-30h] BYREF

  v10 = 0;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v12 = 0;
  if ( (v12 >= 2 || CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink))
    && !v12
    || (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v10 = 1;
  }
  ++qword_140C498F0;
  if ( !byte_140C498C1 && CcTelemetryGlobalData && !dword_140C499D0 && !dword_140C499D4 )
    CcSetTelemetryPeriodicTimer(DueTime);
  if ( v10 && !a4 )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v32[1] = v14;
  v15 = *a2;
  v31 = v15;
  v16 = 2;
  if ( (v15 & 0xFFF) == 0 && a3 >= 0x1000 )
    v16 = 3;
  v17 = v16 | 4;
  if ( (((_WORD)v15 + (_WORD)a3) & 0xFFF) != 0 )
    v17 = v16;
  v30 = v15 & 0xFFFFFFFFFFFFF000uLL;
  v32[0] = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v18 = LODWORD(v32[0]) - (v15 & 0xFFFFF000);
  v19 = (v32[0] - (v15 & 0xFFFFFFFFFFFFF000uLL)) >> 32;
  if ( (__int64)(v32[0] - v30) > 0 )
  {
    v20 = v17;
    if ( !(_DWORD)v19 && v18 <= 0x1000 )
      v20 = v17 | 6;
  }
  else
  {
    v20 = v17 | 7;
  }
  v21 = CcMapAndCopyInToCache(v14, a5, (unsigned int)&v31, a3, v20, a1, (__int64)v32, a4, a6, (__int64)&v28);
  if ( !byte_140C498C1 )
  {
    v22 = *(_QWORD **)(v14 + 504);
    if ( v21 )
    {
      if ( v28 )
        v23 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v28) / stru_140C49888.QuadPart;
      else
        v23 = v29;
      v24 = 115LL;
      if ( !a4 )
        v24 = 139LL;
      v25 = &v22[v24];
      v26 = 103LL;
      if ( !a4 )
        v26 = 127LL;
      CcTelemetryBucketizeLatency(v23, &v22[v26], v25);
      if ( a4 )
      {
        ++v22[98];
        if ( v27 > *(_QWORD *)(*(_QWORD *)(v14 + 504) + 808LL) )
        {
          v22[101] = v27;
          return v21;
        }
      }
      else
      {
        ++v22[99];
        if ( v27 > v22[102] )
        {
          v22[102] = v27;
          return v21;
        }
      }
    }
    else
    {
      ++v22[100];
    }
  }
  return v21;
}
