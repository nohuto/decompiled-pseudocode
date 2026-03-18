/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C005F7C4
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_ @ 0x1C00D0A00 (_lambda_ff1e2decc02ac9a9192b85b2339d637c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C005F858 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this)
{
  char v2; // al
  char v3; // al
  _DWORD *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v2 = *((_BYTE *)this + 112);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v2 = *((_BYTE *)this + 112);
  }
  v3 = v2 - 1;
  *((_BYTE *)this + 112) = v3;
  if ( !v3 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 10);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v5);
    if ( (*((_BYTE *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*v4 + 25) & 1) != 0
      || CInputDest::TestWindowFlag(this, 0x480u)
      || CInputDest::TestWindowFlag(this, 0x380u) )
    {
      CInputDest::SetEmpty(this);
    }
  }
}
