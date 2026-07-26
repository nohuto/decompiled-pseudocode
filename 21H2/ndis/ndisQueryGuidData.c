/*
 * XREFs of ndisQueryGuidData @ 0x1C00124B0
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00106E0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 * Callees:
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008A70 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILITIES@@@Z @ 0x1C00954B8 (-ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILI.c)
 *     ?ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FF090 (-ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@@@Z @ 0x1C01207F8 (-ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@.c)
 */

__int64 __fastcall ndisQueryGuidData(
        struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *a1,
        unsigned int a2,
        struct _NDIS_MINIPORT_BLOCK *a3,
        struct _NDIS_GUID *a4,
        struct _NDIS_CO_VC_PTR_BLOCK *a5,
        struct _GUID *a6,
        struct _NDIS_MINIPORT_BLOCK *a7)
{
  struct _NDIS_GUID *v7; // rbx
  size_t v9; // r13
  unsigned int Flags; // eax
  NTSTATUS v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rdx
  bool v22; // cl
  __int64 v24; // rax
  unsigned __int16 Length; // ax
  unsigned int PnPFlags; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *p_WakeOnPattern; // r15
  struct _NDIS_MINIPORT_BLOCK *v30; // rcx
  unsigned int v31; // eax
  int v32; // edx
  unsigned int v33; // r14d
  int v34; // ecx
  unsigned int v35; // ecx
  size_t v36; // r8
  struct _NDIS_GUID *v38; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h]
  _STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_OID_REQUEST v43; // [rsp+90h] [rbp-70h] BYREF

  v7 = a4;
  v9 = a2;
  v38 = a4;
  v40 = a5;
  memset(&v43, 0, 0xF8uLL);
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x1Eu,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a3,
      a7);
  if ( !(_DWORD)v9 )
  {
    v12 = 0;
    goto LABEL_32;
  }
  memset(a1, 0, v9);
  if ( !v7 )
  {
    ndisWmiGetGuid(&v38, a3, a6, 0);
    v7 = v38;
    if ( !v38 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          (_DWORD)v38 + 18,
          (_WORD)v38 + 31,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          a3);
      v12 = -1073741811;
      goto LABEL_32;
    }
  }
  Flags = v7->Flags;
  if ( (Flags & 0x20000000) != 0 )
  {
    v12 = 0;
    v13 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v13 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( !v13 )
    {
      *(_WORD *)&a1->Header.Type = a3->MiniportName.Length;
      memmove(&a1->Header.Size, a3->MiniportName.Buffer, a3->MiniportName.Length);
      goto LABEL_32;
    }
    v14 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
    if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
      v14 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
    if ( !v14 )
    {
      *((_QWORD *)&v41 + 1) = a3->NetLuid.Value;
      DWORD1(v41) = a3->IfIndex;
      Length = a3->MiniportName.Length;
      LODWORD(v41) = 1573124;
      *(_OWORD *)&a1->Header.Type = v41;
      LOWORD(a1->PMARPOffload) = Length;
      memmove((char *)&a1->PMARPOffload + 2, a3->MiniportName.Buffer, a3->MiniportName.Length);
      goto LABEL_32;
    }
    v15 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
    if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
      v15 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
    if ( v15 )
    {
      v16 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v16 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( v16 )
      {
        v17 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v17 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( v17 )
        {
          v18 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
          if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
            v18 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
          if ( v18 )
          {
            v19 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
            if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
              v19 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
            if ( v19 )
            {
              v20 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
              if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
                v20 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
              if ( v20 )
              {
                v24 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
                if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                  v24 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
                if ( v24 )
                {
                  v27 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
                  if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                    v27 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
                  if ( v27 )
                  {
                    if ( !a5 )
                      goto LABEL_70;
                    v28 = *(_QWORD *)&v7->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
                    if ( *(_QWORD *)&v7->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                      v28 = *(_QWORD *)v7->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
                    if ( v28 )
LABEL_70:
                      v12 = -1073741811;
                  }
                  else
                  {
                    ndisNDKWmiGetAdapterCapabilities(a3, v9, (struct _NDIS_WMI_NDK_CAPABILITIES *)a1);
                  }
                }
                else
                {
                  a1->Header.Type = ndisNDKCheckIfEnabledOnMiniport(a3);
                }
              }
              else
              {
                CombinedNdisRSSParameters = a3->CombinedNdisRSSParameters;
                v22 = CombinedNdisRSSParameters != 0LL;
                if ( (a3->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 && CombinedNdisRSSParameters )
                  v22 = (CombinedNdisRSSParameters->Flags & 0x10) == 0
                     && LOBYTE(CombinedNdisRSSParameters->HashInformation);
                a1->Header.Type = v22;
              }
            }
            else
            {
              ndisWmiQueryPMActiveCapabilities(a3, a1);
            }
          }
          else
          {
            a1->Header = (NDIS_OBJECT_HEADER)1835392;
            a1->WakeOnPattern = a3->PMAdminConfig.Value & 3;
            a1->WakeOnMagicPacket = (a3->PMAdminConfig.Value >> 2) & 3;
            a1->DeviceSleepOnDisconnect = (a3->PMAdminConfig.Value >> 4) & 3;
            a1->PMARPOffload = (a3->PMAdminConfig.Value >> 6) & 3;
            a1->PMNSOffload = (a3->PMAdminConfig.Value >> 8) & 3;
            a1->PMWiFiRekeyOffload = (a3->PMAdminConfig.Value >> 10) & 3;
          }
          goto LABEL_32;
        }
        if ( (a3->PnPFlags & 0x4000001) == 0x4000001
          && (unsigned int)(a3->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
        {
          a1->Header.Type = BYTE1(a3->PnPCapabilities) & 1;
          goto LABEL_32;
        }
      }
      else
      {
        PnPFlags = a3->PnPFlags;
        if ( (PnPFlags & 0x4000001) == 0x4000001 && !a3->AoAc )
        {
          a1->Header.Type = (PnPFlags & 0x40) != 0;
          goto LABEL_32;
        }
      }
    }
    else if ( (a3->PnPFlags & 0x8001) == 1 && !a3->AoAc )
    {
      a1->Header.Type = (a3->PnPCapabilities & 8) == 0;
      goto LABEL_32;
    }
LABEL_76:
    v12 = -1073741808;
    goto LABEL_32;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    v12 = 0;
    goto LABEL_32;
  }
  if ( (Flags & 1) == 0 )
    goto LABEL_76;
  if ( (Flags & 0x10) != 0 )
  {
    LODWORD(v9) = v9 - 4;
    p_WakeOnPattern = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a1->WakeOnPattern;
  }
  else if ( (Flags & 4) != 0 || (Flags & 8) != 0 )
  {
    LODWORD(v9) = v9 - 2;
    p_WakeOnPattern = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a1->Header.Size;
    if ( (Flags & 4) != 0 )
      LODWORD(v9) = ((unsigned int)v9 >> 1) + 1;
  }
  else
  {
    p_WakeOnPattern = a1;
  }
  memset(&v43, 0, 0xF8uLL);
  *(_DWORD *)&v43.NdisReserved[16] |= 8u;
  v12 = 0;
  *(_QWORD *)&v43.NdisReserved[32] = &ndisIntReqWmi;
  v43.Header = (NDIS_OBJECT_HEADER)15466902;
  v43.DATA.QUERY_INFORMATION.Oid = v7->Oid;
  *(_QWORD *)&v43.RequestType = 2LL;
  v43.DATA.QUERY_INFORMATION.InformationBuffer = p_WakeOnPattern;
  v43.DATA.QUERY_INFORMATION.InformationBufferLength = v9;
  if ( v40 || (v30 = a7) == 0LL )
    v30 = a3;
  v31 = ndisQuerySetMiniportEx(v30, v40, &v43, 0, 0LL, 0LL);
  v33 = v31;
  if ( v31 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = 2;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v32,
        18,
        32,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        (char)a7,
        v31);
    }
    if ( (v7->Flags & 0x200) != 0 )
    {
      if ( (v33 & 0xC0010000) == 0xC0010000 )
        v33 = (unsigned __int16)v33 | 0xC0230000;
      goto LABEL_91;
    }
    if ( v33 == 259
      || v33 == -2147483643
      || (v34 = -1073741823, v33 == -1073741823)
      || v33 == -1073741670
      || v33 == -1073741637 )
    {
LABEL_91:
      v12 = v33;
      goto LABEL_32;
    }
    if ( v33 == -1073676266 )
    {
      v12 = -1073741789;
    }
    else if ( v33 == -1073676268 )
    {
      v12 = -1073741306;
    }
    else
    {
      if ( v33 == -1073676267 )
        v34 = -1073741811;
      v12 = v34;
    }
  }
  else
  {
    v35 = v7->Flags;
    if ( (v35 & 0x10) != 0 )
    {
      a1->Header = (NDIS_OBJECT_HEADER)((unsigned int)v9 / v7->Size);
    }
    else if ( (v35 & 8) != 0 )
    {
      *(_WORD *)&a1->Header.Type = v9;
    }
    else if ( (v35 & 4) != 0 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)p_WakeOnPattern);
      v12 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v12 >= 0 )
      {
        v36 = UnicodeString.Length;
        *(_WORD *)&a1->Header.Type = UnicodeString.Length;
        memmove(p_WakeOnPattern, UnicodeString.Buffer, v36);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
  }
LABEL_32:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x21u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a3,
      (char)a7,
      v12);
  return (unsigned int)v12;
}
