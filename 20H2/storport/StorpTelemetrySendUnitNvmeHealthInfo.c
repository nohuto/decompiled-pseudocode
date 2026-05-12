/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00573C0
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0011120 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer @ 0x1C0050FA8 (McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0056C34 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0056D88 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00570A4 (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int16 v2; // di
  __int64 v3; // r15
  _DWORD *v4; // rbp
  __int64 v5; // r14
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // r13
  _DWORD *v8; // rax
  NTSTATUS LogPage; // eax
  unsigned __int16 v10; // r10
  __int64 v11; // r11
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  const wchar_t *v16; // r12
  _WORD *v17; // rdx
  unsigned __int16 v18; // di
  __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rbx
  __int16 v24; // [rsp+28h] [rbp-100h]
  __int16 v25; // [rsp+28h] [rbp-100h]
  int v26; // [rsp+70h] [rbp-B8h]
  char v27; // [rsp+B0h] [rbp-78h]
  __int64 v28; // [rsp+C0h] [rbp-68h]
  __int64 v29; // [rsp+C8h] [rbp-60h]
  __int64 v30; // [rsp+D0h] [rbp-58h]
  char v31; // [rsp+130h] [rbp+8h]
  char v32; // [rsp+138h] [rbp+10h]
  unsigned __int16 v33; // [rsp+140h] [rbp+18h]
  unsigned __int16 v34; // [rsp+148h] [rbp+20h]

  v34 = 0;
  v32 = 0;
  v2 = 0;
  v31 = 0;
  v33 = 0;
  v27 = 0;
  v30 = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v7 = PoolWithTag;
  if ( PoolWithTag && StorpTelemetryNvmeGetLogPage(a1, 2, PoolWithTag) >= 0 )
  {
    v34 = 216;
    v3 = (__int64)v7 + v7[6] + 8;
    v30 = *(_QWORD *)(v3 + 48);
    v29 = *(_QWORD *)(v3 + 56);
    v32 = *(_BYTE *)(a1 + 1996);
    *(_BYTE *)(a1 + 1996) = *(_BYTE *)v3;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 8) != 0
    || (v8 = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u), (v4 = v8) == 0LL) )
  {
    v10 = 0;
    goto LABEL_18;
  }
  LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, v8);
  if ( LogPage < 0 )
  {
    v10 = 0;
    if ( LogPage != -1073741670 )
    {
      v12 = *(_DWORD *)(a1 + 1992);
      if ( (v12 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v12 | 8;
    }
    goto LABEL_18;
  }
  v31 = -64;
  v5 = (__int64)v4 + (unsigned int)v4[6] + 8;
  if ( *(_BYTE *)(v5 + 509) )
  {
LABEL_13:
    v10 = *((_WORD *)v4 + 14);
    v2 = -1;
    v33 = v10;
    v27 = -1;
LABEL_18:
    v11 = 0LL;
    goto LABEL_19;
  }
  v2 = *(_WORD *)(v5 + 510);
  v27 = v2;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v10 = 88;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v10 = 55;
LABEL_12:
  v11 = *(_QWORD *)v5;
  v28 = *(_QWORD *)(v5 + 8);
  v33 = v10;
LABEL_19:
  if ( !v3 && !v5 )
    goto LABEL_45;
  v13 = _InterlockedExchange64((volatile __int64 *)(a1 + 3184), 0LL);
  v14 = _InterlockedExchange64((volatile __int64 *)(a1 + 3192), 0LL);
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    v15 = a1 + 24;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    v15 = a1 + 24;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      v19 = *(_QWORD *)v15;
      v16 = (const wchar_t *)&unk_1C005B620;
      v20 = &unk_1C005B620;
      ++g_StorpTraceLoggingCriticalEventsLogged;
      if ( *(_QWORD *)(v19 + 5208) )
        v20 = *(_WORD **)(v19 + 5208);
      v25 = v2;
      v18 = v34;
      StorpTelemetryNvmeHealthCriticalInfo(a1, v20, v3, v34, v31, v25, v5, v10, v13, v14, v30, v29, v11, v28);
      goto LABEL_38;
    }
  }
  v16 = (const wchar_t *)&unk_1C005B620;
  v17 = &unk_1C005B620;
  if ( *(_QWORD *)(*(_QWORD *)v15 + 5208LL) )
    v17 = *(_WORD **)(*(_QWORD *)v15 + 5208LL);
  v24 = v2;
  v18 = v34;
  StorpTelemetryNvmeHealthInfo(a1, v17, v3, v34, v31, v24, v5, v10, v13, v14, v30, v29, v11, v28);
LABEL_38:
  if ( !*(_BYTE *)(a1 + 1997) || *(_BYTE *)(a1 + 1996) != v32 )
  {
    if ( (byte_1C0069844 & 8) != 0 )
    {
      v21 = *(_QWORD *)v15;
      v22 = *(_QWORD *)(*(_QWORD *)v15 + 5208LL);
      v23 = *(_QWORD *)v15 + 5192LL;
      if ( v22 )
        v16 = *(const wchar_t **)(v21 + 5208);
      McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer(
        v18,
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
        v16,
        *(_BYTE *)(a1 + 450) & 1,
        v26,
        *(_BYTE *)(a1 + 1996),
        v18,
        v3,
        v31,
        v27,
        v33,
        v5);
    }
    *(_BYTE *)(a1 + 1997) = 0;
  }
LABEL_45:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
}
