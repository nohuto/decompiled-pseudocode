/*
 * XREFs of HalpTimerDelayedQueryCounter @ 0x1404BFD30
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerDelayedQueryCounter(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rbp
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  signed __int64 v9; // rax
  int v10; // r9d
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  signed __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 InternalData; // rax
  __int64 v18; // rax
  signed __int32 v20[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp+10h]

  v1 = (__int64 (__fastcall *)(__int64))HalpTimerDelayedQueryHardwareCount;
  ++HalpTimerHeavilyPenalizedQpcCalls;
  *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
  HalpTimerDelayedQueryHardwareCount = 0LL;
  v3 = *(_QWORD *)(HalpTimerSavedPerformanceCounter + 16);
  if ( v3 )
  {
    do
    {
      v4 = HalpPerformanceCounter;
      v21 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v18 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
        v5 = *(_QWORD *)(v4 + 208);
        v15 = v18;
      }
      else
      {
        do
        {
          v5 = *(_QWORD *)(v4 + 208);
          do
          {
            v6 = *(_QWORD *)(v4 + 200);
            v7 = HalpTimerGetInternalData(v4);
            v8 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v7);
            _InterlockedOr(v20, 0);
            v9 = *(_QWORD *)(v4 + 200);
          }
          while ( v6 != v9 );
        }
        while ( v5 != *(_QWORD *)(v4 + 208) );
        v10 = *(_DWORD *)(v4 + 220);
        v11 = v6 ^ v8;
        if ( _bittest64((const __int64 *)&v11, (unsigned __int8)(v10 - 1)) )
        {
          if ( v10 == 64 )
            v12 = -1LL;
          else
            v12 = (1LL << v10) - 1;
          v13 = 1LL;
          if ( v10 != 64 )
            v13 = 1LL << v10;
          v14 = v6 & v12;
          v15 = v8 | v6 ^ v14;
          if ( v8 < v14 )
            v15 += v13;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v15, v9);
        }
        else
        {
          if ( v10 == 64 )
            v16 = -1LL;
          else
            v16 = (1LL << v10) - 1;
          v15 = v8 | v6 & ~v16;
        }
      }
    }
    while ( HalpTimerScaleCounter(v5 + v15, v21, *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192)) < v3 );
  }
  return v1(a1);
}
