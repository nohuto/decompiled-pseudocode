/*
 * XREFs of ?ndisVerifierNdisMOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00AC0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisMOidRequestComplete(_QWORD *a1, struct _NDIS_OID_REQUEST *a2, __int64 a3)
{
  (*((void (__fastcall **)(_QWORD *, struct _NDIS_OID_REQUEST *, __int64, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS)))ndisVerifierNdisDispatch
   + 4))(
    a1,
    a2,
    a3,
    a1[620],
    NdisMOidRequestComplete);
}
