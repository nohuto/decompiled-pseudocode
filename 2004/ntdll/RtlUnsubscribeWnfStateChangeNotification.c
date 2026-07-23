/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180062520
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800625DC (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
}
