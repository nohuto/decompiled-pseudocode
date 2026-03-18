/*
 * XREFs of PopEvaluateInputSuppressionRequired @ 0x140A71278
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x14098C2E0 (EmClientQueryRuleState.c)
 */

void PopEvaluateInputSuppressionRequired()
{
  int v0; // [rsp+30h] [rbp+8h] BYREF

  if ( PopPlatformAoAc )
  {
    if ( PopLidStateForInputSuppressionOverride != -1 )
      PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
    v0 = 1;
    EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v0);
    PopEnableInputSuppression = v0 == 2;
    if ( v0 != 2 && PopEnableInputSuppressionOverride != -1 )
      PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
  }
}
