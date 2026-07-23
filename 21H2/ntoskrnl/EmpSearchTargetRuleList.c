/*
 * XREFs of EmpSearchTargetRuleList @ 0x14026FDDC
 * Callers:
 *     EmpUpdateRuleState @ 0x14026FE04 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x140889F54 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x1409910E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140991340 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140A47ADC (EmpParseTargetRules.c)
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
