/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000C378
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000CAF4 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180009090 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017740 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  int v6; // eax
  struct _TP_TIMER *Ptr; // rsi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v9; // r14
  DWORD LastError; // ebx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  struct wil_details_FeatureReportingCache *v12; // [rsp+28h] [rbp-20h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v6 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(pv + 1);
      Source = a2;
      v12 = a3;
      wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&pv[6], &Source, 0x10uLL);
      if ( !LOBYTE(pv[3].Ptr) )
      {
        Ptr = (struct _TP_TIMER *)pv[2].Ptr;
        if ( Ptr )
          goto LABEL_11;
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        v9 = (struct _TP_TIMER *)pv[2].Ptr;
        Ptr = ThreadpoolTimer;
        if ( v9 )
        {
          LastError = GetLastError();
          wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v9);
          SetLastError(LastError);
        }
        pv[2].Ptr = Ptr;
        if ( Ptr )
        {
LABEL_11:
          pftDueTime = (struct _FILETIME)-3000000000LL;
          SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0x124F8u);
          LOBYTE(pv[3].Ptr) = 1;
        }
      }
      if ( pv != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(pv + 1);
    }
  }
}
