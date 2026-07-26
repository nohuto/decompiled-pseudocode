/*
 * XREFs of ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C630
 * Callers:
 *     ndisWMIDispatch @ 0x1C0010B00 (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x1C0061A70 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008980 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013F10 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C00190F0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C001920C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019D0C (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E74 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A3D8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A470 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     NdisWriteConfiguration @ 0x1C00272F0 (NdisWriteConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C0028A80 (NdisOpenConfiguration.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067358 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008D10C (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095160 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00952F8 (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C009543C (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B7E90 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012067C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *const a3)
{
  struct _NDIS_GUID *v4; // r14
  struct _NDIS_CO_VC_PTR_BLOCK *v6; // rbx
  NDIS_PORT_NUMBER v7; // r13d
  unsigned int v8; // r15d
  void *v9; // r12
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned __int16 v11; // r9
  unsigned int Flags; // ecx
  ULONG SizeDataBlock; // edx
  char *v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int WSyncFlags; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r9
  _NDIS_IF_BLOCK *v23; // rcx
  __int64 v24; // rax
  unsigned int PnPFlags; // ecx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // rax
  NDIS_HANDLE RequestHandle; // rcx
  ULONG v33; // edx
  unsigned int Oid; // r10d
  struct _NDIS_MINIPORT_BLOCK *v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // esi
  int v38; // eax
  __int64 v40; // [rsp+30h] [rbp-D0h]
  int Status[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v42; // [rsp+60h] [rbp-A0h]
  struct _NDIS_CO_VC_PTR_BLOCK *v43; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v44; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_GUID *v45; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v46; // [rsp+80h] [rbp-80h]
  UNICODE_STRING Keyword; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp-68h] BYREF
  struct _NDIS_OID_REQUEST v49; // [rsp+B0h] [rbp-50h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v50; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(Status, 0, sizeof(Status));
  v4 = a2;
  v45 = a2;
  memset(&v49, 0, 0xF8uLL);
  *(_QWORD *)&Keyword.Length = 2097182LL;
  v6 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v7 = 0;
  v8 = 0;
  v46 = 0LL;
  v9 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  v43 = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  memset(&v50, 0, sizeof(v50));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x31u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_8;
  LODWORD(v6) = ndisWmiFindInstanceName(
                  &v43,
                  a1,
                  (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                  *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( (int)v6 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x32u,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    goto LABEL_130;
  }
  v6 = v43;
  v46 = v43;
  if ( !v43 )
  {
LABEL_8:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v44, 0, MPREF_WMI_CHANGE);
      v42 = v44;
    }
  }
  if ( !v4 )
  {
    ndisWmiGetGuid(&v45, a1, &a3->WnodeHeader.Guid, 0);
    v4 = v45;
    if ( !v45 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_15:
        LODWORD(v6) = -1073741811;
        goto LABEL_126;
      }
      v11 = (_WORD)v45 + 51;
LABEL_14:
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        v11,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
      goto LABEL_15;
    }
  }
  Flags = v4->Flags;
  if ( (Flags & 0x40000000) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x34u,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    LODWORD(v6) = -1073741637;
    goto LABEL_126;
  }
  SizeDataBlock = a3->SizeDataBlock;
  v14 = (char *)a3 + a3->DataBlockOffset;
  if ( !SizeDataBlock )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v11 = 53;
    goto LABEL_14;
  }
  if ( (Flags & 0x200) != 0 )
  {
    if ( SizeDataBlock < 0x20 || *((_QWORD *)v14 + 1) != a1->NetLuid.Value )
    {
      LODWORD(v6) = -1073741811;
      goto LABEL_126;
    }
    v7 = *((_DWORD *)v14 + 1);
    v8 = 32;
    v9 = (void *)*((_QWORD *)v14 + 2);
    v15 = *((_DWORD *)v14 + 6);
  }
  else
  {
    v15 = Status[1];
  }
  if ( v6 || (Flags & 0x20000000) == 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x38u,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          a1);
      LODWORD(v6) = -1073741808;
      goto LABEL_126;
    }
    if ( v4->Oid == 66076 && (SizeDataBlock != 4 || (*(_DWORD *)v14 & 0xFFFFF000) != 0) )
    {
      LODWORD(v6) = -1073741808;
      goto LABEL_126;
    }
    *(_DWORD *)&v49.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    v33 = SizeDataBlock - v8;
    *(_QWORD *)&v49.NdisReserved[32] = &ndisIntReqWmi;
    v49.Header = (NDIS_OBJECT_HEADER)15466902;
    Oid = v4->Oid;
    v49.DATA.QUERY_INFORMATION.Oid = Oid;
    if ( !v9 )
      RequestHandle = v49.RequestHandle;
    v49.RequestHandle = RequestHandle;
    v49.RequestType = NdisRequestSetInformation;
    v49.PortNumber = v7;
    v49.DATA.QUERY_INFORMATION.InformationBuffer = &v14[v8];
    v49.DATA.QUERY_INFORMATION.InformationBufferLength = v33;
    v49.RequestId = v9;
    v49.Timeout = v15;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        (int)v14,
        0x39u,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)&v49,
        Oid,
        a1);
    if ( v6 || (v35 = v42) == 0LL )
      v35 = a1;
    Status[0] = ndisQuerySetMiniportEx(v35, v6, &v49, 0, 0LL, 0LL);
    v37 = Status[0];
    if ( Status[0] == -1071448017 )
    {
      if ( (v4->Flags & 0x200) != 0 )
        goto LABEL_105;
      v37 = 0;
      Status[0] = 0;
    }
    if ( !v37 )
    {
      LODWORD(v6) = 0;
      goto LABEL_126;
    }
LABEL_105:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x3Au,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    if ( (byte_1C00E61C1 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v36,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v37,
        1,
        0);
    if ( (v4->Flags & 0x200) != 0 )
    {
      if ( (v37 & 0xC0010000) == 0xC0010000 )
      {
        v37 = (unsigned __int16)v37 | 0xC0230000;
        Status[0] = v37;
      }
    }
    else if ( v37 != 259 && v37 != -2147483643 )
    {
      v38 = -1073741823;
      if ( v37 != -1073741823 && v37 != -1073741670 && v37 != -1073741637 )
      {
        if ( v37 == -1073676266 )
        {
          LODWORD(v6) = -1073741789;
        }
        else if ( v37 == -1073676268 )
        {
          LODWORD(v6) = -1073741306;
        }
        else
        {
          if ( v37 == -1073676267 )
            v38 = -1073741811;
          LODWORD(v6) = v38;
        }
        goto LABEL_126;
      }
    }
    LODWORD(v6) = v37;
LABEL_126:
    if ( v46 )
      ndisDereferenceVcPtr(v46);
    goto LABEL_128;
  }
  if ( SizeDataBlock == 4 )
  {
    Status[1] = *(_DWORD *)v14;
    if ( Status[1] > 1u )
      goto LABEL_33;
  }
  v16 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v16 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v16 )
  {
    LODWORD(v6) = ndisNDKHandleWmiChangeRequest(a1, *v14);
    goto LABEL_128;
  }
  v17 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v17 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( v17 )
  {
    v24 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
    if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
      v24 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
    if ( v24 )
    {
      v27 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
      if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
        v27 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
      if ( v27 )
      {
        v31 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
        if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
          v31 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
        if ( !v31 )
        {
          LODWORD(v6) = ndisWmiSetPMAdminConfig(a1, (struct _NDIS_WMI_PM_ADMIN_CONFIG *)v14);
          goto LABEL_62;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x12u,
            0x37u,
            (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
            a1);
LABEL_61:
        LODWORD(v6) = -1073741808;
        goto LABEL_62;
      }
      if ( (a1->PnPFlags & 0x4000001) == 0x4000001
        && (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
      {
        v28 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v28;
        v29 = v28 & 0xFFFFFEFF;
        v30 = v28 | 0x100;
        if ( !*v14 )
          v30 = v29;
        a1->PnPCapabilities = v30;
        goto LABEL_49;
      }
    }
    else
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x4000001) == 0x4000001 && !a1->AoAc )
      {
        v26 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v26;
        if ( *v14 )
        {
          a1->PnPFlags = PnPFlags | 0x40;
          a1->PnPCapabilities = v26 & 0xFFFFFFEF;
        }
        else
        {
          a1->PnPFlags = PnPFlags & 0xFFFFFFBF;
          a1->PnPCapabilities = v26 | 0x10;
          ndisCancelWaitWake(a1);
        }
        goto LABEL_49;
      }
    }
LABEL_33:
    LODWORD(v6) = -1073741808;
    goto LABEL_128;
  }
  v18 = a1->PnPFlags;
  if ( (v18 & 0x8001) != 1 || a1->AoAc )
    goto LABEL_61;
  v19 = a1->PnPCapabilities & 0xEFFFFFFF;
  a1->PnPCapabilities = v19;
  if ( *v14 )
  {
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 0x10) == 0 )
      a1->PnPFlags = v18 | 0x20;
    a1->PnPCapabilities = v19 & 0xFFFFFFF7;
    if ( (WSyncFlags & 8) != 0 )
    {
      a1->PMCurrentParameters.WakeUpFlags |= 1u;
      if ( a1->MediaConnectState == MediaConnectStateDisconnected )
        ndisSetMediaDisconnectTimer(a1);
    }
    goto LABEL_49;
  }
  a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  a1->PnPFlags = v18 & 0xFFFFFFDF;
  a1->PnPCapabilities = v19 | 0x18;
  ndisCancelMediaDisconnectTimer(a1);
  if ( a1->CurrentDevicePowerState == PowerDeviceD0 || (a1->Flags & 0x20000000) != 0 || (a1->WSyncFlags & 8) == 0 )
  {
LABEL_49:
    ndisUpdateAndIndicatePMCapabilities(a1);
    NdisOpenConfiguration(Status, (PNDIS_HANDLE)&Status[2], a1->ConfigurationHandle);
    if ( Status[0] >= 0 )
    {
      ParameterValue.ParameterData.IntegerData = a1->PnPCapabilities;
      NdisWriteConfiguration(Status, *(NDIS_HANDLE *)&Status[2], &Keyword, &ParameterValue);
      NdisCloseConfiguration(*(NDIS_HANDLE *)&Status[2]);
    }
    ndisInitializeNetPnPEvent(&v50, 0LL);
    v50.NetPnPEvent.NetEvent = NetEventPnPCapabilities;
    v50.NetPnPEvent.Buffer = &a1->PMCapabilities61;
    v50.NetPnPEvent.BufferLength = 4;
    ndisPnPNotifyAllTransports(a1, &v50);
    if ( ndisMReferenceIfBlock(a1, 0x10u) )
    {
      IfBlock = a1->IfBlock;
      ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
      IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
      v23 = a1->IfBlock;
      if ( ifDeviceWakeUpEnable != v23->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(
          v23,
          (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))&v23->ifDeviceWakeUpEnable,
          1,
          641);
      ndisMDereferenceIfBlock(a1, MPIFREF_WMI);
    }
    goto LABEL_126;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x36u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  LODWORD(v6) = ndisWakeUpDevice(a1);
LABEL_62:
  if ( (int)v6 >= 0 )
    goto LABEL_49;
LABEL_128:
  if ( v42 )
    ndisDereferenceMiniport(v42, 0x5Fu);
LABEL_130:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v40) = (_DWORD)v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Bu,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      v40);
  }
  return (unsigned int)v6;
}
