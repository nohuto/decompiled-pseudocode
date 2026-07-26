/*
 * XREFs of ndisMQueueReceiveNetBufferLists @ 0x1C00A31E8
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A2A40 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099194 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMPeriodicPendingReceives @ 0x1C00A2ECC (ndisMPeriodicPendingReceives.c)
 *     ndisMPeriodicReceivesResources @ 0x1C00A303C (ndisMPeriodicReceivesResources.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00A36E8 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1C00A3764 (ndisQueuePeriodicReceivesWorkItem.c)
 */

void __fastcall ndisMQueueReceiveNetBufferLists(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  char v5; // bl
  struct _NET_BUFFER_LIST *v6; // rdi
  char v8; // al
  struct _NET_BUFFER_LIST *v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0LL;
  v9 = 0LL;
  if ( (a5 & 2) != 0 )
  {
    v8 = ndisMPeriodicReceivesResources((__int64)a1, (__int64)a2, a3, a4, a5);
  }
  else
  {
    v8 = ndisMPeriodicPendingReceives((__int64)a1, a2, a3, a4, a5, &v9);
    v6 = v9;
  }
  if ( v8 )
  {
    ndisQueuePeriodicReceivesWorkItem(a1);
    ndisQueuePeriodicReceivesTimer();
  }
  if ( v6 )
    ndisReturnNetBufferListsInternal(a1, v6, v5 & 1, 0LL);
}
