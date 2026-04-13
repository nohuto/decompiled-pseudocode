/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000B970
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000BFC0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180009350 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800171A4 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        __int16 a3,
        int a4)
{
  struct _TP_TIMER *Ptr; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v11; // r14
  DWORD LastError; // ebx
  _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  int Source; // [rsp+28h] [rbp-50h] BYREF
  __int16 v15; // [rsp+2Ch] [rbp-4Ch]
  __int16 v16; // [rsp+2Eh] [rbp-4Ah]
  int v17; // [rsp+30h] [rbp-48h]

  if ( LOBYTE(pv->Ptr)
    && !wil::details::g_processShutdownInProgress
    && !(wil::details::g_pfnDllShutdownInProgress ? wil::details::g_pfnDllShutdownInProgress() : 0) )
  {
    AcquireSRWLockExclusive(pv + 5);
    v16 = 0;
    Source = a2;
    v15 = a3;
    v17 = a4;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&pv[31], &Source, 0xCuLL);
    if ( !LOBYTE(pv[8].Ptr) )
    {
      Ptr = (struct _TP_TIMER *)pv[7].Ptr;
      if ( Ptr )
        goto LABEL_12;
      ThreadpoolTimer = CreateThreadpoolTimer(lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_, pv, 0LL);
      v11 = (struct _TP_TIMER *)pv[7].Ptr;
      Ptr = ThreadpoolTimer;
      if ( v11 )
      {
        LastError = GetLastError();
        wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v11);
        SetLastError(LastError);
      }
      pv[7].Ptr = Ptr;
      if ( Ptr )
      {
LABEL_12:
        pftDueTime = (_FILETIME)-50000000LL;
        SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0x4E2u);
        LOBYTE(pv[8].Ptr) = 1;
      }
    }
    if ( pv != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(pv + 5);
  }
}
