/*
 * XREFs of UsbhPdoSetD0 @ 0x1C00173C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0010D74 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhClearPdoIdleReady @ 0x1C0013058 (UsbhClearPdoIdleReady.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhSetPdoPowerState @ 0x1C0017660 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00176F8 (UsbhAcquireFdoPwrLock.c)
 *     UsbhDisableDeviceForWake @ 0x1C0018160 (UsbhDisableDeviceForWake.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001820C (UsbhPdoSetD0_Finish.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C0018750 (UsbhReleasePowerContext.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0018D98 (UsbhCompletePdoIdleIrp.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E354 (WPP_RECORDER_SF_dd.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0039D88 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C654 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rbp
  __int64 v5; // r12
  _DWORD *v7; // r14
  KSPIN_LOCK *v8; // r13
  _DWORD *v9; // rdi
  int v10; // r8d
  _DWORD *v11; // rbx
  KIRQL v12; // dl
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  _DWORD *v17; // rbx
  KIRQL v18; // dl
  KIRQL v19; // al
  KSPIN_LOCK *v20; // r15
  KSPIN_LOCK **v21; // r8
  int v22; // ebx
  __int64 v23; // rdx
  int v24; // ebx
  int v25; // r8d
  unsigned int v26; // eax
  BOOLEAN v27; // r9
  __int64 v28; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v3 = *(struct _DEVICE_OBJECT **)(a3 + 48);
  v5 = a2;
  v31 = 0;
  v7 = PdoExt((__int64)v3);
  v8 = (KSPIN_LOCK *)FdoExt(*((_QWORD *)v7 + 148));
  v32 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  Log((__int64)DeviceObject, 16, 1346651184, a3, (__int64)v3);
  v9 = PdoExt((__int64)v3) + 236;
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 1381131376LL);
  UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v10, 8, 8);
  v11 = FdoExt((__int64)DeviceObject);
  FdoExt(*((_QWORD *)v9 + 1));
  v9[8] = 1734964085;
  v12 = *((_BYTE *)v11 + 5064);
  *((_QWORD *)v11 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v11 + 632, v12);
  *(_QWORD *)(a3 + 112) = UsbhIncHubBusy((__int64)DeviceObject, (__int64)v9, (__int64)v3, 1430414448, 1);
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
  v13 = PdoExt(*(_QWORD *)(a3 + 48))[282];
  FdoExt(*((_QWORD *)v9 + 1));
  v15 = FdoExt(*((_QWORD *)v9 + 1))[1043];
  if ( v15 == 201 )
    goto LABEL_22;
  if ( v15 <= 201 )
  {
LABEL_21:
    UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v16, v13, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v22 = -1073741101;
    goto LABEL_37;
  }
  if ( v15 <= 205 )
    goto LABEL_18;
  if ( v15 == 206 )
  {
LABEL_22:
    v24 = v13 - 1;
    if ( v24 )
    {
      if ( v24 == 6 )
      {
        UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v16, 7, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        Log((__int64)DeviceObject, 16, 1999782960, 0LL, *((unsigned __int16 *)v7 + 714));
        KeWaitForSingleObject(v7 + 590, Executive, 0, v27, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v16, 7, 8);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        if ( (v7[355] & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(DeviceObject);
        }
        else
        {
          UsbhSyncResumeDeviceInternal(DeviceObject, v9, v3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
              *((_WORD *)v7 + 714));
          }
          UsbhSet_Pdo_Dx(v3, (POWER_STATE)1);
        }
        UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
        PdoExt(*(_QWORD *)(a3 + 48));
        v7[596] = *((_DWORD *)v8 + 1054);
        UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v25, 1, 8);
        KeSetEvent((PRKEVENT)(v7 + 590), 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        UsbhCompletePdoIdleIrp(DeviceObject, v3, 0LL);
        UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v3, a3);
        if ( (v7[355] & 0x100) != 0 )
        {
          v26 = UsbhDisableDeviceForWake(*((_QWORD *)v9 + 1), v3, &v31);
          v23 = v26;
          if ( (v26 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v26) )
          {
            LOBYTE(v30) = 0;
            UsbhException(
              *((_QWORD *)v9 + 1),
              *((unsigned __int16 *)v7 + 714),
              49,
              0,
              0,
              v23,
              v31,
              usbfile_pdopwr_c,
              1186,
              v30);
          }
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v16, 1, 13);
      UsbhReleaseFdoPwrLock(DeviceObject, v9);
      Log((__int64)DeviceObject, 16, 1999848496, 0LL, *((unsigned __int16 *)v7 + 714));
    }
    v22 = 0;
    goto LABEL_37;
  }
  if ( v15 <= 208 )
    goto LABEL_21;
  if ( v15 > 211 )
  {
    if ( v15 != 212 )
    {
      if ( v15 == 213 )
      {
        v22 = -1073741810;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            1,
            14,
            (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
            *((_WORD *)v7 + 714),
            14);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        goto LABEL_37;
      }
      goto LABEL_21;
    }
LABEL_18:
    UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v16, v13, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v22 = -1073741101;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v23,
        1,
        15,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        *((_WORD *)v7 + 714),
        211);
    goto LABEL_37;
  }
  UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v16, 3, 7);
  v17 = FdoExt((__int64)DeviceObject);
  FdoExt(*((_QWORD *)v9 + 1));
  v9[8] = 1734964085;
  v18 = *((_BYTE *)v17 + 5064);
  *((_QWORD *)v17 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v17 + 632, v18);
  Log((__int64)DeviceObject, 16, 1349862448, a3, (__int64)v3);
  UsbhClearPdoIdleReady((__int64)DeviceObject, (__int64)v3, a3);
  Log((__int64)DeviceObject, 16, 2003321904, 0LL, v5);
  v19 = KeAcquireSpinLockRaiseToDpc(v8 + 522);
  if ( !*((_BYTE *)v8 + 4184) )
  {
    KeReleaseSpinLock(v8 + 522, v19);
    UsbhPdoSetD0_Finish(v9, v3, *(_QWORD *)(a3 + 64));
    v22 = 0;
LABEL_37:
    *((_QWORD *)v7 + 320) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy((__int64)DeviceObject, v23, *(_QWORD **)(a3 + 112));
    v28 = *(_QWORD *)(a3 + 64);
    LODWORD(Timeout) = v22;
    *(_QWORD *)(a3 + 112) = 0LL;
    UsbhEtwLogDevicePowerEvent(
      (__int64)v7,
      v28,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(_DWORD *)(v32 + 24),
      Timeout);
    *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = v22;
    IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
    UsbhDecPdoIoCount((ULONG_PTR)v3, *(_QWORD *)(a3 + 64));
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v20 = (KSPIN_LOCK *)(a3 + 96);
  v21 = (KSPIN_LOCK **)v8[525];
  if ( *v21 != v8 + 524 )
    __fastfail(3u);
  *v20 = (KSPIN_LOCK)(v8 + 524);
  v20[1] = (KSPIN_LOCK)v21;
  *v21 = v20;
  v8[525] = (KSPIN_LOCK)v20;
  KeReleaseSpinLock(v8 + 522, v19);
}
