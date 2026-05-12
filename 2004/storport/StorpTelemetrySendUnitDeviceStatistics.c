/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C8
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C000D2C0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C00025FC (StorpTelemetryDeviceStatisticsCommand.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer @ 0x1C004FD78 (McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0052C70 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C005313C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  int v1; // eax
  char *PoolWithTag; // rax
  char *v4; // rbx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r8
  void *v9; // rcx
  char *v10; // [rsp+F0h] [rbp-80h] BYREF
  void *v11; // [rsp+F8h] [rbp-78h]
  void *v12; // [rsp+100h] [rbp-70h]
  void *v13; // [rsp+108h] [rbp-68h]
  void *v14; // [rsp+110h] [rbp-60h]
  void *v15; // [rsp+118h] [rbp-58h]
  void *v16; // [rsp+120h] [rbp-50h]
  void *v17; // [rsp+128h] [rbp-48h]
  __int128 v18; // [rsp+130h] [rbp-40h]
  char *v20; // [rsp+190h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 1992);
  v18 = 0LL;
  if ( (v1 & 4) != 0 )
    return;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
  v20 = PoolWithTag;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  memset(PoolWithTag, 0, 0x1000uLL);
  v10 = v4;
  v14 = v4 + 2048;
  v11 = v4 + 512;
  v15 = v4 + 2560;
  v12 = v4 + 1024;
  v16 = v4 + 3072;
  v13 = v4 + 1536;
  v17 = v4 + 3584;
  v5 = StorpTelemetryDeviceStatisticsCommand(a1, v4, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 != -1073741670 )
    {
      v6 = *(_DWORD *)(a1 + 1992);
      if ( (v6 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v6 | 4;
    }
    goto LABEL_7;
  }
  if ( (unsigned __int8)v10[8] <= 1u )
    goto LABEL_7;
  v7 = 0;
  while ( v7 <= 7 )
  {
    v8 = (unsigned __int8)v10[v7 + 9];
    switch ( v10[v7 + 9] )
    {
      case 1:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11, v8) >= 0 )
        {
          LOWORD(v18) = 88;
          break;
        }
        v9 = v11;
LABEL_22:
        memset(v9, 0, 0x200uLL);
        break;
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v12, v8) >= 0 )
        {
          WORD1(v18) = 24;
          break;
        }
        v9 = v12;
        goto LABEL_22;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13, v8) >= 0 )
        {
          WORD2(v18) = 72;
          break;
        }
        v9 = v13;
        goto LABEL_22;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v14, v8) >= 0 )
        {
          WORD3(v18) = 24;
          break;
        }
        v9 = v14;
        goto LABEL_22;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v15, v8) >= 0 )
        {
          WORD4(v18) = 112;
          break;
        }
        v9 = v15;
        goto LABEL_22;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v16, v8) >= 0 )
        {
          WORD5(v18) = 32;
          break;
        }
        v9 = v16;
        goto LABEL_22;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v17, v8) >= 0 )
        {
          WORD6(v18) = 16;
          break;
        }
        v9 = v17;
        goto LABEL_22;
    }
    if ( ++v7 >= (unsigned __int8)v10[8] )
      break;
  }
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( *(_BYTE *)(a1 + 1996) )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( g_StorpTraceLoggingCriticalEventEnabled )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1, &v10);
  else
LABEL_53:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1, &v10);
  if ( (byte_1C0068844 & 8) != 0 )
  {
    McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      a1,
      WORD4(v18),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4864LL),
      a1 + 160,
      a1 + 169,
      a1 + 186,
      *(_BYTE *)(a1 + 450) & 1);
    v4 = v20;
  }
LABEL_7:
  ExFreePoolWithTag(v4, 0x65546152u);
}
