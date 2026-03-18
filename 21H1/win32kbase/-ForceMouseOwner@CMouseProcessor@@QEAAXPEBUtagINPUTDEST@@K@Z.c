/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00507E4
 * Callers:
 *     ForceCapture @ 0x1C00507A0 (ForceCapture.c)
 * Callees:
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C005D1A4 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct tagINPUTDEST *v3; // rsi
  _BYTE v5[128]; // [rsp+30h] [rbp-98h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      18,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids,
      a3);
  }
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v5, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3640), (const struct CInputDest *)v5);
    CInputDest::SetEmpty((CInputDest *)v5);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 940, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3640));
    _InterlockedExchange((volatile __int32 *)this + 940, 0);
  }
}
