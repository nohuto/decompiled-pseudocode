/*
 * XREFs of ?CrmpActivityStop@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180003E90
 * Callers:
 *     CrmActivityStop @ 0x180003E00 (CrmActivityStop.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityStop(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  NdrClientCall3(
    (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
    7u,
    0LL,
    *((_QWORD *)a1 + 1),
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL));
}
