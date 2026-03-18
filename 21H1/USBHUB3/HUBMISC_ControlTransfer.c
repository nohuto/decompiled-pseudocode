/*
 * XREFs of HUBMISC_ControlTransfer @ 0x1C002F36C
 * Callers:
 *     HUBHTX_GetDescriptor @ 0x1C0002E90 (HUBHTX_GetDescriptor.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003254 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x1C0003EA4 (HUBHTX_GetPortStatusUsingControlTransfer.c)
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x1C0004000 (HUBHTX_AckPortChangeUsingControlTransfer.c)
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x1C000411C (HUBHTX_ResetPortUsingControlTransfer.c)
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1C0004254 (HUBHTX_DisablePortUsingControlTransfer.c)
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x1C0004380 (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1C00044BC (HUBHTX_Suspend30PortUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0005BB0 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0006034 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0006480 (HUBHTX_ClearTTBuffer.c)
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1C00067CC (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x1C00068FC (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0008780 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0009090 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C0009570 (HUBHSM_SettingHubDepth.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000CF7C (HUBFDO_GetPortStatusForDebugging.c)
 *     HUBPSM20_InitiatingResume @ 0x1C00109A0 (HUBPSM20_InitiatingResume.c)
 *     HUBPSM20_Suspending @ 0x1C0011260 (HUBPSM20_Suspending.c)
 *     HUBPSM30_InitiatingResume @ 0x1C00119D0 (HUBPSM30_InitiatingResume.c)
 *     HUBPSM30_InitiatingWarmResetPort @ 0x1C0011B10 (HUBPSM30_InitiatingWarmResetPort.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C0012030 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C0012190 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPSM30_DisablingRemoteWakeOnPort @ 0x1C0012700 (HUBPSM30_DisablingRemoteWakeOnPort.c)
 *     HUBPSM30_EnablingRemoteWakeOnPort @ 0x1C0012840 (HUBPSM30_EnablingRemoteWakeOnPort.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x1C0020120 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x1C0020200 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C00202E0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C0021270 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C0021970 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_EnablingLTM @ 0x1C00223F0 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C0022500 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C0022880 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C00229B0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C0022A90 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C0022B70 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C0022DE0 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0027774 (HUBDTX_GetMsOsFeatureDescriptor.c)
 *     HUBDTX_GetDescriptor @ 0x1C0027800 (HUBDTX_GetDescriptor.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C0027A94 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0027EF8 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0028A24 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0028B38 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C00297EC (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C002A3A4 (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002A620 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     FWUPDATE_SetMMIO @ 0x1C003E770 (FWUPDATE_SetMMIO.c)
 *     FWUPDATE_GetMMIO @ 0x1C003E844 (FWUPDATE_GetMMIO.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBMISC_ControlTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        char a9)
{
  _QWORD *v9; // rbx
  int v10; // esi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-71h]
  _DWORD v21[3]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+3Ch] [rbp-5Dh]
  int v23; // [rsp+44h] [rbp-55h]
  _QWORD v24[9]; // [rsp+48h] [rbp-51h] BYREF

  v9 = a4 + 3;
  v10 = 0;
  a4[4] = a2;
  *((_DWORD *)a4 + 6) = 3276936;
  v14 = 8;
  *((_DWORD *)a4 + 14) = 8;
  if ( a8 )
  {
    v14 = 10;
    *((_DWORD *)a4 + 14) = 10;
  }
  if ( *((char *)a4 + 152) < 0 )
  {
    v14 |= 1u;
    *((_DWORD *)a4 + 14) = v14;
  }
  if ( a9 )
    *((_DWORD *)a4 + 14) = v14 | 0x10;
  a4[9] = 0LL;
  *((_DWORD *)a4 + 15) = a7;
  a4[8] = a6;
  *((_DWORD *)a4 + 20) = 5000;
  *((_DWORD *)a4 + 10) = *((_DWORD *)a4 + 40);
  memset(v24, 0, sizeof(v24));
  v15 = *a4;
  LOBYTE(v24[0]) = 15;
  LODWORD(v24[3]) = 2228227;
  v24[1] = v9;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v15,
    v24);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *a4,
    a5,
    a3);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *a4,
          *(_QWORD *)(a1 + 32),
          0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x3Au, (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *a4);
    if ( v10 < 0 )
    {
      v22 = 0LL;
      v23 = 0;
      v21[1] = 0;
      v21[2] = 0;
      v16 = *a4;
      v21[0] = 24;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
              WdfDriverGlobals,
              v16,
              v21);
      if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C00661C0);
        v20 = v17;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v18 + 64),
          2u,
          2u,
          0x3Bu,
          (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
          v20);
      }
    }
  }
  return (unsigned int)v10;
}
