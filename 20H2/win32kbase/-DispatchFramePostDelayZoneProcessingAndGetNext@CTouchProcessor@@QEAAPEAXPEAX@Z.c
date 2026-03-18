/*
 * XREFs of ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018AE00
 * Callers:
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C018E5F4 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01958FC (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
        struct _LIST_ENTRY *this,
        struct CPointerInputFrame *a2)
{
  int v4; // edx
  const struct CPointerInputFrame *NextFrame; // rdi
  struct RIMCOMPLETEFRAME *v6; // r8
  int v7; // edx
  _BYTE v9[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+60h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v9,
    (struct CInpLockGuard *)&this[2].Blink,
    0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      7,
      314,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)this, a2, this + 8);
  CTouchProcessor::ProcessInputPostDelayZonePalmRejection((CTouchProcessor *)this, a2, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      315,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  if ( !v11 )
    CInpLockGuard::UnLock((PERESOURCE *)v10, (struct CRefUnRefPointerMsgId *)v9);
  return NextFrame;
}
