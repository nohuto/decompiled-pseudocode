/*
 * XREFs of KiUpdateProcessConcurrencyCounts @ 0x140302930
 * Callers:
 *     KiIdealProcessorRebalancerWorker @ 0x140244620 (KiIdealProcessorRebalancerWorker.c)
 * Callees:
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 */

__int64 KiUpdateProcessConcurrencyCounts()
{
  __int64 result; // rax
  _QWORD *i; // r14
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // rbp
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  ULONG_PTR v15; // r15
  __int64 v16; // rbx
  __int64 InternalData; // rax
  __int64 v18; // rax
  LONGLONG v19; // rax
  unsigned __int64 v20; // r8
  LARGE_INTEGER v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  signed __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  signed __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  signed __int64 v36; // rax
  int v37; // r9d
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // r10
  signed __int64 v46; // rax
  int v47; // r9d
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  signed __int32 v54[8]; // [rsp+0h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  result = PsGetNextProcess(0LL);
  for ( i = (_QWORD *)result; result; i = (_QWORD *)result )
  {
    PerformanceFrequency.QuadPart = 0LL;
    if ( i[128] )
    {
      v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v3 = 0LL;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v5 = 0LL;
        v6 = ActiveProcessorCount;
        do
        {
          v7 = (i[128] >> 4) & 0x1FFLL;
          v8 = ((unsigned int)i[128] >> 13) & 0x3FFFF;
          _BitScanReverse(&v9, v8);
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 * 8 + ExSaPageArrays) + 8LL * (v9 - 2))
                          + 8LL * (v8 ^ (1 << v9))
                          + 8);
          v11 = *(_QWORD *)(v10 + 8 * v7);
          v12 = *(_QWORD *)(v10 + 8 * v7 + 8);
          *(_QWORD *)(v10 + 8 * v7 + 8) = v11;
          v13 = 1000000LL * *(unsigned int *)(KiProcessorBlock[v5] + 68);
          if ( 10000000 * (v11 - v12) )
            v14 = 10000000 * (v11 - v12);
          else
            v14 = 0LL;
          ++v5;
          v3 += v14 / v13;
          --v6;
        }
        while ( v6 );
      }
      v15 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        v16 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v18 = MEMORY[0xFFFFF780000003B8]
              + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v15 + 112))(InternalData)
                * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
        }
        else
        {
          if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
          {
            v29 = HalpTimerGetInternalData(HalpPerformanceCounter);
            v30 = (*(__int64 (__fastcall **)(__int64))(v15 + 112))(v29);
            v31 = *(_QWORD *)(v15 + 208);
            v32 = v30;
          }
          else
          {
            do
            {
              v31 = *(_QWORD *)(v15 + 208);
              do
              {
                v33 = *(_QWORD *)(v15 + 200);
                v34 = HalpTimerGetInternalData(v15);
                v35 = (*(__int64 (__fastcall **)(__int64))(v15 + 112))(v34);
                _InterlockedOr(v54, 0);
                v36 = *(_QWORD *)(v15 + 200);
              }
              while ( v33 != v36 );
            }
            while ( v31 != *(_QWORD *)(v15 + 208) );
            v37 = *(_DWORD *)(v15 + 220);
            v38 = v33 ^ v35;
            if ( _bittest64((const __int64 *)&v38, (unsigned __int8)(v37 - 1)) )
            {
              if ( v37 == 64 )
                v39 = -1LL;
              else
                v39 = (1LL << v37) - 1;
              v40 = 0LL;
              if ( v37 != 64 )
                v40 = 1LL << v37;
              v41 = v33 & v39;
              v32 = v35 | v33 ^ v41;
              if ( v35 < v41 )
                v32 += v40;
              _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 200), v32, v36);
            }
            else
            {
              if ( v37 == 64 )
                v42 = -1LL;
              else
                v42 = (1LL << v37) - 1;
              v32 = v35 | v33 & ~v42;
            }
          }
          v18 = HalpTimerScaleCounter(v31 + v32, *(_QWORD *)(v15 + 192), 10000000LL);
        }
      }
      else
      {
        v16 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v25 = HalpTimerGetInternalData(HalpPerformanceCounter);
          v26 = (*(__int64 (__fastcall **)(__int64))(v15 + 112))(v25);
          v27 = *(_QWORD *)(v15 + 208);
          v28 = v26;
        }
        else
        {
          do
          {
            v27 = *(_QWORD *)(v15 + 208);
            do
            {
              v43 = *(_QWORD *)(v15 + 200);
              v44 = HalpTimerGetInternalData(v15);
              v45 = (*(__int64 (__fastcall **)(__int64))(v15 + 112))(v44);
              _InterlockedOr(v54, 0);
              v46 = *(_QWORD *)(v15 + 200);
            }
            while ( v43 != v46 );
          }
          while ( v27 != *(_QWORD *)(v15 + 208) );
          v47 = *(_DWORD *)(v15 + 220);
          v48 = v43 ^ v45;
          if ( _bittest64((const __int64 *)&v48, (unsigned __int8)(v47 - 1)) )
          {
            if ( v47 == 64 )
              v49 = -1LL;
            else
              v49 = (1LL << v47) - 1;
            v50 = 0LL;
            if ( v47 != 64 )
              v50 = 1LL << v47;
            v51 = v43 & v49;
            v28 = v45 | v43 ^ v51;
            if ( v45 < v51 )
              v28 += v50;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 200), v28, v46);
          }
          else
          {
            if ( v47 == 64 )
              v52 = -1LL;
            else
              v52 = (1LL << v47) - 1;
            v28 = v45 | v43 & ~v52;
          }
        }
        v18 = v27 + v28;
      }
      if ( v15 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
      {
        v53 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v53 = 10000000LL;
        v18 = HalpTimerScaleCounter(v18, v16, v53);
      }
      v19 = v2.QuadPart + (v18 - v2.QuadPart) / 2;
      v20 = 10000000 * (v19 - i[127]);
      v21 = PerformanceFrequency;
      i[127] = v19;
      if ( v21.QuadPart == 10000000 )
        v22 = v20 / 0x989680;
      else
        v22 = v20 / v21.QuadPart;
      v23 = v22 + 1;
      if ( v3 )
        v24 = v3;
      else
        v24 = 0LL;
      KiUpdateProcessConcurrencyCount((ULONG_PTR)i, v24 / v23);
    }
    result = PsGetNextProcess(i);
  }
  return result;
}
