/*
 * XREFs of ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z @ 0x18000FFD8
 * Callers:
 *     RmGetNotification @ 0x1800102F0 (RmGetNotification.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmGetNotification(
        ResourceManagerProxy *this,
        __int64 a2,
        struct RmExternalResourceNotification *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015AD8, 7u, 0LL, a2, a3);
}
