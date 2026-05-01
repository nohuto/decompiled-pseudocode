/*
 * XREFs of wil::details::functor_wrapper_void__lambda_7e0eba65ec7ba47035c550f2870caa0e__&_::Run @ 0x1804327F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x180432C6C (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_7e0eba65ec7ba47035c550f2870caa0e____::Run(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  AppUsageTelemetry::StopUsageTracking();
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 256LL) + 40LL))(*(_QWORD *)(*(_QWORD *)v1 + 256LL));
  return 0LL;
}
