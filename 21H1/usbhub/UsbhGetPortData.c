/*
 * XREFs of UsbhGetPortData @ 0x1C0016CA0
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhQueryChange @ 0x1C00167EC (UsbhQueryChange.c)
 *     UsbhPCE_HardwareWake @ 0x1C0016910 (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C00169C4 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_Suspend @ 0x1C0016A98 (UsbhPCE_Suspend.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0018840 (UsbhPCE_QueueDriverReset.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C00298B4 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A7DC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002ABC4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002BAB8 (UsbhGetExtendedHubInformation.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002D410 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002D68C (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C002EB90 (UsbhDisablePortIndicators.c)
 *     UsbhEnablePortIndicators @ 0x1C002ED68 (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C002F010 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002F6C0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002F764 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002F830 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002F8C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C002FB30 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C002FCB0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C00302D0 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0033E18 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C00340A0 (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C00341E8 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00342BC (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C003439C (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C00344AC (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C0034580 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0034654 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00347F4 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C00349E0 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034AF8 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C0036CFC (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0036FAC (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x1C0037328 (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0039C2C (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C0039F00 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A450 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003A5DC (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003A78C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003AC9C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AEF8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C003BD90 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C003D000 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F208 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F948 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003FC88 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040574 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0042430 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0043C9C (UsbhResetNotifyDownstreamHub.c)
 *     UsbhSetSqmEnumerationData @ 0x1C0046B28 (UsbhSetSqmEnumerationData.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C0048D4C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048FE8 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C0049D20 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C0049F20 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C0049FA0 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004A020 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004B020 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004B0B0 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0058268 (UsbhResetPortData.c)
 *     UsbhSetPortData @ 0x1C0058304 (UsbhSetPortData.c)
 *     UsbhEtwLogPortInformation @ 0x1C005C7EC (UsbhEtwLogPortInformation.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_DWORD *)v4 = 1413771367;
        *(_QWORD *)(v4 + 16) = a2;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 > *(unsigned __int8 *)(v5 + 2938) )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 3056);
  if ( !v6 )
    return 0LL;
  v7 = a2;
  v8 = v6 + 2928LL * a2 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v9 = 1044672615;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v9 + 24) = v8;
  }
  return v8;
}
