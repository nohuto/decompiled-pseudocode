/*
 * XREFs of UsbhAsyncStop @ 0x1C004204C
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044590 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00038F0 (UsbhWaitEventWithTimeoutEx.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     UsbhSyncBusPause @ 0x1C0031404 (UsbhSyncBusPause.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0031714 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00317D8 (UsbhReleaseFdoPnpLock.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A450 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C003C45C (Usbh_HubRootHubInitNotification.c)
 *     UsbhDisableHardReset @ 0x1C003CAB8 (UsbhDisableHardReset.c)
 *     UsbhSshDisabled @ 0x1C0059DA0 (UsbhSshDisabled.c)
 */

void __fastcall UsbhAsyncStop(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // rcx
  int Timeout; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1114850114, 0LL, 0LL);
  UsbhDisableTimerObject(*(_QWORD *)(a1 + 8), *((_QWORD *)v4 + 346));
  if ( (unsigned int)Usbh_HubRootHubInitNotification(*(_QWORD *)(a1 + 8), 0LL, 0LL) == -1073741536 )
  {
    v5 = FdoExt(*(_QWORD *)(a1 + 8));
    v4[640] |= 0x400u;
    v6 = v5;
    KeSetEvent((PRKEVENT)(v4 + 644), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v6 + 390, 0x20u);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 1684357954, 0LL, 0LL);
  v8 = UsbhWaitEventWithTimeoutEx(*(_QWORD *)(a1 + 8), v4 + 644, 5000, 1667394391, (unsigned int)v7 & Timeout, v7 & v13);
  Log(*(_QWORD *)(a1 + 8), 2, 1667379249, v8, 5000LL);
  if ( v9 == 258 )
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1667379250, 0LL, 5000LL);
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v4[640] & 0x400) != 0 )
    {
      Log(v11, 2, 1667379252, v10, 5000LL);
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8));
    }
    Log(v11, 2, 1667379251, v10, 5000LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    KeWaitForSingleObject(v4 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 12, 1330933353, 1);
    if ( a2 == 5 )
    {
      UsbhDisableHardReset(*(_QWORD *)(a1 + 8));
      Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 5);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
  }
}
