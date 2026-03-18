/*
 * XREFs of PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A70F20
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x14098C2E0 (EmClientQueryRuleState.c)
 */

__int64 PopReadErrataDisablePrimaryDeviceFastResume()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  PopErrataDisablePrimaryDeviceFastResume = 0;
  result = EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v1);
  if ( v1 == 2 )
    PopErrataDisablePrimaryDeviceFastResume = 1;
  return result;
}
