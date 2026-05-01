/*
 * XREFs of ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1804567C4
 * Callers:
 *     ?StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x180456860 (-StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x180456F18 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 */

void __fastcall AppUsageTelemetry::StartUsageTracking(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<AppUsageTelemetry>::get(
                      a1,
                      _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x2000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180526726, 0LL, 0LL, 3u, &v4);
    }
  }
}
