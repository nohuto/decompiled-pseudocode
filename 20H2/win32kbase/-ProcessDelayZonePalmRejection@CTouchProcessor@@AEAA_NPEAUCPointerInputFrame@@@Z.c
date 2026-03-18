/*
 * XREFs of ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C0194E80
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0195684 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0008EE4 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A7DCC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

bool __fastcall CTouchProcessor::ProcessDelayZonePalmRejection(CTouchProcessor *this, struct CPointerInputFrame *a2)
{
  struct CPointerInputFrame *v2; // rsi
  bool v4; // di
  struct DelayZonePalmRejection *Instance; // rax
  int v6; // edx
  DelayZonePalmRejection *v7; // rbx
  _BYTE v9[40]; // [rsp+30h] [rbp-48h] BYREF
  CInpLockGuard *v10; // [rsp+58h] [rbp-20h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      37,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  v4 = 1;
  Instance = DelayZonePalmRejection::GetInstance();
  v7 = Instance;
  if ( Instance )
  {
    if ( *((_DWORD *)Instance + 24) && gDeviceArbitrationType )
    {
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v9,
        (CTouchProcessor *)((char *)this + 40),
        0LL);
      v4 = DelayZonePalmRejection::ProcessInput(v7, v2);
      CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v10, (struct CRefUnRefPointerMsgId *)v9);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v6,
      7,
      38,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      7,
      39,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return v4;
}
