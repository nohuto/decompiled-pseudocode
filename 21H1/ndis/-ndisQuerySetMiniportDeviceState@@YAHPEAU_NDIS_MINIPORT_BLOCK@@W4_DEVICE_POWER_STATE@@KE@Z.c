/*
 * XREFs of ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0014FB8
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014CAC (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A578 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0jqxqqt_EtwWriteTransfer @ 0x1C0083928 (McTemplateK0jqxqqt_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZDLd @ 0x1C0083E68 (WPP_RECORDER_SF_qZDLd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C5C2C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _DEVICE_POWER_STATE a2,
        NDIS_OID a3,
        char a4)
{
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // r8d
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-E0h]
  enum _DEVICE_POWER_STATE v14; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_OID_REQUEST v15; // [rsp+60h] [rbp-A0h] BYREF

  v14 = a2;
  memset(&v15.Header.Revision, 0, 0xF7uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x34u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x35u,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        a1);
    return 0LL;
  }
  else
  {
    memset(&v15, 0, 0xF8uLL);
    *(_DWORD *)&v15.NdisReserved[16] |= 8u;
    *(_QWORD *)&v15.NdisReserved[32] = &ndisIntReqGeneric;
    v15.Header = (NDIS_OBJECT_HEADER)15466902;
    v15.DATA.QUERY_INFORMATION.Oid = a3;
    v15.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v15.PortNumber = 0;
    v15.RequestType = a4 != 0;
    v15.DATA.QUERY_INFORMATION.InformationBuffer = &v14;
    v9 = ndisQuerySetMiniportEx(a1, 0LL, &v15, 0, 0LL, 0LL);
    if ( v9 && v9 != -1073741637 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZDLd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          v10,
          v11,
          v13,
          (char)a1,
          (__int64)a1->pAdapterInstanceName,
          a3,
          a4,
          v9);
      if ( (byte_1C00E6081 & 8) != 0 )
        McTemplateK0jqxqqt_EtwWriteTransfer(
          v8,
          v7,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v9,
          a3,
          a4);
    }
    if ( a4 && v9 != -1073741637 && v9 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        55,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        (char)a1,
        v9);
    }
    return v9;
  }
}
