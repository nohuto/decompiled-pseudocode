/*
 * XREFs of ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024B5C
 * Callers:
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C02442A0 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0246630 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C0246E94 (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C0247460 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 * Callees:
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C010C6F8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceUnsafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGRESOURCE *v9; // rdx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 256) )
  {
    v5 = *(_QWORD *)(a1 + 240);
    v6 = *(_DWORD *)(v5 + 16 * v4 + 8);
    if ( ((a3 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60) && (v6 & 0x2000) == 0 && (v6 & 0x1F) != 0 )
    {
      v7 = v6 & 0x1F;
      if ( (_BYTE)v7 == 4 )
      {
        v9 = *(struct DXGRESOURCE **)(v5 + 16LL * (unsigned int)v4);
        goto LABEL_8;
      }
      v8 = WdLogNewEntry5_WdError(v7, 2LL * (unsigned int)v4);
      *(_QWORD *)(v8 + 24) = 267LL;
      WdLogEvent5_WdError(v8);
    }
  }
  v9 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v9);
  return a2;
}
