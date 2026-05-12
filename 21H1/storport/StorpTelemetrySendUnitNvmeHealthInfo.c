/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0055DEC
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C000CCD0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer @ 0x1C004F9E0 (McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0055660 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C00557B4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0055AD0 (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int64 v2; // r15
  unsigned int *v3; // r13
  __int64 v4; // r14
  unsigned __int16 v5; // di
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // r12
  unsigned int *v8; // rax
  NTSTATUS LogPage; // eax
  __int16 v10; // bx
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  const wchar_t *v17; // rbp
  _WORD *v18; // rdx
  __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // r9
  const wchar_t *v22; // rax
  __int64 v23; // rbx
  int v24; // [rsp+70h] [rbp-A8h]
  __int64 v25; // [rsp+C0h] [rbp-58h]
  __int64 v26; // [rsp+C8h] [rbp-50h]
  char v27; // [rsp+120h] [rbp+8h]
  char v28; // [rsp+128h] [rbp+10h]
  __int16 v29; // [rsp+130h] [rbp+18h]
  unsigned __int16 v30; // [rsp+138h] [rbp+20h]

  v30 = 0;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  v2 = 0LL;
  v26 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v5 = 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v7 = PoolWithTag;
  if ( PoolWithTag && StorpTelemetryNvmeGetLogPage(a1, 2, PoolWithTag) >= 0 )
  {
    v30 = 216;
    v2 = (__int64)v7 + v7[6] + 8;
    v26 = *(_QWORD *)(v2 + 48);
    v25 = *(_QWORD *)(v2 + 56);
    v28 = *(_BYTE *)(a1 + 1996);
    *(_BYTE *)(a1 + 1996) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 8) != 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    goto LABEL_24;
  }
  v8 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v3 = v8;
  if ( !v8 )
  {
    v11 = 0LL;
    v12 = 0LL;
    goto LABEL_24;
  }
  LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, v8);
  if ( LogPage >= 0 )
  {
    v4 = (__int64)v3 + v3[6] + 8;
    if ( *(_BYTE *)(v4 + 509) )
    {
      v4 = 0LL;
      LogPage = -1073741637;
    }
    else
    {
      v10 = *(_WORD *)(v4 + 510);
      v27 = -64;
      v29 = v10;
      if ( !v10 )
      {
        v5 = 55;
LABEL_12:
        v11 = *(_QWORD *)v4;
        v12 = *(_QWORD *)(v4 + 8);
        goto LABEL_16;
      }
      if ( v10 == 1 )
      {
        v5 = 88;
        goto LABEL_12;
      }
      v5 = 510;
    }
    v12 = 0LL;
    v11 = 0LL;
LABEL_16:
    if ( LogPage >= 0 )
      goto LABEL_24;
    goto LABEL_19;
  }
  v11 = 0LL;
  v12 = 0LL;
LABEL_19:
  if ( LogPage != -1073741670 )
  {
    v13 = *(_DWORD *)(a1 + 1992);
    if ( (v13 & 1) == 0 )
      *(_DWORD *)(a1 + 1992) = v13 | 8;
  }
LABEL_24:
  if ( !v2 && !v4 )
    goto LABEL_50;
  v14 = _InterlockedExchange64((volatile __int64 *)(a1 + 3184), 0LL);
  v15 = _InterlockedExchange64((volatile __int64 *)(a1 + 3192), 0LL);
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    v16 = a1 + 24;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    v16 = a1 + 24;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      v19 = *(_QWORD *)v16;
      v17 = (const wchar_t *)&unk_1C005A7A0;
      v20 = &unk_1C005A7A0;
      ++g_StorpTraceLoggingCriticalEventsLogged;
      if ( *(_QWORD *)(v19 + 5208) )
        v20 = *(_WORD **)(v19 + 5208);
      StorpTelemetryNvmeHealthCriticalInfo(a1, v20, v2, v30, v27, v29, v4, v5, v14, v15, v26, v25, v11, v12);
      goto LABEL_43;
    }
  }
  v17 = (const wchar_t *)&unk_1C005A7A0;
  v18 = &unk_1C005A7A0;
  if ( *(_QWORD *)(*(_QWORD *)v16 + 5208LL) )
    v18 = *(_WORD **)(*(_QWORD *)v16 + 5208LL);
  StorpTelemetryNvmeHealthInfo(a1, v18, v2, v30, v27, v29, v4, v5, v14, v15, v26, v25, v11, v12);
LABEL_43:
  if ( !*(_BYTE *)(a1 + 1997) || *(_BYTE *)(a1 + 1996) != v28 )
  {
    if ( (byte_1C0068844 & 8) != 0 )
    {
      v21 = *(_QWORD *)v16;
      v22 = *(const wchar_t **)(*(_QWORD *)v16 + 5208LL);
      v23 = *(_QWORD *)v16 + 5192LL;
      if ( v22 )
        v17 = v22;
      McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer(
        v30,
        *(unsigned __int8 *)(a1 + 1996),
        *(_BYTE *)(a1 + 450) & 1,
        *(_DWORD *)(v21 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        v23,
        *(const wchar_t **)(v21 + 4864),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        v17,
        *(_BYTE *)(a1 + 450) & 1,
        v24,
        *(_BYTE *)(a1 + 1996),
        v30,
        v2,
        v27,
        v29,
        v5,
        v4);
    }
    *(_BYTE *)(a1 + 1997) = 0;
  }
LABEL_50:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x65546152u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x65546152u);
}
