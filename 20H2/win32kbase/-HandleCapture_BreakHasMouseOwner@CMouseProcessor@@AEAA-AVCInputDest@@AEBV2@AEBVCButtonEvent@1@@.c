/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00293D8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00AB6A0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00B39E0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  char v18; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  HWND WindowHandle; // rax

  v6 = 1LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2, a3, a4);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3568));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3568));
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
    v18 = 0;
    goto LABEL_17;
  }
  v18 = CInputDest::operator==(a1 + 3568, a3);
LABEL_17:
  if ( !v18 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest(a3, 2LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_7:
  v13 = *(unsigned int *)(*(_QWORD *)(a4 + 8) + 112LL);
  if ( (v13 & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(a1, WindowHandle, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = *(_DWORD *)(a4 + 28);
  if ( !v14 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v10, v11, v12);
    v14 = *(_DWORD *)(a4 + 28);
  }
  v15 = ~v14;
  v16 = (v15 & *(_DWORD *)(a1 + 3564)) == 0;
  *(_DWORD *)(a1 + 3564) &= v15;
  if ( v16 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3568));
    _InterlockedExchange((volatile __int32 *)(a1 + 3688), 0);
  }
  return a2;
}
