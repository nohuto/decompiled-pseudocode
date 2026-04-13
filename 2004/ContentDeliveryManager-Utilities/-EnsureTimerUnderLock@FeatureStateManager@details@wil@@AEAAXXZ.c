/*
 * XREFs of ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18000BB88
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000B5CC (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18000C1A0 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017A3C (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureTimerUnderLock(_QWORD *pv)
{
  struct _TP_TIMER *v2; // rsi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v4; // rbp
  DWORD LastError; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)pv + 65) )
  {
    v2 = (struct _TP_TIMER *)pv[6];
    if ( v2 )
      goto LABEL_6;
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_, pv, 0LL);
    v4 = (struct _TP_TIMER *)pv[6];
    v2 = ThreadpoolTimer;
    if ( v4 )
    {
      LastError = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
      SetLastError(LastError);
    }
    pv[6] = v2;
    if ( v2 )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-3000000000LL;
      SetThreadpoolTimer(v2, &pftDueTime, 0, 0x124F8u);
      *((_BYTE *)pv + 65) = 1;
    }
  }
}
