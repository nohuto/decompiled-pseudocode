/*
 * XREFs of _RtlUnsubscribeWnfNotificationWithCompletionCallback@12 @ 0x4B33C060
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 */

NTSTATUS __thiscall RtlUnsubscribeWnfNotificationWithCompletionCallback(void *this, _DWORD *a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = (int)this;
  if ( !a2 || !a3 )
    return -1073741811;
  if ( a2[14] )
    return -1073740008;
  a2[14] = a3;
  a2[15] = a4;
  return RtlpRemoveUserSubFromNameSub((char *)a2[3], a2, &v5);
}
