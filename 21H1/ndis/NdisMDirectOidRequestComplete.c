/*
 * XREFs of NdisMDirectOidRequestComplete @ 0x1C00AF860
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00096B0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMDirectOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v3; // zf
  __int64 v6; // r10
  struct _NDIS_OID_REQUEST *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v7 = OidRequest;
  if ( !v3 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, OidRequest, 0, &v7);
    OidRequest = v7;
  }
  v6 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v6
                                                                                      + 56))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v6 + 24),
    *((_QWORD *)MiniportAdapterHandle + 659),
    MiniportAdapterHandle,
    OidRequest,
    Status);
}
