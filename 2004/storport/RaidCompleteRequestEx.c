/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0009F40
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C00023B0 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C000243C (RaUnitStoragePowerActive.c)
 *     RaUnitStartIo @ 0x1C0005020 (RaUnitStartIo.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0006BA8 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C00083C0 (RaUnitPnpIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 *     RaUnitAsyncError @ 0x1C000C438 (RaUnitAsyncError.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000FDF4 (RaidHandleCreateCloseIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00109DC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0010C68 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010D38 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0010E1C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010FA8 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00118F8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0012D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00131D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0013604 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0013B9C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0013D40 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00140C0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0014250 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0014300 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0014398 (RaUnitQuiesceDeviceSrb.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPnpIrp @ 0x1C0015924 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015AC4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001992C (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C001B0D0 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001B250 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C001B964 (RaidCompleteWmiIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001BA3C (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001BADC (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001BB78 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001BD30 (RaUnitClaimDeviceSrb.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0029D9C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0029E2C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002A7BC (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002BEB0 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002BFA8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C160 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002C4B4 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002C664 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002C950 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002CB10 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterRpmbRequest @ 0x1C002D69C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C002D984 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002D9DC (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002DA58 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C002E7D8 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C002E8B4 (RaidAdapterSetLedState.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002EF6C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002F2B0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C002F364 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C002F3A8 (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C002F3EC (RaidAdapterStorageSetPropertyIoctl.c)
 *     RaidPnPAsyncStartComplete @ 0x1C00317B0 (RaidPnPAsyncStartComplete.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C0031800 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C00323B0 (StorASyncScsiPassThroughCompletion.c)
 *     RaProcessDFxPendingIrp @ 0x1C00335D0 (RaProcessDFxPendingIrp.c)
 *     StorExtCompleteServiceIrp @ 0x1C0037A70 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C003A338 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C0043BA4 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0045E94 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0046640 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C00466CC (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C0046840 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0046950 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C00469C4 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0046A38 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0046AE0 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0046BAC (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C0046D44 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0047290 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047548 (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0047DE8 (RaUnitStartResetIo.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00482C0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C0048424 (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00484AC (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00485FC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00487C0 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0048960 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C0048AB8 (RaUnitStorageSetPropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00495B0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0049DB0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetLedState @ 0x1C004ADFC (RaidUnitSetLedState.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004AEB4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C0071008 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00710A8 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C00711D4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C00714A8 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00719C0 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071A28 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0071F78 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0071FE0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072C94 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C0073CBC (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0073D8C (RaUnitQueryDeviceTextIrp.c)
 *     RaWmiDispatchIrp @ 0x1C00741A4 (RaWmiDispatchIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0074760 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0074914 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0074AA4 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0074B7C (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0074C10 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076D18 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterPassThrough @ 0x1C00776B8 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0077B5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C0077C28 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0079CC0 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0079CF0 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0079D3C (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0079D74 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C0079E94 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0079EC0 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0079F8C (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007A10C (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C007A2B4 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitUnknownSrb @ 0x1C007A32C (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001B86C (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0029448 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x1C00295E0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1C00296B8 (McTemplateK0pqd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // edx
  int v8; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _DWORD *Information; // rbp
  char v13; // bp
  unsigned __int8 v14; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  char Flags; // r11
  char LowPart_high; // r12
  char SecurityQos; // r15
  unsigned int v19; // eax
  char *SrbScsiData; // rax
  char v21; // r9
  _ACCESS_STATE *AccessState; // rdx
  unsigned __int8 v23; // r8
  unsigned int v24; // ecx
  char v25; // r14
  char v26; // r9
  unsigned __int8 *v27; // rcx
  unsigned __int8 *p_SecurityEvaluated; // rax
  unsigned int v29; // ecx
  __int64 v30; // rax
  bool v31; // cc
  char *v32; // r8
  char v33; // al
  int v34; // ecx
  char v35; // [rsp+60h] [rbp-68h] BYREF
  char v36[3]; // [rsp+61h] [rbp-67h] BYREF
  int v37; // [rsp+64h] [rbp-64h]
  unsigned int FullCreateOptions; // [rsp+68h] [rbp-60h]
  _ACCESS_STATE *v39; // [rsp+70h] [rbp-58h] BYREF
  __int128 v40; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v40 = 0LL;
  IoGetActivityIdIrp(Irp, &v40);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 15 )
  {
    if ( (byte_1C0068842 & 1) != 0 )
    {
      v13 = 0;
      LOBYTE(v8) = 0;
      v14 = 0;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Flags = 0;
      LowPart_high = 0;
      SecurityQos = 0;
      v39 = 0LL;
      v35 = 0;
      v19 = BYTE2(SecurityContext->SecurityQos);
      v36[0] = 0;
      v37 = v8;
      if ( (_BYTE)v19 == 40 )
      {
        FullCreateOptions = SecurityContext->FullCreateOptions;
        SrbScsiData = (char *)GetSrbScsiData(
                                (_DWORD)SecurityContext,
                                0,
                                0,
                                (unsigned int)&v35,
                                (__int64)&v39,
                                (__int64)v36);
        v21 = v35;
        Flags = 0;
        AccessState = v39;
        v23 = v36[0];
        LOBYTE(v8) = v37;
        v24 = FullCreateOptions;
        if ( SrbScsiData )
          SecurityQos = *SrbScsiData;
      }
      else
      {
        v21 = BYTE4(SecurityContext->SecurityQos);
        v24 = v19;
        SecurityQos = (char)SecurityContext[3].SecurityQos;
        AccessState = SecurityContext[1].AccessState;
        v23 = BYTE3(SecurityContext->AccessState);
        v35 = v21;
      }
      if ( !v24 && ((SecurityQos - 8) & 0x5D) == 0 )
      {
        v25 = BYTE3(SecurityContext->SecurityQos);
        if ( v25 == 1 || !AccessState || !v23 )
        {
LABEL_40:
          if ( (byte_1C0068842 & 1) != 0 )
          {
            if ( (_BYTE)v8 )
            {
              v13 = LowPart_high;
              v33 = Flags;
              v34 = v14;
            }
            else
            {
              v33 = 0;
              v34 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v34,
              (_DWORD)AccessState,
              (unsigned int)&v40,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v25,
              v21,
              v34,
              v33,
              v13,
              (char)Irp);
          }
          goto LABEL_4;
        }
        v26 = 0;
        v27 = (unsigned __int8 *)AccessState + v23;
        p_SecurityEvaluated = &AccessState->SecurityEvaluated;
        if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
        {
          if ( p_SecurityEvaluated > v27 )
            goto LABEL_38;
          Flags = BYTE2(AccessState->OperationID.LowPart);
          v14 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
        }
        else
        {
          if ( p_SecurityEvaluated > v27 )
            goto LABEL_38;
          v29 = HIBYTE(AccessState->OperationID.HighPart) + 8;
          v30 = v23;
          v14 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
          v31 = v29 <= v23;
          v32 = (char *)&AccessState->Flags + 1;
          if ( v31 )
            v30 = v29;
          if ( v32 > (char *)AccessState + v30 )
            Flags = 0;
          else
            Flags = AccessState->Flags;
          if ( (char *)&AccessState->Flags + 2 <= (char *)AccessState + (unsigned int)v30 )
            LowPart_high = *v32;
        }
        v26 = 1;
LABEL_38:
        v3 = v26 == 0;
        v21 = v35;
        if ( !v3 )
          LOBYTE(v8) = 1;
        goto LABEL_40;
      }
    }
  }
  else if ( MajorFunction == 14 )
  {
    if ( (byte_1C0068842 & 0x10) != 0 )
      McTemplateK0pd_EtwWriteTransfer(
        CurrentStackLocation,
        &EventNonReadWriteRequestComplete,
        &v40,
        Irp,
        Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C0068842 & 0x40) != 0 )
      {
        Information = (_DWORD *)Irp->IoStatus.Information;
        if ( Information )
          LODWORD(Information) = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)CurrentStackLocation,
          v7,
          (unsigned int)&v40,
          (_DWORD)Irp,
          (char)Information,
          Irp->IoStatus.Status);
      }
    }
    else if ( (byte_1C0068842 & 0x20) != 0 )
    {
      McTemplateK0pd_EtwWriteTransfer(CurrentStackLocation, &EventPnpRequestComplete, &v40, Irp, Irp->IoStatus.Status);
    }
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
