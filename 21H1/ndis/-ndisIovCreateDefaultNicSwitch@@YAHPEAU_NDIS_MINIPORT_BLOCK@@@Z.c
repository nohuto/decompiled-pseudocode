/*
 * XREFs of ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032C34
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00276B0 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028340 (NdisCloseConfiguration.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033270 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00773D4 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0077AF0 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0077F04 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117DE4 (-ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int SwitchConfiguration; // ebx
  PVOID v3; // rsi
  PVOID v4; // r14
  char v5; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  NDIS_STATUS v10; // eax
  unsigned int MaxNumVFs; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v12; // r9
  __int64 v13; // r9
  int v14; // r8d
  int Status[2]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID SubKeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v19; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v20; // [rsp+70h] [rbp-98h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT v21; // [rsp+78h] [rbp-90h] BYREF
  struct _NDIS_OID_REQUEST v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+198h] [rbp+90h] BYREF
  int v24; // [rsp+1A0h] [rbp+98h]
  _DWORD v25[140]; // [rsp+1A8h] [rbp+A0h] BYREF

  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  SwitchConfiguration = 0;
  memset(&v21.Header.Revision, 0, 23);
  v3 = 0LL;
  v4 = 0LL;
  memset(v25, 0, 0x228uLL);
  memset(&v22, 0, 0xF8uLL);
  v20 = 0LL;
  v23 = 0LL;
  v5 = 0;
  v24 = 0;
  v19 = 0LL;
  P = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0xAu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1);
  if ( !ndisIovNicSwitchWithoutIovSupported(a1) )
  {
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
      {
        NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
        if ( NicSwitchCurrentCapabilities
          && NicSwitchCurrentCapabilities->Header.Revision >= 2u
          && NicSwitchCurrentCapabilities->Header.Size >= 0x74u )
        {
          if ( !NicSwitchCurrentCapabilities->MaxNumSwitches )
          {
            SwitchConfiguration = -1073741637;
            goto LABEL_5;
          }
          SwitchConfiguration = ndisIovInitializeNicSwitch(
                                  v6,
                                  (struct _NDIS_NIC_SWITCH_PARAMETERS *)v25,
                                  (struct _NDIS_NIC_SWITCH_BLOCK **)&v20,
                                  (struct _NDIS_PF_BLOCK **)&v19,
                                  (struct _NDIS_VPORT_BLOCK **)&P);
          if ( SwitchConfiguration )
            goto LABEL_29;
          v21.Header = (_NDIS_OBJECT_HEADER)1573289;
          v21.NdisHandle = a1;
          v21.Flags = 0;
          v10 = NdisOpenConfigurationEx(&v21, &ConfigurationHandle);
          v3 = ConfigurationHandle;
          SwitchConfiguration = v10;
          Status[0] = v10;
          if ( v10 )
            goto LABEL_29;
          NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
          SwitchConfiguration = Status[0];
          v4 = SubKeyHandle;
          if ( Status[0] )
            goto LABEL_29;
          v25[0] = 36176512;
          SwitchConfiguration = ndisIovReadSwitchConfiguration(SubKeyHandle, (struct _NDIS_NIC_SWITCH_PARAMETERS *)v25);
          if ( SwitchConfiguration )
            goto LABEL_29;
          if ( v25[2] != 1 || v25[3] )
          {
            SwitchConfiguration = -1073676267;
            goto LABEL_29;
          }
          MaxNumVFs = v25[133];
          v12 = a1->NicSwitchCurrentCapabilities;
          if ( v25[133] > v12->MaxNumVFs )
            MaxNumVFs = v12->MaxNumVFs;
          v25[133] = MaxNumVFs;
          v25[134] = v12->MaxNumVPorts;
          v25[135] = v12->NdisReserved7;
          v25[137] = ndisIovGetNumberOfQueuesForDefaultVPort(a1);
          v25[136] = *(_DWORD *)(v13 + 52) - v14;
          memset(&v22, 0, 0xF8uLL);
          *(_DWORD *)&v22.NdisReserved[16] |= 8u;
          *(_QWORD *)&v22.NdisReserved[32] = &ndisIntReqGeneric;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = v25;
          v22.Header = (NDIS_OBJECT_HEADER)15466902;
          *(_QWORD *)&v22.RequestType = 12LL;
          v22.DATA.QUERY_INFORMATION.Oid = 66103;
          *(_QWORD *)&v22.DATA.METHOD_INFORMATION.OutputBufferLength = 552LL;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 552;
          SwitchConfiguration = ndisQuerySetMiniportEx(a1, 0LL, &v22, 0, 0LL, 0LL);
          if ( SwitchConfiguration )
            goto LABEL_29;
          v5 = 1;
          SwitchConfiguration = ndisIovFinalizeNicSwitch(
                                  a1,
                                  (struct _NDIS_NIC_SWITCH_PARAMETERS *)v25,
                                  (struct _NDIS_NIC_SWITCH_BLOCK *)v20,
                                  (struct _NDIS_PF_BLOCK *)v19,
                                  (struct _NDIS_VPORT_BLOCK *)P);
        }
        else
        {
          SwitchConfiguration = -1073741637;
        }
        if ( !SwitchConfiguration )
        {
LABEL_35:
          if ( v4 )
            NdisCloseConfiguration(v4);
          if ( v3 )
            NdisCloseConfiguration(v3);
          goto LABEL_5;
        }
        if ( v5 )
        {
          LODWORD(v23) = 786816;
          v24 = 0;
          memset(&v22, 0, 0xF8uLL);
          *(_DWORD *)&v22.NdisReserved[16] |= 8u;
          *(_QWORD *)&v22.NdisReserved[32] = &ndisIntReqGeneric;
          v22.DATA.QUERY_INFORMATION.InformationBuffer = &v23;
          v22.Header = (NDIS_OBJECT_HEADER)15466902;
          v22.DATA.QUERY_INFORMATION.InformationBufferLength = 12;
          v22.DATA.QUERY_INFORMATION.Oid = 66105;
          *(_QWORD *)&v22.RequestType = 1LL;
          ndisQuerySetMiniportEx(a1, 0LL, &v22, 0, 0LL, 0LL);
        }
LABEL_29:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        goto LABEL_35;
      }
    }
  }
LABEL_5:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0xBu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)a1,
      SwitchConfiguration);
  return SwitchConfiguration;
}
