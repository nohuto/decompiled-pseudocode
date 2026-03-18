/*
 * XREFs of UsbhSS_PdoWakeWorker @ 0x1C0016F40
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001507C (UsbhCompletePdoWakeIrp.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhSetPdoPowerState @ 0x1C0017660 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00176F8 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // r14
  _DWORD *v6; // rdi
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // dl
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  _DWORD *v13; // rbx
  KIRQL v14; // dl
  unsigned __int8 v15; // al
  int v16; // edx
  int v17; // r8d
  char v18; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  v6 = PdoExt(a3) + 236;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
      *((_WORD *)v5 + 714));
  Log(a1, 0x10000, 1936945239, a3, *((unsigned __int16 *)v5 + 714));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v6[34] = 1;
  *((_BYTE *)v6 + 132) = v7;
  v6[22] = 2018460752;
  v6[23] = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v6;
  *((_QWORD *)v6 + 3) = KeGetCurrentThread();
  v8 = PdoExt(a3)[281] == 3;
  v6[34] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v6[22] = 1734964085;
  v9 = *((_BYTE *)v6 + 132);
  if ( v8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    UsbhAcquireFdoPwrLock(a1, v6, 126LL, 1986356311LL);
    FdoExt(*((_QWORD *)v6 + 1));
    v10 = FdoExt(*((_QWORD *)v6 + 1))[1043];
    v12 = PdoExt(a3)[282];
    if ( v10 == 201 && (v12 != 1 || (v5[355] & 4) != 0) )
    {
      UsbhSetPdoPowerState((_DWORD)v6, a3, v11, v12, 12);
      v13 = FdoExt(a1);
      FdoExt(*((_QWORD *)v6 + 1));
      v6[8] = 1734964085;
      v14 = *((_BYTE *)v13 + 5064);
      *((_QWORD *)v13 + 168) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)v13 + 632, v14);
      v15 = UsbhCompletePdoWakeIrp(a1, a3, 0);
      Log(a1, 0x10000, 1936938801, v15, a3);
      if ( v18
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          v17,
          11,
          (__int64)&WPP_20a1a4b3b64f3a3fd9fa92029fc64dd2_Traceguids,
          *((_WORD *)v5 + 714),
          a3);
      }
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v6);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
  return UsbhUnlatchPdo(a1, a3, 0LL, 1936945239LL);
}
