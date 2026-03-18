/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0188350
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0071274 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C018DA2C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0190B14 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019B930 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C019BBB8 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        struct _LIST_ENTRY *a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CInputDest *v10; // rax
  struct CPointerInfoNode *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned __int64 Queue; // rax
  _BYTE v16[40]; // [rsp+50h] [rbp-158h] BYREF
  CInpLockGuard *v17; // [rsp+78h] [rbp-130h]
  _BYTE v18[128]; // [rsp+80h] [rbp-128h] BYREF
  _DWORD v19[32]; // [rsp+100h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v16,
    (struct CInpLockGuard *)&a1[2].Blink,
    0LL);
  CInputDest::CInputDest((CInputDest *)v19, a3);
  if ( !v19[0] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  v10 = CInputDest::CInputDest((CInputDest *)v18, (const struct CInputDest *)v19);
  CTouchProcessor::SetPointerInputCapture(a1, *(unsigned __int16 *)(*((_QWORD *)NextFrame + 17) + 172LL), v10);
  do
  {
    v11 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 17);
    if ( (unsigned int)CPointerInfoNode::IsValid(v11) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v19,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v14 = *((_QWORD *)NextFrame + 18);
      if ( *(_QWORD *)(v14 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((CInputDest *)v19, 2LL, v12, v13);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v14,
          v11,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, a1 + 8);
    }
  }
  while ( NextFrame );
  CInputDest::SetEmpty((CInputDest *)v19);
  CInpLockGuard::UnLock((PERESOURCE *)v17, (struct CRefUnRefPointerMsgId *)v16);
}
