/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C018E050
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C019372C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0196814 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1690 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01A1918 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        struct _LIST_ENTRY *a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  __int64 v6; // rcx
  CInputDest *v7; // rax
  struct CPointerInfoNode *v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 Queue; // rax
  _BYTE v11[40]; // [rsp+50h] [rbp-158h] BYREF
  CInpLockGuard *v12; // [rsp+78h] [rbp-130h]
  _BYTE v13[128]; // [rsp+80h] [rbp-128h] BYREF
  _DWORD v14[32]; // [rsp+100h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v11,
    (struct CInpLockGuard *)&a1[2].Blink,
    0LL);
  CInputDest::CInputDest((CInputDest *)v14, a3);
  if ( !v14[0] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = CInputDest::CInputDest((CInputDest *)v13, (const struct CInputDest *)v14);
  CTouchProcessor::SetPointerInputCapture(a1, *(unsigned __int16 *)(*((_QWORD *)NextFrame + 17) + 172LL), v7);
  do
  {
    v8 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 17);
    if ( (unsigned int)CPointerInfoNode::IsValid(v8) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v14,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v9 = *((_QWORD *)NextFrame + 18);
      if ( *(_QWORD *)(v9 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((CInputDest *)v14, 2);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v9,
          v8,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, a1 + 8);
    }
  }
  while ( NextFrame );
  CInputDest::SetEmpty((CInputDest *)v14);
  CInpLockGuard::UnLock((PERESOURCE *)v12, (struct CRefUnRefPointerMsgId *)v11);
}
