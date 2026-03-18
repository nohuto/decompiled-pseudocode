/*
 * XREFs of UsbhReferenceListRemove @ 0x1C001B88C
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C002D220 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetTimer @ 0x1C002D93C (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002D9E8 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C002DCC0 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002F6C0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002F830 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0038F30 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C003B508 (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C003B8F0 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C00412E4 (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004AC90 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _DWORD *v5; // rax
  _QWORD *v6; // rcx
  _DWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = FdoExt(a1);
  v6 = 0LL;
  v7 = v5;
  v8 = v5 + 628;
  if ( *((_DWORD **)v5 + 314) != v5 + 628 )
    v6 = (_QWORD *)*((_QWORD *)v5 + 314);
  v9 = 0LL;
  if ( !v6 )
    goto LABEL_19;
  while ( v6 != v8 )
  {
    v9 = v6 - 3;
    if ( v6 != (_QWORD *)24 && *(_DWORD *)v9 == 1397515890 )
    {
      if ( v9[2] == a2 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v6 )
        continue;
    }
    UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( v9 && v6 != v8 )
  {
    v10 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
LABEL_19:
    v12 = v5[632];
    if ( v12 )
      v7[632] = v12 - 1;
  }
  if ( (_QWORD *)*v8 == v8 && !v7[632] )
    KeSetEvent((PRKEVENT)(v7 + 622), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
