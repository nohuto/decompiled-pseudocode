/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FEDB4
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001D980 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011EE1C (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C00086B4 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??$WritePointerRelease@U_NDIS_PCW_DATA_BLOCK@@@mem@@YAXPEAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1C0008FF0 (--$WritePointerRelease@U_NDIS_PCW_DATA_BLOCK@@@mem@@YAXPEAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00FEF88 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00FEFF4 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

wchar_t *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t **p_Buffer; // r14
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v5; // esi
  unsigned __int16 v6; // bp
  SIZE_T v7; // r15
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // r15
  unsigned int v12; // esi
  __int64 v13; // r15
  unsigned int MiniportInstanceId; // eax
  __int64 v15; // r9
  int v16; // r9d
  unsigned int v17; // r10d

  p_Buffer = &a1->Reserved4.Buffer;
  if ( !a1->Reserved4.Buffer )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    v5 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v6 = pModifiedInstanceName->Length + 18;
    v7 = v5 + ndisPcwOffsetToPerCpuData + v6 * (ndisMaxNumberOfProcessors + 1);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x7763444Eu);
    v9 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v7);
      v10 = ndisMaxNumberOfProcessors;
      v11 = v5;
      v12 = 0;
      v13 = v9 + ndisPcwOffsetToPerCpuData + v11;
      *(_QWORD *)(v9 + 176) = a1;
      *(_DWORD *)(v9 + 168) = 2;
      if ( v10 )
      {
        do
        {
          ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)v9, v12);
          MiniportInstanceId = ndisPcwGetMiniportInstanceId(a1, v12);
          *(_DWORD *)(v15 + 408) = MiniportInstanceId;
          *(_WORD *)(v15 + 416) = 0;
          *(_WORD *)(v15 + 418) = v6;
          *(_QWORD *)(v15 + 424) = v13 + v12 * v6;
          if ( ndisPcwGetInstanceName(a1, v12, (struct _UNICODE_STRING *)(v15 + 416)) < 0 )
            goto LABEL_11;
        }
        while ( ++v12 < ndisMaxNumberOfProcessors );
      }
      *(_DWORD *)(v9 + 184) = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
      *(_WORD *)(v9 + 192) = 0;
      *(_WORD *)(v9 + 194) = v6;
      *(_QWORD *)(v9 + 200) = v13 + v16 * (unsigned int)v6;
      if ( ndisPcwGetInstanceName(a1, v17, (struct _UNICODE_STRING *)(v9 + 192)) < 0 )
      {
LABEL_11:
        ExFreePoolWithTag((PVOID)v9, 0);
        return *p_Buffer;
      }
      a1->IfBlock->PcwDataBlock = (struct _NDIS_PCW_DATA_BLOCK *)v9;
      mem::WritePointerRelease<_NDIS_PCW_DATA_BLOCK>(p_Buffer, v9);
      *(_QWORD *)(v9 + 160) = ndisPcwDataBlockList;
      ndisPcwDataBlockList = (PVOID)v9;
    }
  }
  return *p_Buffer;
}
