/*
 * XREFs of ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A9B0
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A3040 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameExternal(struct _KTHREAD **this, const struct CPointerInputFrame *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v6[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v6,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  CTouchProcessor::UnreferenceFrame(this, a2, v4, v5);
  if ( !v8 )
    CInpLockGuard::UnLock((PERESOURCE *)v7, (struct CRefUnRefPointerMsgId *)v6);
}
