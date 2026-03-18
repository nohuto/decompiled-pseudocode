/*
 * XREFs of UsbhSetEnumerationFailed @ 0x1C004E668
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 *     UsbhReset1Timeout @ 0x1C004DDA0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004E390 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C00029EC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C001518C (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhBusConnectPdo @ 0x1C0017E8C (UsbhBusConnectPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     UsbhDisablePort @ 0x1C0037200 (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C6A0 (UsbhBusUnlatchPdo.c)
 *     UsbhBuildUnknownIds @ 0x1C0050A44 (UsbhBuildUnknownIds.c)
 *     UsbhFreeID @ 0x1C0050D40 (UsbhFreeID.c)
 */

__int64 __fastcall UsbhSetEnumerationFailed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        const void *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD *v13; // rax
  __int64 v14; // rbp
  unsigned __int32 v15; // r14d
  _DWORD *v16; // r13
  __int64 v17; // rcx
  _DWORD *v18; // rax
  KIRQL v19; // dl
  int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // r9

  FdoExt(a1);
  v13 = PdoExt(a3);
  v14 = *(_QWORD *)(a2 + 376);
  v15 = *(_DWORD *)(a2 + 428);
  v16 = v13;
  UsbhDisablePort(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhAcquirePdoStateLock(v17, v14, 2);
  v18 = PdoExt(a3);
  Log(a1, 1024, 1701737761, a3, (int)v18[281]);
  *(_DWORD *)(v14 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v14 + 88) = 1734964085;
  v19 = *(_BYTE *)(v14 + 132);
  if ( v20 == 3 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
    UsbhBusUnlatchPdo(a1, a3, a2, v21, 0LL);
    UsbhSignalSyncDeviceResetPdo(a1, a3, -1073741823);
    UsbhSignalDriverResetEvent(a1, a2);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
    v16[355] |= 0x1000u;
    UsbhBuildUnknownIds(a1, a3);
    *((_QWORD *)v16 + 107) = UsbhIncHubBusy(a1, *(_QWORD *)(a2 + 376), a1, 1430414956, 1);
    UsbhException(a1, *(_WORD *)(a2 + 4), a4, a5, 0xCu, a6, -1, usbfile_busfunc_c, a9, 0);
    UsbhFreeID(v16 + 532);
    v16[355] &= ~0x200u;
    UsbhBusUnlatchPdo(a1, a3, a2, v22, 0LL);
    v16[283] |= 4u;
    UsbhBusConnectPdo(a1, a2);
    v15 = 2;
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), v15);
  return v15;
}
