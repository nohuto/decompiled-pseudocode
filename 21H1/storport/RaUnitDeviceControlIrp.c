/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C000B8F8
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C000B850 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001AF0 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitStoragePowerIdle @ 0x1C00022C0 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C000234C (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00066E8 (RaUnitScsiMiniportIoctl.c)
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000BD50 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000BD94 (RaUnitAcquireRemoveLock.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C000C568 (RaIsDeviceDFxPoweredDown.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0011364 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0017ABC (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C0019260 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C00193A8 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C0028E64 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C002EDAC (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C002EDF0 (RaidAdapterStorageResetBusIoctl.c)
 *     WPP_SF_qqD @ 0x1C0032120 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0032180 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C0032F34 (RaInsertDFxQueue.c)
 *     RaUnitAttributeManagement @ 0x1C0045784 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C0046130 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0046240 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C00462B4 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0046328 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C00463D0 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0046634 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0046B80 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046E38 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C00483A8 (RaUnitStorageSetPropertyIoctl.c)
 *     RaidUnitSetLedState @ 0x1C004A6EC (RaidUnitSetLedState.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00711A0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0072068 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00720D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00730A0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0079E54 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0079FA0 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C007A06C (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageDumpNotification @ 0x1C007A170 (RaUnitStorageDumpNotification.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007A1EC (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C007A394 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(__int64 a1, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // r14d
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int QOSIoctl; // eax
  unsigned int inserted; // ebx
  unsigned int v13; // r8d
  __int64 v14; // r8
  _IO_STACK_LOCATION *v15; // rax
  int v16; // eax
  char v17; // r8
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( Irp->RequestorMode )
    {
      v18 = -1073741808;
    }
    else if ( CurrentStackLocation->Parameters.Read.Length )
    {
      LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (*(_BYTE *)(a1 + 448) & 4) == 0;
      v18 = 0;
      Irp->IoStatus.Information = 1LL;
    }
    else
    {
      Irp->IoStatus.Information = 0LL;
      v18 = -1073741789;
    }
    return RaidCompleteRequestEx(Irp, 0, v18);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v20);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C0068843 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v20,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C0068842 & 4) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)&v20,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a3) = 1;
  v9 = RaUnitAcquireRemoveLock(a1, Irp, a3);
  if ( v9 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    v18 = v9;
    return RaidCompleteRequestEx(Irp, 0, v18);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      27LL,
      &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids,
      a1,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1CC8 )
  {
    if ( LowPart <= 0x2D5644 )
    {
      switch ( LowPart )
      {
        case 0x2D5644u:
          QOSIoctl = RaUnitStorageDumpNotification(a1, Irp);
          goto LABEL_15;
        case 0x2D1CCCu:
          QOSIoctl = RaidUnitSetLedState(a1, Irp);
          goto LABEL_15;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(a1, Irp);
          goto LABEL_15;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(a1, Irp);
          goto LABEL_15;
        case 0x2D2828u:
        case 0x2D282Cu:
        case 0x2D2830u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitStreamsIoctl(a1, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D5000u:
          QOSIoctl = RaidAdapterStorageResetBusIoctl(*(_QWORD *)(a1 + 24), Irp);
          goto LABEL_15;
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(a1, Irp);
          goto LABEL_15;
        case 0x2D5020u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaidAdapterStorageDeviceResetIoctl(*(_QWORD *)(a1 + 24), Irp);
            goto LABEL_15;
          }
          break;
        default:
          goto LABEL_24;
      }
      goto LABEL_151;
    }
    switch ( LowPart )
    {
      case 0x2D9404u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(a1, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
      case 0x2D940Cu:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitStorageSetPropertyIoctl(a1, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
      case 0x2DD200u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitSetTemperatureThresholdIoctl(a1, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
      case 0x2DD3C0u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitProtocolCommandIoctl(a1, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
    }
    if ( LowPart != 3004036 )
    {
      switch ( LowPart )
      {
        case 0x2DDC04u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareDownloadIoctl(a1, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2DDC08u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareActivateIoctl(a1, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(a1, Irp);
          goto LABEL_15;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(a1, Irp);
          goto LABEL_15;
        default:
          goto LABEL_24;
      }
      goto LABEL_151;
    }
LABEL_138:
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 24);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v19 + 8), Irp);
      goto LABEL_15;
    }
    goto LABEL_151;
  }
  if ( LowPart == 2956488 )
  {
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitSmartDataIoctl(a1, Irp);
      goto LABEL_15;
    }
    goto LABEL_151;
  }
  if ( LowPart > 0x2D1400 )
  {
    if ( LowPart == 2954827 )
    {
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(a1, Irp);
      goto LABEL_15;
    }
    if ( LowPart != 2954880 )
    {
      switch ( LowPart )
      {
        case 0x2D1C00u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(a1, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D1C80u:
          v15 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Information = 0LL;
          if ( v15->Parameters.Create.Options < 0x10 )
            v16 = -1073741811;
          else
            v16 = RaUnitRegisterForIdleDetection((PVOID)a1);
          v13 = v16;
          goto LABEL_25;
        case 0x2D1C84u:
          QOSIoctl = RaUnitStorageGetIdlePowerUpReason(a1, Irp);
          goto LABEL_15;
        case 0x2D1C88u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitStoragePowerActive(a1, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D1C8Cu:
          QOSIoctl = RaUnitStoragePowerIdle(a1, Irp);
          goto LABEL_15;
        case 0x2D1C94u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitPowerCapIoctl(a1, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D1CA0u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(a1, Irp);
          goto LABEL_15;
        default:
          goto LABEL_24;
      }
      goto LABEL_151;
    }
    goto LABEL_138;
  }
  if ( LowPart != 2954240 )
  {
    if ( LowPart > 0x4D014 )
    {
      switch ( LowPart )
      {
        case 0x4D02Cu:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_151;
          }
          v17 = 0;
          break;
        case 0x4D030u:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_151;
          }
          v17 = 1;
          break;
        case 0x4D044u:
        case 0x4D048u:
          goto LABEL_96;
        default:
          goto LABEL_24;
      }
      QOSIoctl = RaUnitAtaPassThroughIoctl(a1, Irp, v17);
      goto LABEL_15;
    }
    switch ( LowPart )
    {
      case 0x4D014u:
        goto LABEL_96;
      case 0x41018u:
        QOSIoctl = RaUnitScsiGetAddressIoctl(a1, Irp);
        goto LABEL_15;
      case 0x41020u:
        QOSIoctl = RaUnitScsiGetDumpPointersIoctl(a1, Irp);
        goto LABEL_15;
      case 0x41024u:
        QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(a1, Irp);
        goto LABEL_15;
      case 0x4D004u:
LABEL_96:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitScsiPassThroughIoctl(a1, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
    }
    if ( LowPart != 315400 )
    {
LABEL_24:
      v13 = -1073741808;
LABEL_25:
      QOSIoctl = RaidCompleteRequestEx(Irp, 0, v13);
      goto LABEL_15;
    }
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitScsiMiniportIoctl(a1, Irp);
      goto LABEL_15;
    }
LABEL_151:
    inserted = RaInsertDFxQueue(v14, Irp);
    if ( !inserted )
      inserted = 259;
    goto LABEL_16;
  }
  QOSIoctl = RaUnitStorageQueryPropertyIoctl(a1, Irp);
LABEL_15:
  inserted = QOSIoctl;
LABEL_16:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids,
      a1,
      Irp,
      LowPart,
      inserted);
  }
  RaUnitReleaseRemoveLock(a1);
  return inserted;
}
