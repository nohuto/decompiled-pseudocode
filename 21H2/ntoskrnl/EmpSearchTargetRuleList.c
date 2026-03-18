/*
 * XREFs of EmpSearchTargetRuleList @ 0x1402DCBD4
 * Callers:
 *     EmpUpdateRuleState @ 0x1402DCC34 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14092C834 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140B0CDAC (EmpParseTargetRules.c)
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
