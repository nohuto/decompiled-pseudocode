/*
 * XREFs of ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x18021F36C
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x180136D3C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x180222F6C (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
                      a1,
                      _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_180508739, 0LL, 0LL, 2u, &v2);
}
