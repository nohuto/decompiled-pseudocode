/*
 * XREFs of PopDispatchNotifications @ 0x14066FA60
 * Callers:
 *     <none>
 * Callees:
 *     PopDispatchNotificationsToList @ 0x14066F714 (PopDispatchNotificationsToList.c)
 */

struct _KTHREAD *PopDispatchNotifications()
{
  WNF_STATE_NAME **v0; // rbx
  __int64 v1; // rdi
  struct _KTHREAD *result; // rax

  PopDispatchNotificationsToList((WNF_STATE_NAME **)&PopPowerSettings);
  v0 = (WNF_STATE_NAME **)&PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    result = PopDispatchNotificationsToList(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
