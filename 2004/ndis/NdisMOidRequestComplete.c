/*
 * XREFs of NdisMOidRequestComplete @ 0x1C001E970
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C00BAA40 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C00BAB30 (NdisMCoRequestComplete.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00096B0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B140 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1C000F340 (WPP_RECORDER_SF_qDqqd.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001B5B8 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v6; // rsi
  NdisWatchdogState *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-38h]
  NDIS_STATUS v12; // [rsp+40h] [rbp-18h]
  struct _NDIS_OID_REQUEST *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = OidRequest;
  v6 = OidRequest;
  if ( *(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) != 1 )
  {
    v7 = (NdisWatchdogState *)*((_QWORD *)MiniportAdapterHandle + 681);
    if ( v7 != (NdisWatchdogState *)-1LL )
      NdisWatchdogState::CancelTimer(v7);
  }
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, OidRequest, 1, &v13);
    v6 = v13;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, 0x12u, v11);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = Status;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      Status,
      0x13u,
      (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
      (char)MiniportAdapterHandle,
      OidRequest->DATA.QUERY_INFORMATION.Oid,
      (char)OidRequest,
      v12);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 278) )
    *((_QWORD *)MiniportAdapterHandle + 278) = 0LL;
  v8 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v8
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v8 + 24),
    *((_QWORD *)MiniportAdapterHandle + 659),
    MiniportAdapterHandle,
    v6,
    Status);
}
