/*
 * XREFs of _RtlUnsubscribeWnfStateChangeNotification@4 @ 0x4B2DE990
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 */

int __thiscall RtlUnsubscribeWnfStateChangeNotification(void *this, int a2)
{
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  return RtlpRemoveUserSubFromNameSub(&v3);
}
