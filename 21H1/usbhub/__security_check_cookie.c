/*
 * XREFs of __security_check_cookie @ 0x1C001CF60
 * Callers:
 *     UsbhSyncPowerOnPorts @ 0x1C000BBF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0011530 (UsbhQueryBusRelations.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0012210 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C0014280 (UsbhDmTimerDpc.c)
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 *     UsbhCreateDevice @ 0x1C0019118 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     __GSHandlerCheckCommon @ 0x1C001CFEC (__GSHandlerCheckCommon.c)
 *     UsbhAcpiEnumChildren @ 0x1C0029498 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0029620 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C0029EB8 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C0029FEC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002AE10 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x1C002D7DC (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003246C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040CF4 (UsbhIoctlValidateParameters.c)
 *     DriverEntry @ 0x1C0041468 (DriverEntry.c)
 *     UsbhMakePdoName @ 0x1C004373C (UsbhMakePdoName.c)
 *     UsbhGetD3Policy @ 0x1C0044834 (UsbhGetD3Policy.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00466CC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0046CA0 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048A24 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C0049258 (UsbhGetPerformanceInfo.c)
 *     UsbhQuerySSstate @ 0x1C004C314 (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x1C004DDA0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004E390 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x1C0052440 (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C00553C0 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056E30 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00575A0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0057A60 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005A580 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005A640 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005A828 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C005A9D0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005ADEC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005B07C (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005B28C (UsbhPropagateUxdState.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005C07C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005C198 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005C2E8 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005C3DC (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005C500 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005C614 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogPortInformation @ 0x1C005C7EC (UsbhEtwLogPortInformation.c)
 *     MyRegQueryUlong @ 0x1C005DD9C (MyRegQueryUlong.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
