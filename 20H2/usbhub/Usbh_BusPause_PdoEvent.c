/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x1C003A2BC
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C00023E0 (UsbhCancelEnumeration.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C001518C (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036194 (SET_PDO_HWPNPSTATE.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0037600 (UsbhFlushQueuedDriverReset.c)
 *     UsbhDeletePdo @ 0x1C0054AFC (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPause_PdoEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // dl

  UsbhFlushQueuedDriverReset(a1, a3);
  UsbhAcquirePdoStateLock(v8, a4, 10);
  Log(a1, 2, 1716736630, 0LL, a4);
  v9 = (unsigned int)PdoExt(a2)[281];
  if ( (_DWORD)v9 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, 1u, 0x45u, (__int64)"FKh&", a2);
    Log(a1, 4, 1685283663, a2, a4);
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else if ( (_DWORD)v9 == 2 || (int)v9 > 2 && (int)v9 <= 4 )
  {
    SET_PDO_HWPNPSTATE(a2, v9, 10);
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
    UsbhSignalDriverResetEvent(a1, a3);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v10 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v10);
  }
}
