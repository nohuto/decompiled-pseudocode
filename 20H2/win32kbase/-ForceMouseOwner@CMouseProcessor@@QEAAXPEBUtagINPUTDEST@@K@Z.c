/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00BE794
 * Callers:
 *     ForceCapture @ 0x1C00BE750 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C00A898C (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(
        CMouseProcessor *this,
        const struct tagINPUTDEST *a2,
        __int64 a3,
        __int64 a4)
{
  const struct tagINPUTDEST *v4; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v11[128]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      18,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids,
      a3);
  }
  if ( v4 )
  {
    CInputDest::CInputDest((CInputDest *)v11, v4);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3568), (const struct CInputDest *)v11, v6, v7);
    CInputDest::SetEmpty((CInputDest *)v11, v8, v9, v10);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3568), (__int64)a2, a3, a4);
    _InterlockedExchange((volatile __int32 *)this + 922, 0);
  }
}
