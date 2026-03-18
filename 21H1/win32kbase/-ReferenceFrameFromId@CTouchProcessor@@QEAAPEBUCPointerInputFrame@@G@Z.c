/*
 * XREFs of ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C019E8B0
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01AB120 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
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
  _BYTE v8[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]

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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (CTouchProcessor *)((char *)v2 + 40),
    0LL);
  v4 = 0LL;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v2,
                        (struct tagTHREADINFO *)((char *)gptiCurrent + 1072),
                        v3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
    v4 = CTouchProcessor::ReferenceFrame((struct _KTHREAD **)v2, *(_DWORD *)(ThreadPointerData + 28));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      7,
      308,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  if ( !v10 )
    CInpLockGuard::UnLock((PERESOURCE *)v9, (struct CRefUnRefPointerMsgId *)v8);
  return v4;
}
