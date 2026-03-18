/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C00A6EEC
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_ @ 0x1C00D11A0 (_lambda_ff1e2decc02ac9a9192b85b2339d637c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C00A6F80 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  char v6; // al
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v5 = *((_BYTE *)this + 112);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v5 = *((_BYTE *)this + 112);
  }
  v6 = v5 - 1;
  *((_BYTE *)this + 112) = v6;
  if ( !v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 10);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v11,
      a2,
      a3,
      a4);
    if ( (*((_BYTE *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*v7 + 25) & 1) != 0
      || CInputDest::TestWindowFlag(this, 0x480u)
      || CInputDest::TestWindowFlag(this, 0x380u) )
    {
      CInputDest::SetEmpty(this, v8, v9, v10);
    }
  }
}
