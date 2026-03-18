/*
 * XREFs of UsbhException @ 0x1C004A608
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0001D70 (UsbhCompletePdoWakeIrps.c)
 *     UsbhBusSuspend_Action @ 0x1C00022A0 (UsbhBusSuspend_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C00071D0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C000BBF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     UsbhSshSuspendHub @ 0x1C000D970 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSshResumeUpstream @ 0x1C0013558 (UsbhSshResumeUpstream.c)
 *     UsbhSuspendPort @ 0x1C00138BC (UsbhSuspendPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00139C0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0014C0C (UsbhSyncSuspendPdoPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhQueryChange @ 0x1C00167EC (UsbhQueryChange.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001820C (UsbhPdoSetD0_Finish.c)
 *     UsbhCreateDevice @ 0x1C0019118 (UsbhCreateDevice.c)
 *     UsbhHubIsr @ 0x1C0019BF0 (UsbhHubIsr.c)
 *     UsbhResumeSuspendedPort @ 0x1C001BEB8 (UsbhResumeSuspendedPort.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     UsbhFdoColdStartPdo @ 0x1C001C580 (UsbhFdoColdStartPdo.c)
 *     UsbhConfigureUsbHub @ 0x1C00298F8 (UsbhConfigureUsbHub.c)
 *     UsbhFdoDeviceControl @ 0x1C002A170 (UsbhFdoDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A7DC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhGetDescriptor @ 0x1C002B590 (UsbhGetDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002BCB8 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002BE50 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002C0A0 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetStatus @ 0x1C002C860 (UsbhGetStatus.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C002D220 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetHubRemoteWake @ 0x1C002D554 (UsbhSetHubRemoteWake.c)
 *     UsbhSetPortPower @ 0x1C002D7DC (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C002F0A8 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1C002FF30 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C00302D0 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C00304E0 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0030F00 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhParseDescriptors @ 0x1C0031B0C (UsbhParseDescriptors.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C003272C (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOsContainerID @ 0x1C0032B54 (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034AF8 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C0036B2C (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C0037200 (UsbhDisablePort.c)
 *     UsbhFinishStart @ 0x1C0037328 (UsbhFinishStart.c)
 *     UsbhGetBillboardInfo @ 0x1C00378B0 (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformation @ 0x1C0037D08 (UsbhGetDeviceInformation.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0038550 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0038920 (UsbhPortResumeTimeout.c)
 *     UsbhQueryHubState @ 0x1C0038B7C (UsbhQueryHubState.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhSyncResumePort @ 0x1C0039F00 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003BC30 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C003BD90 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C003CBD8 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C003DF14 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E6C4 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003E9F8 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003EC70 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EF34 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F208 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F498 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F948 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003FC88 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FF9C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004028C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040574 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0040864 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040CF4 (UsbhIoctlValidateParameters.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0042980 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0042DB0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C0043AE0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C00496C0 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBusIfAddDevice @ 0x1C004B8A0 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x1C004C0C0 (UsbhGetBusInterface.c)
 *     UsbhHandleOvercurrent @ 0x1C004C954 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C004CB90 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CC80 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004CDC0 (UsbhPortConnect.c)
 *     UsbhPortResumeFailed @ 0x1C004D5F0 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C004DA50 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C004DDA0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004DFB0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004E570 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E668 (UsbhSetEnumerationFailed.c)
 *     UsbhGetLanguageIdString @ 0x1C0050D78 (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C0051210 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00513E0 (UsbhGetSerialNumber.c)
 *     UsbhCheckDeviceErrata @ 0x1C0051F34 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C0052290 (UsbhCheckHubErrata.c)
 *     UsbhValidateSerialNumberString @ 0x1C0053A08 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00554E0 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0055C3C (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055FD0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0056620 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057020 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C0001AE8 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x1C0017B0C (UsbhQueueWorkItemEx.c)
 *     UsbhReferenceListRemove @ 0x1C001B88C (UsbhReferenceListRemove.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhExceptionTrace @ 0x1C004A8FC (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004AC90 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004AD84 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C005C3DC (UsbhEtwLogHubException.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  _DWORD *v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r15
  int v19; // eax
  unsigned __int16 v20; // si
  unsigned int v21; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v23; // rbx
  char *v24; // rcx
  unsigned int v25; // ecx
  _OWORD *v26; // rdx
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int64 ExceptionDispatch; // [rsp+48h] [rbp-40h]
  unsigned int v33; // [rsp+D8h] [rbp+50h]

  v11 = a2;
  v14 = FdoExt(a1);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, a3);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, a3, a6, a7, v17, v16 + 1);
  v18 = 16LL;
  if ( a10 )
  {
    v19 = v14[640];
    if ( (v19 & 0x10) != 0 )
      return;
    v14[640] = v19 | 0x10;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (v14[640] & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v21 = v15 + 1;
    v33 = v21 + v20 + 600;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v33, 0x42554855u);
    v23 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v21 + v20 + 600);
      v23[1] = v33;
      if ( (int)UsbhReferenceListAdd(a1, (__int64)v23, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v23, 0);
        return;
      }
      *v23 = 1381516648;
      *((_QWORD *)v23 + 1) = a1;
      *((_WORD *)v23 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v23 + 5) = v23 + 150;
        memmove(v23 + 150, a4, v20);
      }
      v24 = (char *)v23 + v20 + 600;
      *((_QWORD *)v23 + 74) = v24;
      memmove(v24, a8, v21);
      v23[146] = a9;
      v23[6] = a7;
      v23[7] = a6;
      v23[4] = a3;
      *((_WORD *)v23 + 10) = a2;
      *((_QWORD *)v23 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v25 = v14[220];
        v26 = v23 + 18;
        do
        {
          v27 = v14[221] & v25;
          v25 = v27 + 1;
          v28 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v27);
          *v26 = *v28;
          v26 += 2;
          *(v26 - 1) = v28[1];
          --v18;
        }
        while ( v18 );
      }
      UsbhExceptionTrace(a1, v23, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, a2, v23);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1u, (int)UsbhExceptionWorker, (__int64)v23, a2, 0x49577865u, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v23);
        goto LABEL_23;
      }
    }
  }
}
