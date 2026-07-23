/*
 * XREFs of _RtlUnsubscribeWnfStateChangeNotification@4 @ 0x4B2DE990
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback, (int)&v2);
}
