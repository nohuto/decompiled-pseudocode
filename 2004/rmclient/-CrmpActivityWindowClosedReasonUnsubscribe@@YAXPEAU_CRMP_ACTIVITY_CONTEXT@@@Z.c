/*
 * XREFs of ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004108
 * Callers:
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180003D60 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x1800091CC (-CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z.c)
 *     CrmActivityWindowClosedReasonUnsubscribe @ 0x180011C50 (CrmActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityWindowClosedReasonUnsubscribe(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( *((_DWORD *)a1 + 22) || *((_DWORD *)a1 + 23) )
  {
    NdrClientCall3(
      (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
      9u,
      0LL,
      *((_QWORD *)a1 + 1),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL));
    *((_QWORD *)a1 + 11) = 0LL;
  }
}
