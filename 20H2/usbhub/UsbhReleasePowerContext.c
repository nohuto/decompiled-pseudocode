/*
 * XREFs of UsbhReleasePowerContext @ 0x1C0018750
 * Callers:
 *     UsbhFdoDxPoComplete_Action @ 0x1C000CC80 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0018660 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0019404 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003BC30 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReleasePowerContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // r8

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v3 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v4 = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(v4 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v4 + 136) = 1;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *(_BYTE *)(a2 + 136) )
    *(_QWORD *)(v3 + 912) = 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v5 + 8) != a2 + 8 || (v6 = *(_QWORD **)(a2 + 16), *v6 != a2 + 8) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExFreePoolWithTag((PVOID)a2, 0);
  *(_DWORD *)(v4 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v4 + 132));
}
