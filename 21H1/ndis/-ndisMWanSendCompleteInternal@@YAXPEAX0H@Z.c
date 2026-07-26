/*
 * XREFs of ?ndisMWanSendCompleteInternal@@YAXPEAX0H@Z @ 0x1C00AF130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall ndisMWanSendCompleteInternal(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 91))(
           NdisBindingHandle,
           OidRequest);
}
