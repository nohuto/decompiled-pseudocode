/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C0004340
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000CD98 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002B30 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C0003788 (McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTran.c)
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0053920 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitPerfData(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *Pool; // r15
  _QWORD *v4; // r13
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r12
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  const void *v13; // rdx
  unsigned int i; // r9d
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r10
  char *v18; // rcx
  _QWORD *v19; // r9
  signed __int64 v20; // r10
  __int64 v21; // rsi
  signed __int64 v22; // r11
  size_t v23; // r12
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned int v26; // r9d
  _QWORD *v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int16 v32; // dx
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // rax
  bool v35; // cc
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // xmm1_8
  __int64 v39; // rax
  __int64 v40; // rdx
  const char *v41; // rbx
  __int64 v42; // rsi
  const char *v43; // rdi
  const wchar_t *v44; // rbx
  unsigned int v45; // ebx
  size_t Size; // [rsp+258h] [rbp-80h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+260h] [rbp-78h] BYREF
  const char *v49; // [rsp+268h] [rbp-70h]
  unsigned __int64 v50; // [rsp+270h] [rbp-68h]
  __int64 v51; // [rsp+278h] [rbp-60h]
  __int64 v52; // [rsp+280h] [rbp-58h]
  __int128 v53; // [rsp+288h] [rbp-50h]
  __int64 v54; // [rsp+298h] [rbp-40h]
  _QWORD v55[44]; // [rsp+2A8h] [rbp-30h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset(&v55[1], 0, 0x158uLL);
  v2 = (unsigned int)qword_1C0068640;
  Pool = 0LL;
  v49 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v50 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( *(_QWORD *)(a1 + 2248) )
  {
    Pool = (_QWORD *)RaidAllocatePool(512LL, (unsigned int)::Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( Pool
      && (v4 = (_QWORD *)RaidAllocatePool(512LL, (unsigned int)(24 * v2), 1700028754LL, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      if ( UseQPCTime )
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v8.QuadPart = KeQueryUnbiasedInterruptTime();
      v9 = v8;
      if ( v8.QuadPart > 0 && (v10 = *(_QWORD *)(a1 + 2256), v8.QuadPart < v10) )
        v11 = v8.QuadPart - v10 - 1;
      else
        v11 = v8.QuadPart - *(_QWORD *)(a1 + 2256);
      if ( UseQPCTime )
      {
        v12 = 0LL;
        if ( PerformanceFrequency.QuadPart && v11 )
          v12 = 10000
              * (1000 * (v11 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v11 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
               + 1000 * (v11 / PerformanceFrequency.QuadPart));
      }
      else
      {
        v12 = v11;
      }
      qword_1C0068650 = v9.QuadPart;
      v13 = *(const void **)(a1 + 2248);
      *(LARGE_INTEGER *)(a1 + 2256) = v9;
      v55[0] = v12;
      memmove(Pool, v13, (unsigned int)::Size);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v15 = Pool + 1;
          v16 = i * HIDWORD(qword_1C0068640);
          v17 = v2;
          do
          {
            *(v15 - 1) += *(_QWORD *)((char *)v15 + v16 - 8);
            *v15 += *(_QWORD *)((char *)v15 + v16);
            v15[1] += *(_QWORD *)((char *)v15 + v16 + 8);
            v15 += 3;
            --v17;
          }
          while ( v17 );
        }
      }
      memset(v4, 0, (unsigned int)(24 * v2));
      v18 = *(char **)(a1 + 2264);
      Size = 0LL;
      if ( (_DWORD)v2 )
      {
        v19 = v18 + 8;
        v20 = (char *)Pool - v18;
        v21 = v2;
        v22 = (char *)v4 - v18;
        v23 = 0LL;
        do
        {
          v24 = *(_QWORD *)((char *)v19 + v20 - 8) - *(v19 - 1);
          *(_QWORD *)((char *)v19 + v22 - 8) = v24;
          v25 = *(_QWORD *)((char *)v19 + v20) - *v19;
          *(_QWORD *)((char *)v19 + v22) = v25;
          *(_QWORD *)((char *)v19 + v22 + 8) = *(_QWORD *)((char *)v19 + v20 + 8) - v19[1];
          v19 += 3;
          v23 += v25 + v24;
          --v21;
        }
        while ( v21 );
        v18 = *(char **)(a1 + 2264);
        v5 = v50;
        v6 = v51;
        Size = v23;
        v7 = v52;
      }
      memmove(v18, Pool, HIDWORD(qword_1C0068640));
      if ( Size )
      {
        v55[39] = 0LL;
        if ( (_WORD)TelemetryPerfContext )
        {
          if ( WORD1(TelemetryPerfContext) )
          {
            v26 = 0;
            if ( (_DWORD)v2 )
            {
              v27 = v4 + 2;
              do
              {
                if ( v26 < *((_DWORD *)&xmmword_1C0068630 + 3) && v26 >= dword_1C006860C )
                {
                  v28 = v26 / (unsigned __int16)TelemetryPerfContext;
                  v29 = *(v27 - 2);
                  v30 = *(v27 - 1);
                  if ( (unsigned int)v28 >= 0xC )
                    v28 = 11LL;
                  v31 = 3 * v28;
                  v55[v31 + 5] += *v27;
                  v55[v31 + 3] += v29;
                  v55[v31 + 4] += v30;
                  v55[39] += v30 + v29;
                }
                ++v26;
                v27 += 3;
              }
              while ( v26 < (unsigned int)v2 );
            }
          }
        }
        if ( *(_QWORD *)(a1 + 2272) )
        {
          v32 = 0;
          do
          {
            v33 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2272) + dword_1C0068658 * (unsigned int)v32);
            v34 = *v33;
            v35 = *v33 <= v5;
            *v33 = 0LL;
            if ( !v35 )
              v5 = v34;
            v6 += v33[1];
            v7 += v33[2];
            ++v32;
          }
          while ( v32 <= (unsigned __int16)g_RaidNumaHighestNodeNumber );
          *((_QWORD *)&v53 + 1) = v6;
          v36 = v6 - *(_QWORD *)(a1 + 2288);
          v54 = v7;
          v37 = v7 - *(_QWORD *)(a1 + 2296);
          v38 = v54;
          *(_QWORD *)&v53 = v5;
          v55[41] = v5;
          v55[42] = v36;
          *(_OWORD *)(a1 + 2280) = v53;
          v55[43] = v37;
          *(_QWORD *)(a1 + 2296) = v38;
        }
        v39 = *(_QWORD *)(a1 + 152);
        if ( v39 )
        {
          v41 = (const char *)(v39 + 90);
        }
        else
        {
          v40 = *(_QWORD *)(a1 + 144);
          if ( !v40
            || (v41 = (const char *)(v40 + 41),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 536LL) + 184LL) & 0x40) == 0) )
          {
            v41 = v49;
          }
        }
        v55[2] = L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms";
        v55[40] = v4;
        LOBYTE(v55[1]) = 11;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
          LOBYTE(v55[1]) = 10;
        if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
        {
          goto LABEL_54;
        }
        if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( *(_BYTE *)(a1 + 1996) )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( g_StorpTraceLoggingCriticalEventEnabled )
          StorpTelemetryLogUnitPerfDataCriticalData(a1, v55);
        else
LABEL_54:
          StorpTelemetryLogUnitPerfDataMeasures(a1);
        if ( (byte_1C0068844 & 2) != 0 )
        {
          v42 = *(_QWORD *)(a1 + 24);
          v43 = (const char *)&unk_1C005A79C;
          if ( v41 )
            v43 = v41;
          v44 = (const wchar_t *)&unk_1C005A7A0;
          if ( *(_QWORD *)(v42 + 5208) )
            v44 = *(const wchar_t **)(v42 + 5208);
          McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&EventUnitPerformance,
            0LL,
            *(_DWORD *)(v42 + 56),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 1976,
            v42 + 5192,
            *(_DWORD *)(a1 + 3280),
            *(const wchar_t **)(v42 + 4864),
            *(_DWORD *)(v42 + 4268),
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            v44,
            v43,
            *(_BYTE *)(a1 + 450) & 1,
            *(__int64 *)&g_SystemUptime_s,
            v55[1],
            v55[39],
            *(_QWORD *)(a1 + 2168),
            *(_DWORD *)(a1 + 788),
            *(_DWORD *)(a1 + 792),
            *(_QWORD *)(a1 + 2176),
            *(_QWORD *)(a1 + 2184),
            *(_QWORD *)(a1 + 2192),
            *(_QWORD *)(a1 + 2200),
            *(_QWORD *)(a1 + 2208),
            *(_QWORD *)(a1 + 2216),
            *(_QWORD *)(a1 + 2224),
            v55[41],
            *(_DWORD *)(a1 + 2304),
            *(_DWORD *)(a1 + 2312),
            (const wchar_t *)v55[2],
            v55[3],
            v55[6],
            v55[9],
            v55[12],
            v55[15],
            v55[18],
            v55[21],
            v55[24],
            v55[27],
            v55[30],
            v55[33],
            v55[36],
            v55[4],
            v55[7],
            v55[10],
            v55[13],
            v55[16],
            v55[19],
            v55[22],
            v55[25],
            v55[28],
            v55[31],
            v55[34],
            v55[37],
            v55[5],
            v55[8],
            v55[11],
            v55[14]);
        }
      }
      v45 = 0;
    }
    else
    {
      v45 = -1073741801;
    }
  }
  else
  {
    v45 = -1073741823;
  }
  *(_QWORD *)(a1 + 788) = 0LL;
  *(_QWORD *)(a1 + 2304) = 0LL;
  *(_QWORD *)(a1 + 2312) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_QWORD *)(a1 + 2184) = 0LL;
  *(_QWORD *)(a1 + 2192) = 0LL;
  *(_QWORD *)(a1 + 2200) = 0LL;
  *(_QWORD *)(a1 + 2208) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  *(_DWORD *)(a1 + 2240) = 0;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
  return v45;
}
