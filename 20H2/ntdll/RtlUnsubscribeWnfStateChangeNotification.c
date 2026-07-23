/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180062630
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800626EC (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
}
