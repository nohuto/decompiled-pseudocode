/*
 * XREFs of EmpSearchTargetRuleList @ 0x1403634B0
 * Callers:
 *     EmpUpdateRuleState @ 0x1403634D8 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14088C854 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x1409930E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140993340 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140A47B8C (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
