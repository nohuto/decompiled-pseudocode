/*
 * XREFs of NdisLWMRegisterMiniportDriver @ 0x1C0060950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C002BC30 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036860 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005F4F4 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C01157C4 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C0116348 (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 */

__int64 __fastcall NdisLWMRegisterMiniportDriver(void *a1, struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a2, void **a3)
{
  unsigned int v6; // edi
  unsigned __int8 v7; // al
  int v8; // eax
  PVOID v9; // rcx
  PVOID v10; // rbx
  void *v11; // rbx
  struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS v13; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+108h] [rbp+77h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x80u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  *a3 = 0LL;
  LOBYTE(P) = 0;
  v6 = ndisValidateLWMiniportDriverCharacteristicsHeader(a2, (unsigned __int8 *)&P);
  if ( v6 )
    goto LABEL_14;
  memset(&v13, 0, sizeof(v13));
  v13.Header.Type = -118;
  v13.Header.Revision = (unsigned __int8)P;
  if ( (_BYTE)P == 3 )
  {
    v7 = *((_BYTE *)a2 + 4);
    P = 0LL;
    v13.MajorNdisVersion = v7;
    v13.MinorNdisVersion = *((_BYTE *)a2 + 5);
    v13.MajorDriverVersion = *((_BYTE *)a2 + 6);
    v13.MinorDriverVersion = *((_BYTE *)a2 + 7);
    v13.SetOptionsHandler = (int (__fastcall *)(void *, void *))*((_QWORD *)a2 + 4);
    v13.PauseHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *))*((_QWORD *)a2 + 5);
    v13.RestartHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_RESTART_PARAMETERS *))*((_QWORD *)a2 + 6);
    v13.OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 7);
    v13.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)a2 + 8);
    v13.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)a2 + 9);
    v13.CancelSendHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 10);
    v13.CancelOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 11);
    v13.DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 12);
    v13.CancelDirectOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)a2 + 13);
    v13.SynchronousOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)a2 + 14);
    v13.Header.Size = 160;
    v13.Flags = 32;
    v8 = ndisLWMGetServiceKeyFromServiceName((unsigned __int8)a2 + 16);
    v6 = NdisConvertNtStatusToNdisStatus(v8);
    if ( v6 )
    {
      v9 = P;
      if ( !P )
        goto LABEL_13;
    }
    else
    {
      v10 = P;
      v6 = ndisInternalRegisterMiniportDriver(0LL, (struct _UNICODE_STRING *)P, a1, &v13, a3);
      if ( !v10 )
        goto LABEL_13;
      v9 = v10;
    }
    ExFreePoolWithTag(v9, 0);
LABEL_13:
    if ( !v6 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v6 = -1073676283;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x81u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
LABEL_14:
  v11 = *a3;
  if ( *a3 )
  {
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'((_NDIS_M_DRIVER_BLOCK *)*a3);
    ExFreePoolWithTag(v11, 0);
    *a3 = 0LL;
  }
LABEL_16:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x82u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      v6);
  return v6;
}
