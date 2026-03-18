/*
 * XREFs of PopDirectedDripsQueryEmSettings @ 0x1408DEEC0
 * Callers:
 *     PopDirectedDripsQueryPs4Support @ 0x1407B63B0 (PopDirectedDripsQueryPs4Support.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 */

__int64 __fastcall PopDirectedDripsQueryEmSettings(char *a1)
{
  char v2; // bl
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  v4 = 1;
  result = EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DIRECTED_DRIPS_CPU_MATCH, &v4);
  if ( (int)result < 0 || v4 != 2 )
    v2 = 0;
  *a1 = v2;
  return result;
}
