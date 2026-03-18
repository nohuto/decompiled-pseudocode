/*
 * XREFs of ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280
 * Callers:
 *     ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C018E730 (-GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C018EA40 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C018EAE0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C018ECC0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C018EFB0 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C018F2A0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C018F810 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C018FFF0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0190E30 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C0191990 (-GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0192D70 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 *     ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C0192E50 (-IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0196460 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

CInpLockGuardShared *__fastcall CInpLockGuardShared::CInpLockGuardShared(
        CInpLockGuardShared *this,
        struct CInpLockGuard *a2,
        void *a3)
{
  BOOL v4; // r8d

  *(_QWORD *)this = a3;
  if ( a3 == (void *)-1LL )
    a3 = 0LL;
  *((_BYTE *)this + 32) = 0;
  *(_QWORD *)this = a3;
  *((_QWORD *)this + 5) = a2;
  v4 = *((_QWORD *)a2 + 4) == (_QWORD)KeGetCurrentThread();
  *((_DWORD *)this + 12) = v4;
  if ( !v4 )
    CInpLockGuard::LockShared(a2, this);
  return this;
}
