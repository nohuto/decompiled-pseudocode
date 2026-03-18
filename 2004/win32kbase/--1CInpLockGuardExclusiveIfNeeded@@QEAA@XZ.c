/*
 * XREFs of ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D142C
 * Callers:
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018E1FC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01914D0 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0193360 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01953D0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0198990 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

void __fastcall CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(CInpLockGuard **this)
{
  if ( !*((_DWORD *)this + 12) )
    CInpLockGuard::UnLock(this[5], (struct CRefUnRefPointerMsgId *)this);
}
