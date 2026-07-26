/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BC3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNetBufferLists(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *))(a1[9] + 64LL))(*(_QWORD *)(a1[9] + 24LL), a2);
}
