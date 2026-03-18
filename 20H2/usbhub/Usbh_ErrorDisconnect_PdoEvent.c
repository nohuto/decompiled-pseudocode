/*
 * XREFs of Usbh_ErrorDisconnect_PdoEvent @ 0x1C003AB30
 * Callers:
 *     UsbhPortConnect @ 0x1C004CDC0 (UsbhPortConnect.c)
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     UsbhDeletePdo @ 0x1C0054AFC (UsbhDeletePdo.c)
 */

void __fastcall Usbh_ErrorDisconnect_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // dl

  UsbhAcquirePdoStateLock(a1, a3, 4);
  Log(a1, 2, 1716736630, 0LL, a3);
  if ( PdoExt(a2)[281] == 1 )
  {
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v6 = *(_BYTE *)(a3 + 132);
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
  }
}
