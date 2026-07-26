/*
 * XREFs of ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0098D5C
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001AA0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0035BE0 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098E20 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A2184 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A2A94 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 */

void __fastcall ndisIndicateToPmodeOpens(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  unsigned int v2; // r12d
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rbx
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _NET_BUFFER_LIST *v10; // rdx

  v2 = *((_DWORD *)a1 + 10);
  v3 = *((_DWORD *)a1 + 4) | 2;
  v4 = *((_DWORD *)a1 + 172);
  FilterNextOpen = *(struct _NDIS_OPEN_BLOCK **)(*((_QWORD *)a1 + 1) + 16LL);
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 2244LL);
  while ( FilterNextOpen )
  {
    if ( (FilterNextOpen->OpenFlags & 4) != 0 )
    {
      v7 = 0LL;
      do
      {
        v8 = 5 * v7;
        v9 = (unsigned int)v7;
        v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 5 * v7 + 8);
        v7 = (unsigned int)(v7 + 1);
        if ( v10 )
        {
          if ( *((struct _NDIS_OPEN_BLOCK **)a1 + v8 + 7) != FilterNextOpen )
            ndisMIndicateNetBufferListsToOpen(FilterNextOpen, v10, (char *)v2, *((_DWORD *)a1 + 10 * v9 + 20), v3);
        }
      }
      while ( (unsigned int)v7 <= v4 );
      if ( !--v6 )
        break;
    }
    FilterNextOpen = FilterNextOpen->FilterNextOpen;
  }
}
