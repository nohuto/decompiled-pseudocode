/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C005D314
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C003D220 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00458A0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  char v16; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  int WindowHandle; // eax

  v6 = 1LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3760), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3640));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3640));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 )
  {
    if ( v10 == ThreadInfo )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( ThreadInfo )
  {
LABEL_14:
    v16 = 0;
    goto LABEL_17;
  }
  v16 = CInputDest::operator==(a1 + 3640, a3);
LABEL_17:
  if ( !v16 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest(a3, 2LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_7:
  v11 = *(unsigned int *)(*(_QWORD *)(a4 + 8) + 112LL);
  if ( (v11 & 2) != 0 )
  {
    WindowHandle = (unsigned int)CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(a1, WindowHandle, 0, 0, 0LL, 0LL);
  }
  v12 = *(_DWORD *)(a4 + 28);
  if ( !v12 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v12 = *(_DWORD *)(a4 + 28);
  }
  v13 = ~v12;
  v14 = (v13 & *(_DWORD *)(a1 + 3636)) == 0;
  *(_DWORD *)(a1 + 3636) &= v13;
  if ( v14 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3640));
    _InterlockedExchange((volatile __int32 *)(a1 + 3760), 0);
  }
  return a2;
}
