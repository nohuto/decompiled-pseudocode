/*
 * XREFs of ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z @ 0x1800100C4
 * Callers:
 *     RmReleaseResources @ 0x1800103A0 (RmReleaseResources.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmReleaseResources(ResourceManagerProxy *this, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015AD8, 8u, 0LL, &v3);
}
