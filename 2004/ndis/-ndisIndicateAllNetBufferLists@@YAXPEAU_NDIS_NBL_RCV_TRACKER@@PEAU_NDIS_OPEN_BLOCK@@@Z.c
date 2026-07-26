/*
 * XREFs of ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099184
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001AA0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0035E20 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00992E0 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A2F54 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 */

void __fastcall ndisIndicateAllNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rbx
  unsigned int v3; // r15d
  unsigned int v4; // r14d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rbp
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct _NET_BUFFER_LIST *v9; // rdx

  if ( a2 )
  {
    v2 = a2;
    v3 = *((_DWORD *)a1 + 172);
    v4 = *((_DWORD *)a1 + 4) | 2;
    do
    {
      FilterNextOpen = v2->FilterNextOpen;
      v7 = 0LL;
      do
      {
        v8 = (unsigned int)v7;
        v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 5 * v7 + 8);
        v7 = (unsigned int)(v7 + 1);
        if ( v9 )
          ndisMIndicateNetBufferListsToOpen(
            v2,
            v9,
            (char *)*((unsigned int *)a1 + 10),
            *((_DWORD *)a1 + 10 * v8 + 20),
            v4);
      }
      while ( (unsigned int)v7 <= v3 );
      v2 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
