/*
 * XREFs of ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006B618 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018CC74 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C018D750 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01946B0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01948A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0195E58 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0198010 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019A590 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CThreadLockInputDest *__fastcall CThreadLockInputDest::CThreadLockInputDest(
        CThreadLockInputDest *this,
        struct CInputDest *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = a2;
  v4 = (_QWORD *)((char *)this + 16);
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *((_QWORD *)this + 1) = v7;
  if ( v7 )
  {
    if ( !*(_DWORD *)(v6 + 92) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
      v7 = *((_QWORD *)this + 1);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v12 = *(_QWORD *)(ThreadWin32Thread + 408);
    *v4 = v12;
    *(_QWORD *)(ThreadWin32Thread + 408) = v4;
    *((_QWORD *)this + 3) = v7;
    if ( v7 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v15);
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    }
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(this, (char *)this + 40, lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_, v11);
    v13 = *(_QWORD *)this;
    if ( !*(_DWORD *)(*(_QWORD *)this + 92LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10, v11);
    ++*(_BYTE *)(v13 + 112);
  }
  return this;
}
