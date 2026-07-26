/*
 * XREFs of ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002F20
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002AF0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F39C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F534 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AE28C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct NDIS_PCW_CONTEXT *a4)
{
  unsigned int Number; // eax
  unsigned __int64 v9; // rcx

  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1->NblTracker, NdisNblTrackerEvent_SendCompletedToOpen, a3 & 1);
  if ( byte_1C00E3FD0 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  if ( (*((_DWORD *)a4 + 2) & 0x80u) != 0 )
  {
    Number = *((_DWORD *)a4 + 4);
    if ( Number == -1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      *((_DWORD *)a4 + 4) = Number;
    }
    v9 = *(_QWORD *)a4 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * Number);
    ++*(_QWORD *)(v9 + 56);
  }
  if ( (*((_DWORD *)a4 + 3) & 0x200) != 0 )
    ndisPcwStartCycleCounter(a4, 9u);
  a1->ProtSendNetBufferListsComplete(a1->SendCompleteNetBufferListsContext, a2, a3);
  if ( (*((_DWORD *)a4 + 3) & 0x200) != 0 )
    ndisPcwEndCycleCounter(a4, 9u, 0x16uLL);
}
