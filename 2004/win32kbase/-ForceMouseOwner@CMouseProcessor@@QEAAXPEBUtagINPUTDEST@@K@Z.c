/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C005E2E4
 * Callers:
 *     ForceCapture @ 0x1C005E2A0 (ForceCapture.c)
 * Callees:
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C00473F4 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct tagINPUTDEST *v3; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v7[128]; // [rsp+30h] [rbp-98h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      18,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids,
      a3);
  }
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v7, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3568), (const struct CInputDest *)v7, v5, v6);
    CInputDest::SetEmpty((CInputDest *)v7);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3568));
    _InterlockedExchange((volatile __int32 *)this + 922, 0);
  }
}
