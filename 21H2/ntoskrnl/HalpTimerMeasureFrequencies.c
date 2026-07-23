/*
 * XREFs of HalpTimerMeasureFrequencies @ 0x1403AA668
 * Callers:
 *     HalpTimerSelectRoles @ 0x1403AAB2C (HalpTimerSelectRoles.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AA968 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AAA4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403AADC4 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AB068 (HalpTimerStallExecutionProcessor.c)
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall HalpTimerMeasureFrequencies(__int64 a1)
{
  unsigned __int64 result; // rax
  ULONG_PTR *v2; // rbx
  int v3; // r12d
  char v4; // dl
  ULONG_PTR *v6; // rcx
  ULONG_PTR *v7; // rsi
  __int64 v8; // rbx
  ULONG_PTR *v9; // rbx
  ULONG_PTR *v10; // rsi
  ULONG_PTR *v11; // r10
  unsigned __int64 v12; // r15
  ULONG_PTR *v13; // rbx
  ULONG_PTR *v14; // rsi
  ULONG_PTR *v15; // r10
  ULONG_PTR *v16; // rsi
  __int64 v17; // rbx
  int v18; // ebp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64); // rdx
  __int64 InternalData; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r10
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = (ULONG_PTR *)HalpRegisteredTimers;
  v3 = *(_DWORD *)(a1 + 224) & 2;
  v4 = 0;
  if ( (ULONG_PTR *)HalpRegisteredTimers != &HalpRegisteredTimers )
  {
    do
    {
      v6 = v2;
      v2 = (ULONG_PTR *)*v2;
      if ( v6[24] )
      {
        result = *((unsigned int *)v6 + 46);
        if ( (result & 8) == 0 )
          continue;
      }
      result = *((unsigned int *)v6 + 56);
      if ( (result & 2) != 0 )
      {
        result = HalpTimerInitialize(v6);
        v4 = 1;
      }
    }
    while ( v2 != &HalpRegisteredTimers );
    if ( v4 )
    {
      KeStallExecutionProcessor(0x5DCu);
      v7 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v7 != &HalpRegisteredTimers )
      {
        v8 = (__int64)v7;
        v7 = (ULONG_PTR *)*v7;
        if ( (!*(_QWORD *)(v8 + 192) || (*(_DWORD *)(v8 + 184) & 8) != 0)
          && (*(_DWORD *)(v8 + 224) & 2) != 0
          && (*(_DWORD *)(v8 + 184) & 2) != 0 )
        {
          if ( v3 )
          {
            *(_DWORD *)(v8 + 48) = HalpTimerDetermineValidTimerPairReadLatency(v8, a1);
          }
          else
          {
            InternalData = HalpTimerGetInternalData(v8);
            *(_QWORD *)(v8 + 16) = (*(__int64 (__fastcall **)(__int64))(v8 + 112))(InternalData);
          }
        }
      }
      HalpProcessorFence();
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v27 = HalpTimerGetInternalData(a1);
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 176))(v27, 0LL);
      }
      v9 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v9 != &HalpRegisteredTimers )
      {
        v10 = v9;
        v11 = v9;
        v9 = (ULONG_PTR *)*v9;
        if ( (!v10[24] || (v10[23] & 8) != 0) && (v11[28] & 2) != 0 && (v11[23] & 2) != 0 )
        {
          if ( v3 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(
              *((_DWORD *)v11 + 12),
              (_DWORD)v11,
              a1,
              (_DWORD)v10 + 16,
              (__int64)(v11 + 3));
          }
          else
          {
            v28 = HalpTimerGetInternalData((__int64)v11);
            v10[2] = (*(__int64 (__fastcall **)(__int64))(v29 + 112))(v28);
          }
        }
      }
      HalpProcessorFence();
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v12 = 1250000LL;
        HalpTimerStallExecutionProcessor(a1, 1250000LL, 0LL);
      }
      else
      {
        v30 = HalpTimerGetInternalData(a1);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 176))(v30, 1250000LL);
      }
      result = HalpProcessorFence();
      v13 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v13 != &HalpRegisteredTimers )
      {
        v14 = v13;
        v15 = v13;
        v13 = (ULONG_PTR *)*v13;
        if ( v14[24] )
        {
          result = *((unsigned int *)v14 + 46);
          if ( (result & 8) == 0 )
            continue;
        }
        result = *((unsigned int *)v15 + 56);
        if ( (result & 2) != 0 )
        {
          result = *((unsigned int *)v15 + 46);
          if ( (result & 2) != 0 )
          {
            if ( v3 )
            {
              result = HalpTimerReadTimerPairWithLatencyLimit(
                         *((_DWORD *)v15 + 12),
                         (_DWORD)v15,
                         a1,
                         (int)v14 + 32,
                         (__int64)(v15 + 5));
            }
            else
            {
              v31 = HalpTimerGetInternalData((__int64)v15);
              result = (*(__int64 (__fastcall **)(__int64))(v32 + 112))(v31);
              v14[4] = result;
            }
          }
        }
      }
      v16 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v16 != &HalpRegisteredTimers )
      {
        v17 = (__int64)v16;
        v16 = (ULONG_PTR *)*v16;
        if ( *(_QWORD *)(v17 + 192) )
        {
          result = *(unsigned int *)(v17 + 184);
          if ( (result & 8) == 0 )
            continue;
        }
        result = *(unsigned int *)(v17 + 224);
        if ( (result & 2) != 0 )
        {
          v18 = *(_DWORD *)(v17 + 184);
          if ( (v18 & 2) != 0 )
          {
            v19 = *(_QWORD *)(v17 + 16);
            v20 = *(_QWORD *)(v17 + 32) - v19;
            v21 = *(_QWORD *)(v17 + 24);
            v22 = *(_QWORD *)(v17 + 40) - v21;
            if ( *(_QWORD *)(v17 + 32) < v19 )
              v20 += 1LL << *(_DWORD *)(v17 + 220);
            if ( *(_QWORD *)(v17 + 40) < v21 )
              v22 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v3 )
              v12 = HalpTimerScaleCounter(v22, *(_QWORD *)(a1 + 192), 10000000LL);
            v23 = v18 & 0xFFFFFFF7;
            result = 10000000 * v20 / v12;
            *(_DWORD *)(v17 + 184) = v23;
            *(_QWORD *)(v17 + 192) = result;
            if ( v17 != a1 && (v23 & 4) == 0 && *(_QWORD *)(v17 + 136) )
            {
              v24 = HalpTimerGetInternalData(v17);
              result = v25(v24);
            }
          }
        }
      }
    }
  }
  return result;
}
