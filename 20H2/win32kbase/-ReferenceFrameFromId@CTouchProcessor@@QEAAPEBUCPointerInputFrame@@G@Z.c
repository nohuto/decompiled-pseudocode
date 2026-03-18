/*
 * XREFs of ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C0196690
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A3040 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0191EF0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceFrameFromId(
        CTouchProcessor *this,
        unsigned __int16 a2)
{
  CTouchProcessor *v2; // rdi
  unsigned __int16 v3; // si
  const struct CPointerInputFrame *v4; // rbx
  unsigned __int64 ThreadPointerData; // rax
  __int16 v6; // dx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]

  v2 = gpTouchProcessor;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      307,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (CTouchProcessor *)((char *)v2 + 40),
    0LL);
  v4 = 0LL;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v2,
                        (struct tagTHREADINFO *)((char *)gptiCurrent + 1088),
                        v3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
    v4 = CTouchProcessor::ReferenceFrame((struct _KTHREAD **)v2, *(unsigned int *)(ThreadPointerData + 28), v7, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      7,
      308,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  if ( !v12 )
    CInpLockGuard::UnLock((PERESOURCE *)v11, (struct CRefUnRefPointerMsgId *)v10);
  return v4;
}
