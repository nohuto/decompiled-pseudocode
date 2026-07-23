/*
 * XREFs of EmpSearchRuleDatabase @ 0x14026FDA4
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x140889F54 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x1409910E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140991340 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140A46F28 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140A47580 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140A47ADC (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
