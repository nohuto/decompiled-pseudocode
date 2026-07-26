/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00A5EE4
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8688 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8C7C (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A5708 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A6288 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00A62F4 (-ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z @ 0x1C00A6378 (-ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        struct _LIST_ENTRY *a6,
        _BYTE *a7)
{
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  *a7 = 0;
  if ( a2 != 49 )
  {
    if ( a2 == 51 )
    {
      ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)a1, (_LIST_ENTRY *)a3, a6);
    }
    else if ( a2 == 53 )
    {
      *a5 = ndisRemoveFromNblQueueByCancelId((struct _NBL_QUEUE *)(a1 + 544), (void *)a3);
    }
    else if ( a2 == 54 )
    {
      ndisQueueReceiveNblsOnMiniport((struct _NDIS_SELECTIVE_SUSPEND *)a1, (struct _NET_BUFFER_LIST *)a3);
    }
    else
    {
      if ( a2 == 52 )
      {
        ndisQueueSendNblsOnMiniport((struct _NDIS_SELECTIVE_SUSPEND *)a1, (struct _NET_BUFFER_LIST *)a3, a4);
        *(_DWORD *)(a1 + 632) = 0;
      }
      else if ( a2 == 50 )
      {
        v8 = *(_QWORD **)(a1 + 592);
        v9 = (_QWORD *)(a3 + 72);
        if ( *v8 != a1 + 584 )
          __fastfail(3u);
        *v9 = a1 + 584;
        *(_QWORD *)(a3 + 80) = v8;
        *v8 = v9;
        *(_QWORD *)(a1 + 592) = v9;
        *(_DWORD *)(a1 + 632) = *(_DWORD *)(a3 + 32);
      }
      *a7 = 1;
    }
  }
}
