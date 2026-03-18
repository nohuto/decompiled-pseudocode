/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0009690
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoReturnPortStatus @ 0x1C00099C0 (UsbhFdoReturnPortStatus.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhWait @ 0x1C001853C (UsbhWait.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002A3CC (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A530 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002A5E8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A7DC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C002AA94 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002ABC4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C002FF30 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C0030090 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C00300F4 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C00301E8 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C00302D0 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C00304E0 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C00308D0 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0030934 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00309F4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0030C08 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x1C0030CB0 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0030D50 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0030E40 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0030F00 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003D218 (UsbhSetPdo_AllowIo.c)
 *     USBHUB_TriggerCallBacks @ 0x1C00417F0 (USBHUB_TriggerCallBacks.c)
 *     UsbhIdleIrp_Event @ 0x1C0058A58 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  char *PoolWithTag; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ebp
  struct _DEVICE_OBJECT *v17; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v19; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rbp
  unsigned int v23; // r15d
  _QWORD *v24; // rbx
  KIRQL v25; // r12
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int Status; // ebx
  int v45; // eax
  KIRQL v46; // [rsp+70h] [rbp+8h]
  int v47; // [rsp+78h] [rbp+10h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
LABEL_176:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    goto LABEL_175;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 100LL);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v29, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        *(_QWORD *)(v5 + 2784) = 0LL;
        *(_BYTE *)(v5 + 2741) = 0;
        return 0LL;
      }
      if ( *(_DWORD *)(v5 + 784) != 2 )
        goto LABEL_96;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
LABEL_56:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          3,
          12,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 1184));
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903944, 0, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2792) = BugCheckParameter4;
      goto LABEL_56;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          1,
          13,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v5 + 1432) |= 0x80000u;
      return 0LL;
    case 0x220013u:
      v47 = 1232023605;
      goto LABEL_9;
    case 0x220003u:
      v47 = 1232023604;
      goto LABEL_9;
  }
  if ( LowPart <= 0x220424 )
  {
    if ( LowPart == 2229284 )
    {
      v47 = 1232023602;
      goto LABEL_9;
    }
    if ( LowPart > 0x22001F )
    {
      switch ( LowPart )
      {
        case 0x220020u:
          v47 = 1232023651;
          goto LABEL_9;
        case 0x220027u:
          v47 = 1232023653;
          goto LABEL_9;
        case 0x22002Bu:
          v47 = 1232023654;
          goto LABEL_9;
        case 0x220420u:
          v47 = 1232023603;
          goto LABEL_9;
      }
      goto LABEL_101;
    }
    if ( LowPart == 2228255 )
    {
      v47 = 1232023650;
      goto LABEL_9;
    }
    if ( LowPart != 2228231 )
    {
      switch ( LowPart )
      {
        case 0x22000Fu:
          v47 = 1232023601;
          goto LABEL_9;
        case 0x220017u:
          v47 = 1232023649;
          goto LABEL_9;
        case 0x22001Bu:
          v47 = 1232023600;
          goto LABEL_9;
      }
LABEL_101:
      v47 = LowPart;
      goto LABEL_9;
    }
    goto LABEL_104;
  }
  if ( LowPart <= 0x22044F )
  {
    switch ( LowPart )
    {
      case 0x22044Fu:
        v47 = 1232023856;
        goto LABEL_9;
      case 0x22042Cu:
        v47 = 1232023652;
        goto LABEL_9;
      case 0x220433u:
        v47 = 1232023607;
        goto LABEL_9;
      case 0x220437u:
        v47 = 1232023608;
        goto LABEL_9;
      case 0x22043Bu:
        v47 = 1232023606;
        goto LABEL_9;
    }
    goto LABEL_101;
  }
LABEL_96:
  switch ( LowPart )
  {
    case 0x220FB3u:
LABEL_104:
      v47 = 1232023609;
      break;
    case 0x491404u:
      v47 = 1232023857;
      break;
    case 0x491408u:
      v47 = 1232023858;
      break;
    case 0x49140Fu:
      v47 = 1232023859;
      break;
    default:
      goto LABEL_101;
  }
