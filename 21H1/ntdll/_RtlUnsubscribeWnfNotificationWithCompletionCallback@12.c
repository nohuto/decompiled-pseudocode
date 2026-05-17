/*
 * XREFs of _RtlUnsubscribeWnfNotificationWithCompletionCallback@12 @ 0x4B33C060
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 */

int __thiscall RtlUnsubscribeWnfNotificationWithCompletionCallback(void *this, int *a2, int a3, int a4)
{
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this;
  if ( !a2 || !a3 )
    return -1073741811;
  if ( a2[14] )
    return -1073740008;
  a2[14] = a3;
  a2[15] = a4;
  return RtlpRemoveUserSubFromNameSub(a2[3], (int)a2, &v5);
}
