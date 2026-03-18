/*
 * XREFs of _TraceLoggingPTPAAPKeyPress@4 @ 0x187303
 * Callers:
 *     <none>
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YGX_J000W4tagPTP_ACTION@@1@Z @ 0x186B06 (-TraceLoggingPTPKeyToAATimeDeltas@@YGX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YGX_J0PBUtagTPTELEMTIMINGS@@00@Z @ 0x186B8F (-TraceLoggingPTPKeyToGestureTiming@@YGX_J0PBUtagTPTELEMTIMINGS@@00@Z.c)
 */

int __stdcall TraceLoggingPTPAAPKeyPress(int a1)
{
  LARGE_INTEGER v1; // kr00_8
  __int64 v2; // kr08_8
  LONGLONG v3; // rax
  unsigned int v4; // ecx
  LONGLONG v5; // kr10_8
  signed __int64 v6; // kr18_8
  __int64 v7; // kr28_8
  signed __int64 v8; // rax
  _DWORD *v9; // esi
  __int128 v11; // [esp-Ch] [ebp-4Ch]
  int v12; // [esp+18h] [ebp-28h]
  unsigned int v13; // [esp+1Ch] [ebp-24h]
  signed __int64 v14; // [esp+30h] [ebp-10h]
  union _LARGE_INTEGER PerformanceFrequency; // [esp+38h] [ebp-8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v1 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v2 = _InterlockedCompareExchange64(&_gAapState[13], 0LL, 0LL);
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)&PTPTelemetry::Usage::gTPTelemTimings + 1, 0LL, 0LL);
  v4 = v3;
  v5 = v3;
  if ( a1 )
  {
    LODWORD(v3) = HIDWORD(v2);
    if ( v2 > 0 && __SPAIR64__(HIDWORD(v3), v4) > v2 )
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&PTPTelemetry::Usage::gTPTelemTimings + 4, 0LL, 0LL);
      v13 = 1000 * (v5 - v2) / PerformanceFrequency.QuadPart;
      v12 = (unsigned __int64)(1000 * (v5 - v2) / PerformanceFrequency.QuadPart) >> 32;
      v3 = 1000 * (v1.QuadPart - v6) / PerformanceFrequency.QuadPart;
      v7 = v3;
      if ( !*((_QWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 3) )
        *(&PTPTelemetry::Usage::gTPTelemTimings + 11) = *(&PTPTelemetry::Usage::gTPTelemTimings + 10);
      if ( v12 < 0 || v12 <= 0 && v13 < 0x1F4 || v3 < 500 )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)PTPTelemetry::Usage::gTPTelemTimings, 0LL, 0LL);
        *(union _LARGE_INTEGER *)((char *)&v11 + 4) = PerformanceFrequency;
        LODWORD(v11) = v1.HighPart;
        v14 = v8;
        TraceLoggingPTPKeyToGestureTiming(
          PTPTelemetry::Usage::gTPTelemTimings,
          _gAapState[12],
          v2,
          (const struct tagTPTELEMTIMINGS *)v1.LowPart,
          v11,
          *((__int64 *)&v11 + 1));
        if ( v12 <= 0
          && (v12 < 0 || v13 < 0x1F4)
          && (v9 = PTPTelemetry::Usage::gTPTelemTimings, *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 10))
          || v7 < 500
          && (v9 = PTPTelemetry::Usage::gTPTelemTimings, *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 11)) )
        {
          TraceLoggingPTPKeyToAATimeDeltas(
            v9[10],
            v9[11],
            1000 * (v14 - v2) / PerformanceFrequency.QuadPart,
            (unsigned __int64)(1000 * (v14 - v2) / PerformanceFrequency.QuadPart) >> 32,
            v13,
            v12,
            v7,
            SHIDWORD(v7),
            1000 * (v1.QuadPart - v2) / PerformanceFrequency.QuadPart,
            (unsigned __int64)(1000 * (v1.QuadPart - v2) / PerformanceFrequency.QuadPart) >> 32);
        }
        memset(PTPTelemetry::Usage::gTPTelemTimings, 0, 0x54u);
        LODWORD(v3) = PTPTelemetry::Usage::gTPTelemTimings;
        *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 20) = -1;
      }
    }
  }
  return v3;
}
