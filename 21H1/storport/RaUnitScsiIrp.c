/*
 * XREFs of RaUnitScsiIrp @ 0x1C000A2D0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C000A230 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00082CC (RaidRestartIoQueue.c)
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaidUnitSubmitRequest @ 0x1C000A16C (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C000A730 (RaidStartIoPacket.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000BD50 (RaUnitReleaseRemoveLock.c)
 *     DbgLogRequest @ 0x1C000E728 (DbgLogRequest.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0012528 (RaUnitQuiesceDeviceSrb.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0019E88 (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C00320D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0032120 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0043DC4 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C0045DC8 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C0045FBC (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C004649C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C0046520 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C0048488 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004A7A4 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C004DD14 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C007A40C (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v3; // ebx
  bool v6; // r12
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  _IO_SECURITY_CONTEXT *v8; // r13
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int v12; // ecx
  unsigned int FullCreateOptions; // r14d
  int SecurityQos; // r15d
  PDEVICE_OBJECT v15; // rcx
  _IO_SECURITY_CONTEXT *v16; // r9
  unsigned int AccessState; // r10d
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned __int64 DesiredAccess; // r8
  int v21; // r14d
  __int64 v22; // rdx
  _IO_STACK_LOCATION *v23; // rax
  _IO_SECURITY_CONTEXT *v24; // rcx
  unsigned __int64 v25; // r14
  unsigned int AccessState_high; // edi
  unsigned int v27; // edx
  __int64 v28; // r8
  unsigned int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  signed int v36; // r14d
  _IO_STACK_LOCATION *v37; // rcx
  int v38; // r14d
  char v39; // al
  unsigned int v40; // ebx
  __int128 v41; // [rsp+48h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v41 = 0LL;
  v6 = 1;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = 0LL;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, 0xC000000D);
  }
  v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v10 = *(_DWORD *)(v9 + *(_QWORD *)(a1 + 32));
  if ( (v10 & 1) != 0 )
  {
LABEL_73:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + *(_QWORD *)(a1 + 32)), v10 + 2, v10);
      if ( v11 == v10 )
        break;
      if ( (v10 & 1) != 0 )
        goto LABEL_73;
    }
  }
  v12 = *(_DWORD *)(a1 + 48);
  if ( v12 < 5 )
    goto LABEL_5;
  v34 = v12 - 5;
  if ( !v34 )
  {
    v37 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v37->MajorFunction == 27 || v37->MajorFunction == 14 && v37->Parameters.Read.ByteOffset.LowPart == 266276 )
      goto LABEL_5;
LABEL_82:
    v36 = -1073741738;
LABEL_83:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v36);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v36);
  }
  v35 = (unsigned int)(v34 - 1);
  if ( !(_DWORD)v35 )
    goto LABEL_82;
  if ( (_DWORD)v35 == 1 )
  {
    v36 = RaUnitCheckRemoveStateForDisabled(v35, a2);
    if ( v36 < 0 )
      goto LABEL_83;
  }
LABEL_5:
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 410LL) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC00000BB);
    }
    v8 = SecurityContext;
    FullCreateOptions = SecurityContext->FullCreateOptions;
    SecurityQos = (int)SecurityContext[1].SecurityQos;
    if ( LODWORD(SecurityContext->AccessState) != 1397899864
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC000000D);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v15 = *(PDEVICE_OBJECT *)(a1 + 24), (v32 = *(_QWORD *)&v15[15].Flags) != 0)
      && (*(_DWORD *)(v32 + 20) & 1) == 0
      || (BYTE4(v15->Queue.Wcb.DeviceRoutine) & 2) != 0
      || HIDWORD(v15->SecurityDescriptor) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2, 0, 0xC0000001);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 395LL) )
      {
        v30 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v30 = RaidCompleteRequestEx(a2, 0, 0);
      }
      v31 = v30;
      v6 = v30 != 259;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v31 = RaUnitClaimDeviceSrb(a1, a2);
          break;
        case 2u:
        case 7u:
        case 9u:
          v31 = RaidUnitSubmitRequest(a1, (__int64)a2);
          v6 = 0;
          break;
        case 4u:
          *(_BYTE *)(a1 + 692) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v31 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 6u:
          v31 = RaUnitReleaseDeviceSrb(a1, a2);
          break;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v31 = RaidUnitSubmitResetRequest(a1, a2);
          break;
        case 0x12u:
          v31 = RaUnitResetBusSrb(a1, a2);
          break;
        case 0x15u:
          v31 = RaUnitFlushQueueSrb(a1, a2);
          break;
        case 0x17u:
          v31 = RaidCompleteRequestEx(a2, 0, 0xC0000010);
          break;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 1;
          v31 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 693) = 0;
          RaidRestartIoQueue(a1);
          v31 = RaidCompleteRequestEx(a2, 0, 0);
          break;
        case 0x1Au:
          v31 = RaUnitQuiesceDeviceSrb(a1, a2);
          if ( v31 == 259 )
            v6 = 0;
          break;
        default:
          v31 = RaUnitUnknownSrb(v15, a2);
          break;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        22LL,
        &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids,
        a1,
        a2,
        v31);
    }
    if ( v6 )
      RaUnitReleaseRemoveLock(a1);
    return v31;
  }
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    v16 = SecurityContext + 3;
    goto LABEL_24;
  }
  v16 = 0LL;
  if ( BYTE2(v8->SecurityQos) != 40 )
    goto LABEL_24;
  if ( v8->FullCreateOptions )
    goto LABEL_24;
  AccessState = (unsigned int)v8[2].AccessState;
  v18 = 0;
  if ( !AccessState )
    goto LABEL_24;
  while ( 1 )
  {
    v19 = *((unsigned int *)&v8[5].SecurityQos + v18);
    if ( (unsigned int)v19 < 0x80 )
      goto LABEL_99;
    DesiredAccess = v8->DesiredAccess;
    if ( (unsigned int)v19 > (unsigned int)DesiredAccess )
      goto LABEL_99;
    v21 = *(_DWORD *)((char *)&v8->SecurityQos + v19);
    v22 = (__int64)v8 + v19;
    if ( v21 == 64 )
    {
      if ( v19 + 40 <= DesiredAccess )
        goto LABEL_22;
      goto LABEL_99;
    }
    v38 = v21 - 65;
    if ( v38 )
      break;
    if ( v19 + 56 <= DesiredAccess )
    {
LABEL_22:
      if ( *(_BYTE *)(v22 + 10) )
        v16 = (_IO_SECURITY_CONTEXT *)(v22 + 24);
      goto LABEL_24;
    }
LABEL_99:
    if ( ++v18 >= AccessState )
      goto LABEL_24;
  }
  if ( v38 != 1 || v19 + 40 > DesiredAccess )
    goto LABEL_99;
  v16 = (_IO_SECURITY_CONTEXT *)(v22 + 32);
  if ( !*(_DWORD *)(v22 + 12) )
    v16 = 0LL;
LABEL_24:
  if ( v16
    && LOBYTE(v16->SecurityQos) == 27
    && (BYTE4(v16->SecurityQos) & 1) == 0
    && (v39 = RaUnitSwallowStopUnitCommand(a1)) != 0 )
  {
    BYTE3(SecurityContext->SecurityQos) = 1;
    a2->IoStatus.Information = 0LL;
    v40 = RaidCompleteRequestEx(a2, 0, 0);
    RaUnitReleaseRemoveLock(a1);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids, a1, a2);
    }
    return v40;
  }
  else
  {
    if ( StorEtwLoggingEnabled && (byte_1C0068841 & 0x3C) != 0 && ((LOBYTE(v16->SecurityQos) - 8) & 0x5D) == 0 )
    {
      IoGetActivityIdIrp(a2, &v41);
      StorEtwIORequestDispatch(a2);
    }
    v23 = a2->Tail.Overlay.CurrentStackLocation;
    v24 = v23->Parameters.Create.SecurityContext;
    v23->Control |= 1u;
    BYTE3(v24->SecurityQos) = 0;
    a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
    if ( BYTE2(v24->SecurityQos) == 40 )
    {
      v25 = v24->FullCreateOptions;
      AccessState_high = (unsigned int)v24[1].SecurityQos;
    }
    else
    {
      AccessState_high = HIDWORD(v24->AccessState);
      v25 = BYTE2(v24->SecurityQos);
    }
    if ( (qword_1C0068350 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        (_DWORD)a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
        0LL,
        0LL,
        0LL);
    v27 = (AccessState_high >> 17) & 4 | 2;
    if ( (AccessState_high & 0x10) == 0 )
      v27 = (AccessState_high >> 17) & 4;
    if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
    {
      if ( (unsigned int)v25 > 0x20 || (v33 = 0x1000D0000LL, !_bittest64(&v33, v25)) )
        v3 = 1;
    }
    v28 = v27 | 1;
    if ( !v3 )
      v28 = v27;
    RaidStartIoPacket(a1, a2, v28);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        21LL,
        &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids,
        a1,
        a2,
        259);
    }
    return 259LL;
  }
}
