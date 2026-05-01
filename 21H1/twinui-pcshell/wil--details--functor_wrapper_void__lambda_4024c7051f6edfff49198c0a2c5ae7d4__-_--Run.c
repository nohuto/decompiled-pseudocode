/*
 * XREFs of wil::details::functor_wrapper_void__lambda_4024c7051f6edfff49198c0a2c5ae7d4__&_::Run @ 0x1804327A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x180432AD4 (-StartUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_4024c7051f6edfff49198c0a2c5ae7d4____::Run(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  AppUsageTelemetry::StartUsageTracking();
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 256LL) + 24LL))(*(_QWORD *)(*(_QWORD *)v1 + 256LL));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 256LL) + 32LL))(*(_QWORD *)(*(_QWORD *)v1 + 256LL));
  return 0LL;
}
