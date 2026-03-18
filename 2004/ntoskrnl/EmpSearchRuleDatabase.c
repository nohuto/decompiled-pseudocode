/*
 * XREFs of EmpSearchRuleDatabase @ 0x1402DCC2C
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x140886D04 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x14098C2E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14098D350 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140A40D38 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140A41390 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140A418EC (EmpParseTargetRules.c)
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
