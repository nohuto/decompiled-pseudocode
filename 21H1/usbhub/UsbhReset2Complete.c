/*
 * XREFs of UsbhReset2Complete @ 0x1C0010540
 * Callers:
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhAllocateTimeoutObject @ 0x1C000174C (UsbhAllocateTimeoutObject.c)
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0001BF8 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDerefPdo @ 0x1C0003770 (UsbhDerefPdo.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquireEnumBusLock @ 0x1C00126A8 (UsbhAcquireEnumBusLock.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0015EB4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhBusConnectPdo @ 0x1C0017E8C (UsbhBusConnectPdo.c)
 *     UsbhWait @ 0x1C001853C (UsbhWait.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0018990 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C001C9E8 (UsbhBusIf_GetContainerIdForPort.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0033EEC (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C0037200 (UsbhDisablePort.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003AA2C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C004BEC0 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C6A0 (UsbhBusUnlatchPdo.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E668 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildContainerID @ 0x1C004F72C (UsbhBuildContainerID.c)
 *     UsbhFreeID @ 0x1C0050D40 (UsbhFreeID.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  _DWORD *v7; // r13
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // al
  int FrameCounter; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int16 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  KIRQL v18; // dl
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  char v23; // cl
  KIRQL v24; // bl
  __int64 v26; // rax
  KIRQL v27; // dl
  int v28; // eax
  int v29; // ebx
  KIRQL v30; // al
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // r9d
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r9
  int v41; // r9d
  int v42; // [rsp+20h] [rbp-49h]
  int v43; // [rsp+28h] [rbp-41h]
  int v44; // [rsp+30h] [rbp-39h]
  int v45; // [rsp+38h] [rbp-31h]
  int v46; // [rsp+48h] [rbp-21h]
  char v47; // [rsp+50h] [rbp-19h]
  KIRQL v48; // [rsp+51h] [rbp-18h]
  PVOID P; // [rsp+58h] [rbp-11h] BYREF
  int v50; // [rsp+60h] [rbp-9h]
  int v51; // [rsp+64h] [rbp-5h]
  int v52; // [rsp+68h] [rbp-1h]
  int v53; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v54; // [rsp+70h] [rbp+7h]
  int v55[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int16 v56; // [rsp+80h] [rbp+17h]
  __int16 v57; // [rsp+82h] [rbp+19h]

  v52 = 0;
  v53 = 0;
  v57 = 0;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884435043, a2, 0LL);
  P = FdoExt(a1);
  v7 = P;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v55[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v55[1] = v11;
  v56 = FrameCounter;
  Log(a1, 1024, 1701720625, a2, v11);
  UsbhWait(a1, *(_DWORD *)(a2 + 544) != 0 ? 100 : 15);
  v51 = 30;
  v12 = (int)UsbhInitializeDevice(a1);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(a2 + 4),
    0);
  Log(a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v12);
  if ( (int)v12 < 0 )
  {
LABEL_13:
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      v35 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log(a1, 1024, 1936025137, v35, (int)v12);
      v36 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v37 = *(_DWORD *)(a2 + 544);
      if ( v37 < 3 && (int)v36 >= 0 )
      {
        Log(a1, 1024, 1936025138, v37, v36);
        UsbhDisablePort(a1);
        v38 = *(unsigned __int16 *)(a2 + 4);
        v39 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v39, v38);
        LOBYTE(v40) = 1;
        UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897LL, v40);
        UsbhBusUnlatchPdo(a1, a3, a2, v41, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v36);
        UsbhResetPort(a1, a2, (__int64)P);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v36);
      UsbhSetEnumerationFailed(a1, (int)v55, v36, v44, v45, 2065);
    }
    else
    {
      v21 = PdoExt(a3);
      v22 = v21;
      v23 = *(_BYTE *)(v21 + 2732);
      if ( !v23 )
      {
        if ( (*(_DWORD *)(v21 + 1420) & 0x200) != 0 && (*(_DWORD *)(v21 + 1180) & 0x10) == 0 )
        {
          UsbhBuildContainerID(a1, a3);
          v23 = *(_BYTE *)(v22 + 2732);
        }
        if ( !v23 )
          goto LABEL_17;
      }
      if ( (v7[640] & 1) != 0 )
      {
        UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v22 + 1428), v22 + 2716);
        v23 = *(_BYTE *)(v22 + 2732);
      }
      if ( !v23 )
      {
LABEL_17:
        if ( (v7[640] & 1) != 0 )
        {
          if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(unsigned __int16 *)(v22 + 1428), v22 + 2716) >= 0 )
            *(_BYTE *)(v22 + 2732) = 1;
          LODWORD(v12) = 0;
        }
      }
      Log(a1, 1024, 1970032689, a3, a2);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      Log(a1, 1024, 1970032690, a3, a2);
      UsbhDerefPdo(a1, a3, 0LL, 0x7050444Fu);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v12);
      *(_DWORD *)(PdoExt(a3) + 2820) = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v13 = *(_WORD *)(a2 + 4);
  v14 = *(_QWORD *)(a2 + 376);
  v15 = 0;
  v47 = 0;
  v51 = 32;
  UsbhReleaseEnumBusLockEx(a1, v14, v13);
  UsbhAcquirePdoStateLock(v16, *(_QWORD *)(a2 + 376), 12LL);
  if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
  {
    Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v17 = *(_QWORD *)(a2 + 376);
    LODWORD(v12) = 0;
    v47 = 1;
    *(_DWORD *)(v17 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v18 = *(_BYTE *)(v17 + 132);
    *(_DWORD *)(v17 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v26 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v27 = *(_BYTE *)(v26 + 132);
    *(_DWORD *)(v26 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v27);
    v28 = UsbhSetupDevice(a1);
    v12 = v28;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v28);
    Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v12);
  }
  while ( 1 )
  {
    if ( (int)v12 >= 0 )
    {
      v12 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v53);
      Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v12);
    }
    Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v12 & 0xC0000000) == 0xC0000000 )
      break;
    v19 = PdoExt(a3);
    v20 = v19;
    if ( (*(_DWORD *)(v19 + 1420) & 0x200) == 0 || v47 == 1 )
      goto LABEL_12;
    v54 = v15 + 1;
    v29 = 4;
    v50 = 4;
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 2808));
    v48 = v30;
    if ( !*(_DWORD *)(v20 + 2816) )
    {
      v31 = PdoExt(a3);
      if ( (*(_DWORD *)(v31 + 1420) & 0x200) == 0 )
      {
        v29 = 1;
        v50 = 1;
        goto LABEL_30;
      }
      v44 = v31 + 2128;
      LOWORD(v43) = *(_WORD *)(v31 + 1410);
      LOWORD(v42) = *(_WORD *)(v31 + 1408);
      v50 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v31 + 1428), 0LL, v42, v43);
      v29 = v50;
      if ( v50 == 1 )
LABEL_30:
        *(_DWORD *)(v20 + 2816) = 1;
      v30 = v48;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 2808), v30);
    if ( v29 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v46) = 0;
      UsbhException(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v20 + 2136),
        *(_DWORD *)(v20 + 2132),
        v12,
        0,
        usbfile_busfunc_c,
        1932,
        v46);
      UsbhFreeID(v20 + 2128);
      *(_DWORD *)(v20 + 1420) &= ~0x200u;
      goto LABEL_12;
    }
    if ( v29 != 2 )
    {
      if ( v50 == 4 )
        LODWORD(v12) = -1073741823;
      goto LABEL_12;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v12) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_12;
    }
    UsbhWait(a1, LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc));
    v15 = v54;
    if ( v54 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v12) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v46) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, v46);
      *(_DWORD *)(PdoExt(a3) + 2820) = 1073807363;
LABEL_12:
      v7 = P;
      goto LABEL_13;
    }
  }
  if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v12) )
  {
    Log(a1, 1024, 1701725522, v33, v32);
    UsbhDisablePort(a1);
    goto LABEL_12;
  }
  Log(a1, 1024, 1701720644, v33, v32);
  UsbhBusUnlatchPdo(a1, a3, a2, v34, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v12);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
