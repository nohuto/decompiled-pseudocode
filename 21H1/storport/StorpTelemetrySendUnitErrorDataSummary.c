/*
 * XREFs of StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003EF0
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C7A8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C00026B0 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer @ 0x1C0002F4C (McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C000793C (StorpAreTelemetryErrorsEqual.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0052F00 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorDataSummary(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r12
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // al
  __int16 v7; // r10
  unsigned __int8 v8; // r11
  __int64 v9; // r14
  const wchar_t *v10; // rsi
  int v11; // [rsp+80h] [rbp-138h]
  int v12; // [rsp+88h] [rbp-130h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-80h] BYREF
  _OWORD v14[2]; // [rsp+150h] [rbp-68h] BYREF
  __int64 v15; // [rsp+170h] [rbp-48h]
  int v16; // [rsp+1A8h] [rbp-10h] BYREF

  result = 0LL;
  v2 = (_WORD *)(a1 + 2328);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v16 = 0;
  if ( *(_DWORD *)(a1 + 2328) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2320), &LockHandle);
    LOWORD(v16) = *v2 - 1;
    if ( (unsigned __int16)v16 >= 0xAu )
      LOWORD(v16) = 10;
    v5 = HIWORD(v16);
    LOBYTE(v4) = 0;
    do
    {
      v15 = 0LL;
      memset(v14, 0, sizeof(v14));
      v6 = StorpAreTelemetryErrorsEqual(a1 + 8 * ((unsigned __int8)v4 + 4 * ((unsigned __int8)v4 + 87LL)), v14, v4, v5);
      if ( v6 == (_BYTE)v7 )
        break;
      LOWORD(v5) = v7 + v5;
      LOBYTE(v4) = v7 + v4;
    }
    while ( (unsigned __int8)v4 < v8 );
    HIWORD(v16) = v5;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == (_BYTE)v7 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, &v16);
    else
LABEL_15:
      StorpTelemetryLogUnitErrorDataMeasures((_DWORD *)a1);
    if ( (byte_1C0068844 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10 = (const wchar_t *)&unk_1C005A7A0;
      if ( *(_QWORD *)(v9 + 5208) )
        v10 = *(const wchar_t **)(v9 + 5208);
      McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer(
        40 * (unsigned int)(unsigned __int16)v16,
        a1 + 2384,
        40 * (unsigned int)HIWORD(v16),
        *(_DWORD *)(v9 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        v9 + 5192,
        *(_DWORD *)(a1 + 3280),
        *(const wchar_t **)(v9 + 4864),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        v10,
        v11,
        v12,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 2332),
        *(_DWORD *)(a1 + 2336),
        *(_DWORD *)(a1 + 2340),
        *(_DWORD *)(a1 + 2136),
        *(_DWORD *)(a1 + 1272),
        *(_DWORD *)(a1 + 2356),
        *(_DWORD *)(a1 + 2360),
        *(_BYTE *)(a1 + 2349),
        *(_BYTE *)(a1 + 2344),
        *(_BYTE *)(a1 + 2345),
        *(_BYTE *)(a1 + 2346),
        *(_BYTE *)(a1 + 2347),
        *(_BYTE *)(a1 + 2348),
        *(_DWORD *)(a1 + 2352),
        *(_DWORD *)(a1 + 2364),
        *(_QWORD *)(a1 + 2368),
        40 * (unsigned __int16)v16,
        a1 + 2384,
        40 * HIWORD(v16),
        a1 + 2784);
    }
    memset(v2, 0, 0x1C8uLL);
    memset((void *)(a1 + 2784), 0, 0x190uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
