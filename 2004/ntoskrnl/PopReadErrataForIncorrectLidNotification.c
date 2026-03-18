/*
 * XREFs of PopReadErrataForIncorrectLidNotification @ 0x140A71258
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x14098C2E0 (EmClientQueryRuleState.c)
 */

__int64 PopReadErrataForIncorrectLidNotification()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( PopPlatformAoAc )
  {
    v1 = 1;
    result = EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v1);
    if ( v1 == 2 )
      PopErrataReportingIncorrectLidState = 1;
  }
  return result;
}
