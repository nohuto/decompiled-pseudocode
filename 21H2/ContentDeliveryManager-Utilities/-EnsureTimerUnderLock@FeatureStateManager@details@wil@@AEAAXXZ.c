/*
 * XREFs of ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18000B8A8
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000B3BC (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18000BFE0 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017D7C (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureTimerUnderLock(_QWORD *pv)
{
  struct _TP_TIMER *v2; // rcx
  DWORD LastError; // ebp
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v5; // rsi
  PTP_TIMER v6; // r14
  DWORD v7; // ebx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)pv + 65) )
  {
    v2 = (struct _TP_TIMER *)pv[6];
    if ( v2 )
      goto LABEL_6;
    LastError = GetLastError();
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_, pv, 0LL);
    v5 = (struct _TP_TIMER *)pv[6];
    v6 = ThreadpoolTimer;
    if ( v5 )
    {
      v7 = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
      SetLastError(v7);
    }
    pv[6] = v6;
    SetLastError(LastError);
    v2 = (struct _TP_TIMER *)pv[6];
    if ( v2 )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-3000000000LL;
      SetThreadpoolTimer(v2, &pftDueTime, 0, 0x124F8u);
      *((_BYTE *)pv + 65) = 1;
    }
  }
}
