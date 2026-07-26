/*
 * XREFs of NdisCancelOidRequest @ 0x1C00A1910
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099C14 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 */

void __stdcall NdisCancelOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  ndisCancelOidRequestInternal(*((struct _NDIS_MINIPORT_BLOCK **)NdisBindingHandle + 2), 0LL, RequestId, 0);
}
