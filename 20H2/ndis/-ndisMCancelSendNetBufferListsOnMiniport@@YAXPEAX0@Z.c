/*
 * XREFs of ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1C00AA3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A53C0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A72D0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

void __fastcall ndisMCancelSendNetBufferListsOnMiniport(_QWORD *a1, void *a2)
{
  if ( !a1[556] || (unsigned __int8)ndisSetBusyAsync((__int64)a1) )
  {
    (*(void (__fastcall **)(_QWORD, void *))(a1[470] + 200LL))(a1[3], a2);
    if ( a1[556] )
      ndisClearBusy((__int64)a1, 1, 53);
  }
}
