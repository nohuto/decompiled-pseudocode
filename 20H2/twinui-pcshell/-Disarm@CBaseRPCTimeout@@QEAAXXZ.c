/*
 * XREFs of ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18017B934
 * Callers:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180179868 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ??1CRPCTimeout@@QEAA@XZ @ 0x180179F9C (--1CRPCTimeout@@QEAA@XZ.c)
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180180040 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180193A08 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator() @ 0x18026A640 (_lambda_4b23a44972d25bfc52aa58256fd4c9b9_--operator().c)
 *     _lambda_cf21efff913cfa189e82bd10310d9d23_::operator() @ 0x18026AE20 (_lambda_cf21efff913cfa189e82bd10310d9d23_--operator().c)
 *     ?OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerMenuItemsRequestedEventArgs@3456@@Z @ 0x180273330 (-OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18027D9B0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18027DF94 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x18028D3A8 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     _lambda_476f18e24aa1fbee26857ac5b809e782_::operator() @ 0x18028D7B8 (_lambda_476f18e24aa1fbee26857ac5b809e782_--operator().c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18028F274 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18028F8E4 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x1802C9BF8 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator().c)
 *     _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x1802DA9A4 (_lambda_1c848fc40f8d66460ef5049a4e343f17_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x1802DBA00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___--Run.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseRPCTimeout::Disarm(CBaseRPCTimeout *this)
{
  void *v2; // rdx

  if ( *((int *)this + 2) >= 0 )
  {
    *((_DWORD *)this + 2) = -2147467259;
    CoDisableCallCancellation(0LL);
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      DeleteTimerQueueTimer(0LL, v2, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
}
