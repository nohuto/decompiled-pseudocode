/*
 * XREFs of ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00173A8
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0097270 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0099B7C (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C001020C (RtlStringCbPrintfW.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00160CC (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0017544 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@I@Z @ 0x1C0017620 (-AllocateElements@-$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAPEAU.c)
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C008B3D0 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 */

__int64 __fastcall VIDMM_PARTITION::EnsureAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  struct VIDMM_PARTITION_ADAPTER_INFO *v5; // rbx
  NTSTATUS v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  wchar_t *v10; // r12
  unsigned int v11; // ebp
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  __int64 v13; // rdx
  PPCW_INSTANCE *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _PCW_REGISTRATION *v18; // rdx
  struct _PCW_DATA *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  struct _PCW_DATA v28; // [rsp+50h] [rbp-38h] BYREF
  PPCW_INSTANCE *v29; // [rsp+60h] [rbp-28h] BYREF
  int v30; // [rsp+68h] [rbp-20h]

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v5 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
    return 0LL;
  if ( !NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1833789782>::AllocateElements(
          (char *)AdapterInfo + 24,
          *((unsigned int *)a2 + 1750)) )
  {
    _InterlockedAdd(&dword_1C00507C0, 1u);
    v21 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v21 + 24) = 455LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
  *((_QWORD *)v5 + 1) = a2;
  *(_QWORD *)v5 = this;
  VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(a2, this, v5);
  v6 = 0;
  v10 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v10 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8, v7, v9);
    WdLogEvent5_WdAssertion(v22);
    return 3221225495LL;
  }
  v11 = 0;
  if ( !*((_DWORD *)a2 + 1750) )
    goto LABEL_10;
  while ( 1 )
  {
    SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(a2, v11, this);
    v13 = *((_QWORD *)a2 + 3);
    LODWORD(v26) = *((_DWORD *)this + 8);
    v14 = (PPCW_INSTANCE *)SegmentGroupStateForPartition;
    DestinationString = 0LL;
    LODWORD(v25) = v11;
    LODWORD(Data) = *(_DWORD *)(v13 + 316);
    v6 = RtlStringCbPrintfW(
           v10,
           0x208uLL,
           L"luid_0x%08X_0x%08X_phys_%u_part_%u",
           *(unsigned int *)(v13 + 320),
           Data,
           v25,
           v26);
    if ( v6 < 0 )
      break;
    RtlInitUnicodeString(&DestinationString, v10);
    if ( *(_DWORD *)v14 )
    {
      if ( *(_DWORD *)v14 != 1 )
        goto LABEL_9;
      v18 = GpuPerformanceCounterSetNonLocalAdapterMemory;
      v19 = (struct _PCW_DATA *)&v29;
      v29 = v14;
      v30 = 336;
    }
    else
    {
      v18 = GpuPerformanceCounterSetLocalAdapterMemory;
      v19 = &v28;
      v28.Data = v14;
      v28.Size = 336;
    }
    v6 = PcwCreateInstance(v14 + 41, v18, &DestinationString, 1u, v19);
    if ( v6 < 0 )
      break;
LABEL_9:
    if ( ++v11 >= *((_DWORD *)a2 + 1750) )
      goto LABEL_10;
  }
  v23 = WdLogNewEntry5_WdAssertion(v16, v15, v17);
  WdLogEvent5_WdAssertion(v23);
LABEL_10:
  ExFreePoolWithTag(v10, 0);
  if ( v6 < 0 )
    return (unsigned int)v6;
  else
    return 0LL;
}