LABEL_9:
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    goto LABEL_175;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v46 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    v15 = -1073741810;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      v11 = v7 + 1224;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_DWORD *)PoolWithTag + 9) = 0;
      *((_QWORD *)PoolWithTag + 3) = BugCheckParameter4;
      *(_DWORD *)PoolWithTag = 1330201673;
      *((_DWORD *)PoolWithTag + 8) = v47;
      v12 = PoolWithTag + 8;
      v13 = *(_QWORD **)(v11 + 8);
      if ( *v13 != v11 )
        goto LABEL_42;
      *v12 = v11;
      v12[1] = v13;
      *v13 = v12;
      *(_QWORD *)(v11 + 8) = v12;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v46);
    v15 = 0;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 )
  {
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = v15;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v15;
  }
  if ( LowPart == 2228243 )
    return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
  if ( LowPart != 2228227 )
  {
    if ( LowPart > 0x22042C )
    {
      if ( LowPart <= 0x22044F )
      {
        if ( LowPart == 2229327 )
          return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v37 = LowPart - 2229299;
        if ( v37 )
        {
          v38 = v37 - 4;
          if ( v38 )
          {
            v39 = v38 - 4;
            if ( !v39 )
              return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
            v40 = v39 - 4;
            if ( !v40 )
              return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
            if ( v40 == 4 )
              return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
            goto LABEL_153;
          }
          LOBYTE(v14) = 1;
        }
        else
        {
          v14 = 0LL;
        }
        return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, v14);
      }
      v41 = LowPart - 2232243;
      if ( v41 )
      {
        v42 = v41 - 2557009;
        if ( !v42 )
          return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v43 = v42 - 4;
        if ( !v43 )
          return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v43 == 7 )
          return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
LABEL_153:
        Status = BugCheckParameter4->IoStatus.Status;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return Status;
      }
    }
    else
    {
      if ( LowPart == 2229292 )
      {
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return 3221225659LL;
      }
      if ( LowPart > 0x220020 )
      {
        v34 = LowPart - 2228263;
        if ( !v34 )
          return UsbhFdoSubmitPdoIdleNotification(
                   *(_QWORD *)(v5 + 1184),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        v35 = v34 - 4;
        if ( !v35 )
          return UsbhFdoRecordFailure(
                   *(_QWORD *)(v5 + 1184),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        v36 = v35 - 1013;
        if ( !v36 )
          return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v36 == 4 )
          return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_153;
      }
      if ( LowPart == 2228256 )
        return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      v30 = LowPart - 2228231;
      if ( v30 )
      {
        v31 = v30 - 8;
        if ( !v31 )
          return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v32 = v31 - 8;
        if ( v32 )
        {
          v33 = v32 - 4;
          if ( !v33 )
            return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          if ( v33 == 4 )
            return UsbhFdoCyclePdoPort(
                     *(_QWORD *)(v5 + 1184),
                     (ULONG_PTR)BugCheckParameter3,
                     (ULONG_PTR)BugCheckParameter4);
          goto LABEL_153;
        }
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return 0LL;
      }
    }
    return UsbhFdoResetPdoPort(
             *(PDEVICE_OBJECT *)(v5 + 1184),
             (ULONG_PTR)BugCheckParameter3,
             (ULONG_PTR)BugCheckParameter4);
  }
  v17 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
  if ( !v17 )
    goto LABEL_176;
  DeviceExtension = (PDEVICE_OBJECT *)v17->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), v17->DeviceExtension);
  v19 = BugCheckParameter3[8];
  if ( !v19 )
LABEL_175:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v19 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v19);
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityContext->AccessState = *(_ACCESS_STATE **)(v19 + 1160);
  switch ( WORD1(SecurityContext->SecurityQos) )
  {
    case 0:
      return (unsigned int)UsbhFdoSelectConfigurationPdo(
                             v17,
                             (ULONG_PTR)BugCheckParameter3,
                             (ULONG_PTR)BugCheckParameter4);
    case 1:
      return (unsigned int)UsbhFdoSelectInterfacePdo(v17, BugCheckParameter3, BugCheckParameter4);
    case 0x13:
      if ( (*(_DWORD *)(v19 + 1432) & 0x80000) == 0 )
        goto LABEL_26;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            1,
            19,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            *(_QWORD *)(v19 + 840));
      }
      v23 = -1073741637;
      BugCheckParameter4->IoStatus.Status = -1073741637;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return v23;
    case 0x1E:
    case 0x30:
    case 0x31:
      return (unsigned int)UsbhFdoValidateConnectionPdo(v17, BugCheckParameter3, BugCheckParameter4);
    case 0x2A:
      return (unsigned int)UsbhFdoGetMsDescriptorPdo(v17, BugCheckParameter3, BugCheckParameter4);
    default:
LABEL_26:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      v21 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
      v22 = BugCheckParameter3[8];
      v23 = v21;
      if ( !v22 )
        goto LABEL_175;
      if ( *(_DWORD *)v22 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
      v24 = (_QWORD *)(v22 + 1224);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 1216));
      v26 = *(_QWORD **)(v22 + 1224);
      if ( v26 == (_QWORD *)(v22 + 1224) || !v26 )
        goto LABEL_170;
      break;
  }
  while ( 1 )
  {
    v27 = (_QWORD *)*v26;
    if ( (IRP *)v26[2] == BugCheckParameter4 )
      break;
    v26 = (_QWORD *)*v26;
    if ( v27 == v24 )
    {
LABEL_170:
      v45 = *(_DWORD *)(v22 + 1264);
      if ( !v45 )
      {
        USBHUB_TriggerCallBacks(BugCheckParameter3);
        KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      }
      *(_DWORD *)(v22 + 1264) = v45 - 1;
      goto LABEL_38;
    }
  }
  if ( (_QWORD *)v27[1] != v26 || (v28 = (_QWORD *)v26[1], (_QWORD *)*v28 != v26) )
LABEL_42:
    __fastfail(3u);
  *v28 = v27;
  v27[1] = v28;
  ExFreePoolWithTag(v26 - 1, 0);
LABEL_38:
  if ( (_QWORD *)*v24 != v24 || *(_DWORD *)(v22 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 1216), v25);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 1216), v25);
    KeSetEvent((PRKEVENT)(v22 + 1240), 0, 0);
  }
  return v23;
}
