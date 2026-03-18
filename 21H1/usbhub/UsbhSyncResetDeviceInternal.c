/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C00162A8
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoResetPdoPort @ 0x1C00304E0 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0038920 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C003BD90 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C654 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0055C3C (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0056620 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00038F0 (UsbhWaitEventWithTimeoutEx.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhAcquireEnumBusLock @ 0x1C00126A8 (UsbhAcquireEnumBusLock.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0015C80 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0016670 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhQueueWorkItemEx @ 0x1C0017B0C (UsbhQueueWorkItemEx.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0018840 (UsbhPCE_QueueDriverReset.c)
 *     Usbh_HubRestoreDevice @ 0x1C001890C (Usbh_HubRestoreDevice.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0018990 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C00192F4 (UsbhLinkPdoDeviceHandle.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C002E8F0 (WPP_RECORDER_SF_qd.c)
 *     UsbhWaitForBootDevice @ 0x1C003A0A8 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     UsbhFreeID @ 0x1C0050D40 (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C00513E0 (UsbhGetSerialNumber.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char v4; // r13
  int v6; // r8d
  _DWORD *v7; // r14
  _DWORD *v8; // rbx
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // si
  __int64 v11; // r12
  int v12; // edx
  __int64 PortData; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r10
  KIRQL v18; // al
  int v19; // edx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r10
  int v24; // edx
  int v25; // [rsp+48h] [rbp-38h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+58h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v7 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 71, (__int64)"FKh&");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)"FKh&",
        v6,
        72,
        (__int64)"FKh&",
        *((_WORD *)v7 + 714),
        a3);
  }
  v8 = FdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0);
  v9 = (KSPIN_LOCK *)(v8 + 1292);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( !*((_QWORD *)v7 + 108) )
  {
    v7[218] = -1;
    *((_QWORD *)v7 + 108) = &Event;
    *((_QWORD *)v7 + 110) = KeGetCurrentThread();
    KeReleaseSpinLock(v9, v10);
    v11 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 0x48446C6Fu);
    UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740898LL, 0LL);
    Log((__int64)DeviceObject, 4, 1869374568, 0LL, v11);
    Usbh_SSH_Event(DeviceObject, 6u, a2);
    v12 = *((unsigned __int16 *)v7 + 714);
    v7[355] &= ~0x8000u;
    UsbhPCE_QueueDriverReset((_DWORD)DeviceObject, v12, 0x20000, a2, a3);
    Log((__int64)DeviceObject, 4, 1380218740, 0LL, 0LL);
    PortData = UsbhGetPortData(DeviceObject, *((unsigned __int16 *)v7 + 714));
    UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, &Event, 0, 1380210548, 0xBu, PortData);
    v16 = (int)v7[218];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v14, v15, 73, (__int64)"FKh&", a3, v7[218]);
    if ( (v16 & 0xC0000000) == 0xC0000000 )
    {
      Log((__int64)DeviceObject, 4, 1380214124, 0LL, v16);
      UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740856LL, 1LL);
      if ( v11 )
      {
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
      }
      if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v16) )
      {
        LOBYTE(v25) = v21;
        UsbhException((int)DeviceObject, *((unsigned __int16 *)v7 + 714), 67, 0, v21, v16, -1, usbfile_bus_c, 6797, v25);
        v21 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v21 )
      {
        WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v21, v22, 74, (__int64)"FKh&", a3, v16);
      }
    }
    else
    {
      UsbhAcquireEnumBusLock((__int64)DeviceObject, a2, *((_WORD *)v7 + 714));
      v29 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 0x4844776Eu);
      if ( v29 )
      {
        if ( v11 )
        {
          UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
          Log((__int64)DeviceObject, 4, 1381192786, v11, v29);
          v16 = (int)Usbh_HubRestoreDevice(DeviceObject, a3, v11, v17);
          if ( *((_BYTE *)v7 + 2740) )
          {
            if ( (int)v16 >= 0 && (v7[355] & 0x204) == 0x200 )
            {
              *(_OWORD *)Length = 0LL;
              UsbhGetSerialNumber((int)DeviceObject);
              if ( v7[533] )
              {
                v4 = 1;
              }
              else if ( Length[1]
                     && RtlCompareMemory((const void *)Length[1], *((const void **)v7 + 267), HIDWORD(Length[0])) != HIDWORD(Length[0]) )
              {
                v4 = 1;
              }
              UsbhFreeID(Length);
            }
            if ( (_DWORD)v16 == -1073741823 )
              v4 = 1;
          }
          Log((__int64)DeviceObject, 4, 1380217445, 0LL, v16);
          UsbhDerefPdoDeviceHandle(DeviceObject, v29, a3, 1212446574LL);
          if ( (v16 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v25) = 0;
            UsbhException(
              (int)DeviceObject,
              *((unsigned __int16 *)v7 + 714),
              66,
              0,
              0,
              v16,
              -1,
              usbfile_bus_c,
              6876,
              v25);
            UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740899LL, 1LL);
            UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
          }
        }
        else
        {
          Log((__int64)DeviceObject, 4, 1380216684, 0LL, v16);
          LODWORD(v16) = 0;
          UsbhDerefPdoDeviceHandle(DeviceObject, v23, a3, 1212446574LL);
        }
      }
      else
      {
        Log((__int64)DeviceObject, 4, 1380200497, 0LL, v11);
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
        LODWORD(v16) = -1073741823;
      }
      if ( (int)v16 >= 0 )
      {
        if ( *((_BYTE *)v7 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_1C006B688 )
            {
              if ( (v7[355] & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v16) = UsbhQueueWorkItemEx(
                                 (_DWORD)DeviceObject,
                                 1,
                                 (unsigned int)UsbhUpdateRegSurpriseRemovalCount,
                                 (unsigned int)&byte_1C006B688,
                                 *((unsigned __int16 *)v7 + 714),
                                 2001555795,
                                 0LL);
                if ( (v16 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C006B688 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 75, (__int64)"FKh&", v16);
                  }
                }
              }
            }
          }
        }
      }
      UsbhReleaseEnumBusLockEx((__int64)DeviceObject, a2, *((_WORD *)v7 + 714));
    }
    v18 = KeAcquireSpinLockRaiseToDpc(v9);
    *((_QWORD *)v7 + 108) = 0LL;
    KeReleaseSpinLock(v9, v18);
    if ( v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v19, 3, 76, (__int64)"FKh&", (char)DeviceObject);
      Log((__int64)DeviceObject, 4, 1397905220, (int)v16, (__int64)DeviceObject);
      UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_24;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v24, 3, 77, (__int64)"FKh&", (char)DeviceObject);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 78, (__int64)"FKh&", v16);
    }
LABEL_24:
    UsbhEtwLogDeviceIrpEvent((__int64)v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, v16);
    return (unsigned int)v16;
  }
  Log((__int64)DeviceObject, 4, 1380214068, 0LL, *((_QWORD *)v7 + 108));
  KeReleaseSpinLock(v9, v10);
  UsbhEtwLogDeviceIrpEvent((__int64)v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, -2147483631);
  return 2147483665LL;
}
