/*
 * XREFs of ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C005FB00 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C0193450 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019A3B0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C019BB48 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019DD00 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CThreadLockInputDest *__fastcall CThreadLockInputDest::CThreadLockInputDest(
        CThreadLockInputDest *this,
        struct CInputDest *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = a2;
  v2 = (_QWORD *)((char *)this + 16);
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    if ( !*(_DWORD *)(v4 + 92) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      v5 = *((_QWORD *)this + 1);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v7 = *(_QWORD *)(ThreadWin32Thread + 408);
    *v2 = v7;
    *(_QWORD *)(ThreadWin32Thread + 408) = v2;
    *((_QWORD *)this + 3) = v5;
    if ( v5 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v10);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    }
    if ( qword_1C0257E80 )
      qword_1C0257E80(this, (char *)this + 40, lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_);
    v8 = *(_QWORD *)this;
    if ( !*(_DWORD *)(*(_QWORD *)this + 92LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    ++*(_BYTE *)(v8 + 112);
  }
  return this;
}
