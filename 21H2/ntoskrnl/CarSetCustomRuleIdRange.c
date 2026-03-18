/*
 * XREFs of CarSetCustomRuleIdRange @ 0x1406042D0
 * Callers:
 *     DifRegisterKernelPlugin @ 0x140604884 (DifRegisterKernelPlugin.c)
 * Callees:
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1406038FC (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 */

__int64 __fastcall CarSetCustomRuleIdRange(__int64 a1)
{
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  unsigned int v2; // r9d
  int v3; // r10d
  int v4; // r11d

  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
  if ( RuleClassConfigurationEntryByRuleClassId )
  {
    *((_DWORD *)RuleClassConfigurationEntryByRuleClassId + 16) = v4;
    *((_DWORD *)RuleClassConfigurationEntryByRuleClassId + 17) = v3;
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v2;
}
