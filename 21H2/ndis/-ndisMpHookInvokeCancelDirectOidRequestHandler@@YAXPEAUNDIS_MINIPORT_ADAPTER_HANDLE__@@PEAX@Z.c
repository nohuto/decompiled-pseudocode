/*
 * XREFs of ?ndisMpHookInvokeCancelDirectOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C00AC750
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMRawInvokeCancelDirectOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0070460 (-ndisMRawInvokeCancelDirectOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 */

void __fastcall ndisMpHookInvokeCancelDirectOidRequestHandler(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  ndisMRawInvokeCancelDirectOidRequest(a1, a2);
}
