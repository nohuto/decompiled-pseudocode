/*
 * XREFs of NdisCancelSendNetBufferLists @ 0x1C0097C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCancelSendNetBufferLists(NDIS_HANDLE NdisBindingHandle, PVOID CancelId)
{
  (*(void (__fastcall **)(NDIS_HANDLE, PVOID))(*((_QWORD *)NdisBindingHandle + 2) + 184LL))(NdisBindingHandle, CancelId);
}
