/*
 * XREFs of EmpSearchRuleDatabase @ 0x1402DCBFC
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x14092C834 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140B0C230 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140B0C87C (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B0CDAC (EmpParseTargetRules.c)
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
