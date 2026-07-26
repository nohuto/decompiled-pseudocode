/*
 * XREFs of ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0078350
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00331D4 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078B60 (-ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisIovInitializeNicSwitch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2,
        struct _NDIS_NIC_SWITCH_BLOCK **a3,
        struct _NDIS_PF_BLOCK **a4,
        struct _NDIS_VPORT_BLOCK **a5)
{
  unsigned int v5; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  struct _NDIS_PF_BLOCK *v13; // r14
  _QWORD *v14; // rax
  struct _NDIS_VPORT_BLOCK *v15; // rax
  struct _NDIS_VPORT_BLOCK *v16; // rsi

  v5 = 0;
  if ( !a3 || !a4 || !a5 )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6F69444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2A0uLL);
    v11[1] = v11;
    v11[11] = v11 + 10;
    v11[10] = v11 + 10;
    *v11 = v11;
    v11[8] = v11 + 7;
    v11[7] = v11 + 7;
    v11[2] = a1;
    *((_DWORD *)v11 + 9) = *((_DWORD *)a2 + 3);
    *((_DWORD *)v11 + 8) = 1;
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F69444Eu);
    v13 = (struct _NDIS_PF_BLOCK *)v12;
    if ( v12 )
    {
      v12[1] = 0LL;
      v12[3] = 0LL;
      v12[5] = 0LL;
      *v12 = a1;
      v12[2] = v11;
      v14 = v12 + 4;
      v14[1] = v14;
      *v14 = v14;
      v11[5] = v13;
      v15 = (struct _NDIS_VPORT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, sizeof(struct _NDIS_VPORT_BLOCK));
        v16->Miniport = a1;
        v16->Flags |= 1u;
        v16->NicSwitch = (struct _NDIS_NIC_SWITCH_BLOCK *)v11;
        v16->AttachedFunction = v13;
        *(_QWORD *)&v16->VPortParams.Header.Type = 49283456LL;
        v16->VPortParams.SwitchId = *((_DWORD *)v11 + 9);
        v16->VPortParams.AttachedFunctionId = -1;
        v16->VPortParams.VPortState = NdisNicSwitchVPortStateActivated;
        v16->VPortParams.VPortId = 0;
        v16->VPortParams.InterruptModeration = NdisNicSwitchVPortInterruptModerationUndefined;
        v16->VPortParams.NumQueuePairs = *((_DWORD *)a2 + 137);
        v16->VPortParams.ProcessorAffinity.Group = a1->RssBaseProcessor.Group;
        v16->VPortParams.ProcessorAffinity.Mask = 1LL << a1->RssBaseProcessor.Number;
        v16->CombinedNdisRSSParameters = 0LL;
        v16->RssParametersBuffer = 0LL;
        v16->FilterList.Blink = &v16->FilterList;
        v16->FilterList.Flink = &v16->FilterList;
        *a3 = (struct _NDIS_NIC_SWITCH_BLOCK *)v11;
        *a4 = v13;
        *a5 = v16;
        return v5;
      }
      ExFreePoolWithTag(v13, 0);
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)-1073741670;
}
