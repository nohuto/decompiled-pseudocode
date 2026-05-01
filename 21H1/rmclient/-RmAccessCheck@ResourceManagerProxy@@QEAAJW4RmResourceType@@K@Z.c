/*
 * XREFs of ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z @ 0x18000FE0C
 * Callers:
 *     RmAccessCheck @ 0x180010140 (RmAccessCheck.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAccessCheck(__int64 a1, int a2, int a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015AD8, 3u, 0LL, *(_QWORD *)(a1 + 8), a2, a3);
}
