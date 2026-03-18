/*
 * XREFs of HalpTscAdvSynchTarget @ 0x14039A45C
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x140399E20 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039A564 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpProcessorFence @ 0x1403F2EE0 (HalpProcessorFence.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404BC15C (HalpTscAdvSynchComputeMinimumDelta.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404BC224 (HalpTscAdvSynchSkewCounter.c)
 */

__int64 HalpTscAdvSynchTarget()
{
  __int64 Number; // rsi
  __int64 i; // rbx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  __int64 result; // rax
  int j; // edi
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  Number = (int)KeGetCurrentPrcb()->Number;
  for ( i = Number << 7; ; *(_DWORD *)(i + TscRequest) = 0 )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(i + TscRequest);
      if ( v2 )
        break;
      _mm_pause();
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      _InterlockedOr(v12, 0);
      HalpTscAdvSynchSkewCounter(*(_QWORD *)(i + TscRequest + 8));
      goto LABEL_11;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      _InterlockedOr(v12, 0);
      for ( j = *(_DWORD *)(i + TscRequest + 4); j; --j )
        HalpTscAdvSynchSkewCounter(*(_QWORD *)(i + TscRequest + 8));
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      _InterlockedOr(v12, 0);
      __writemsr(0x3Bu, *(_QWORD *)(i + TscRequest + 8) + __readmsr(0x3Bu));
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      _InterlockedOr(v12, 0);
      *(_DWORD *)(i + TscRequest) = 6;
      v8 = HalpTscAdvSynchComputeMinimumDelta((unsigned int)Number);
      goto LABEL_10;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      _InterlockedOr(v12, 0);
      *(_DWORD *)(i + TscRequest) = 6;
      v8 = HalpTscAdvSynchComputeMinimumDeltaAlternate(*(unsigned int *)(i + TscRequest + 4));
LABEL_10:
      *(_QWORD *)(i + TscRequest + 8) = v8;
      goto LABEL_11;
    }
    v9 = v7 - 2;
    if ( !v9 )
    {
      HalpProcessorFence();
      v8 = __rdtsc();
      goto LABEL_10;
    }
    if ( v9 == 1 )
      break;
LABEL_11:
    _InterlockedOr(v12, 0);
  }
  _InterlockedOr(v12, 0);
  result = TscRequest;
  *(_DWORD *)(i + TscRequest) = 0;
  return result;
}
