/*
 * XREFs of ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C006E560
 * Callers:
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C006DBD4 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F9D0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006FD74 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00708A0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C08 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMDeQueueWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_WORK_ITEM_TYPE a2,
        _SINGLE_LIST_ENTRY **a3,
        _SINGLE_LIST_ENTRY **a4)
{
  __int64 v4; // r11
  _SINGLE_LIST_ENTRY *Next; // rcx
  int v7; // edx
  int v8; // edx

  v4 = a2;
  Next = a1->WorkQueue[a2].Next;
  if ( Next )
  {
    a1->WorkQueue[a2] = (_SINGLE_LIST_ENTRY)Next->Next;
    if ( a3 )
      *a3 = Next[2].Next;
    if ( a4 )
      *a4 = Next[3].Next;
    v7 = a2 - 3;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          ExFreePoolWithTag(Next, 0);
        }
        else
        {
          Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[v4];
          a1->SingleWorkItems[v4].Next = Next;
        }
      }
      else
      {
        Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[3];
        a1->SingleWorkItems[3].Next = Next;
      }
    }
    else
    {
      LODWORD(Next[1].Next) = 4;
      Next->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[4];
      a1->WorkQueue[4].Next = Next;
    }
  }
}
