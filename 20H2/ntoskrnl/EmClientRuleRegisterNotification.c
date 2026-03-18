/*
 * XREFs of EmClientRuleRegisterNotification @ 0x14088C830
 * Callers:
 *     <none>
 * Callees:
 *     EmpClientRuleRegisterNotification @ 0x14088C854 (EmpClientRuleRegisterNotification.c)
 */

__int64 __fastcall EmClientRuleRegisterNotification(void *a1)
{
  if ( a1 )
    return EmpClientRuleRegisterNotification(a1);
  else
    return 3221225485LL;
}
