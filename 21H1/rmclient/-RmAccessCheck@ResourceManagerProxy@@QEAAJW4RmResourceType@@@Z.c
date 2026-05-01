/*
 * XREFs of ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z @ 0x18000FD9C
 * Callers:
 *     RmAccessCheckOnSelf @ 0x180010180 (RmAccessCheckOnSelf.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAccessCheck(__int64 a1, int a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015AD8, 4u, 0LL, *(_QWORD *)(a1 + 8), a2);
}
