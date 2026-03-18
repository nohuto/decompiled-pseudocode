/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1406038FC
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x1406037F0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140603890 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x140603DE0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x140603ED0 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportRuleViolation @ 0x140603FF0 (CarReportRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x140604280 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1406042D0 (CarSetCustomRuleIdRange.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CarFindRuleClassConfigurationEntryByRuleClassId(__int64 a1, int a2)
{
  __int64 *i; // rax

  for ( i = (__int64 *)CarConfigurationEntries; ; i = (__int64 *)*i )
  {
    if ( i == &CarConfigurationEntries )
      return 0LL;
    if ( *((_DWORD *)i - 21) == a2 )
      break;
  }
  return i - 11;
}
