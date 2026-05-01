/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0750
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_ @ 0x1800AEEDC (_lambda_e127833a80797c5d08a14d2b9986789f_--__lambda_e127833a80797c5d08a14d2b9986789f_.c)
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x180136EDC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18029FC64 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802AB2E0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ??1?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ @ 0x180324CF8 (--1-$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ.c)
 *     ??_G?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@UEAAPEAXI@Z @ 0x180325A50 (--_G-$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrenc.c)
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x180327F08 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034EF10 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
