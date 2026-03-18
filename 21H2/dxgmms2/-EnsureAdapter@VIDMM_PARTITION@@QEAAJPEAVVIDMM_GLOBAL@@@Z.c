/*
 * XREFs of ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C001C768
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C00B87FC (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00029E4 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0013410 (RtlStringCbPrintfW.c)
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C001C938 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C00A7394 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 */

__int64 __fastcall VIDMM_PARTITION::EnsureAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  struct VIDMM_PARTITION_ADAPTER_INFO *v5; // rbx
  unsigned __int64 v6; // rsi
  NTSTATUS v7; // ebx
  wchar_t *v8; // rbp
  unsigned int v9; // esi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  __int64 v11; // rcx
  PPCW_INSTANCE *v12; // r14
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  struct _PCW_DATA v18; // [rsp+60h] [rbp-48h] BYREF
  struct _PCW_DATA v19; // [rsp+70h] [rbp-38h] BYREF

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v5 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
    return 0LL;
  v6 = *((unsigned int *)a2 + 1754);
  if ( (unsigned int)v6 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x150 )
      goto LABEL_17;
    *((_QWORD *)AdapterInfo + 3) = ExAllocatePool2(64LL, 336 * v6, 1833789782LL);
  }
  else
  {
    *((_QWORD *)AdapterInfo + 3) = (char *)AdapterInfo + 32;
    if ( (_DWORD)v6 )
      memset((char *)AdapterInfo + 32, 0, 336 * v6);
  }
  *((_DWORD *)v5 + 92) = v6;
  if ( !*((_QWORD *)v5 + 3) )
  {
LABEL_17:
    _InterlockedAdd(&dword_1C006E870, 1u);
    WdLogSingleEntry1(6LL, 453LL);
    DxgCoreInterface[85](
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Couldn't allocate memory for vidmmpartition.",
      453LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  *((_QWORD *)v5 + 1) = a2;
  *(_QWORD *)v5 = this;
  VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(a2, this, v5);
  v7 = 0;
  v8 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create naming string for CreateGpuPerformanceCounterSetLocalAdapterMemory",
      465LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v9 = 0;
  if ( *((_DWORD *)a2 + 1754) )
  {
    while ( 1 )
    {
      SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(a2, v9, this);
      v11 = *((_QWORD *)a2 + 3);
      v12 = (PPCW_INSTANCE *)SegmentGroupStateForPartition;
      LODWORD(v16) = *((_DWORD *)this + 8);
      DestinationString = 0LL;
      LODWORD(v15) = v9;
      LODWORD(Data) = *(_DWORD *)(v11 + 404);
      v7 = RtlStringCbPrintfW(
             v8,
             0x208uLL,
             L"luid_0x%08X_0x%08X_phys_%u_part_%u",
             *(unsigned int *)(v11 + 408),
             Data,
             v15,
             v16);
      if ( v7 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( *(_DWORD *)v12 )
      {
        if ( *(_DWORD *)v12 == 1 )
        {
          v19.Data = v12;
          v19.Size = 336;
          v7 = PcwCreateInstance(v12 + 41, GpuPerformanceCounterSetNonLocalAdapterMemory, &DestinationString, 1u, &v19);
          if ( v7 < 0 )
          {
            WdLogSingleEntry0(1LL);
            DxgCoreInterface[85](
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to create CreateGpuPerformanceCounterSetNonLocalAdapterMemory",
              503LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_12;
          }
        }
      }
      else
      {
        v18.Data = v12;
        v18.Size = 336;
        v7 = PcwCreateInstance(v12 + 41, GpuPerformanceCounterSetLocalAdapterMemory, &DestinationString, 1u, &v18);
        if ( v7 < 0 )
        {
          WdLogSingleEntry0(1LL);
          DxgCoreInterface[85](
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to create CreateGpuPerformanceCounterSetLocalAdapterMemory",
            494LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_12;
        }
      }
      if ( ++v9 >= *((_DWORD *)a2 + 1754) )
        goto LABEL_12;
    }
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create naming string for Adapter Memory partitions",
      484LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_12:
  ExFreePoolWithTag(v8, 0);
  if ( v7 >= 0 )
    return 0LL;
  return (unsigned int)v7;
}
