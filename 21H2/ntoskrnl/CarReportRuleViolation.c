/*
 * XREFs of CarReportRuleViolation @ 0x140603FF0
 * Callers:
 *     <none>
 * Callees:
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1406038FC (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 */

__int64 __fastcall CarReportRuleViolation(__int64 a1)
{
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  int v2; // edx
  int v3; // r10d

  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
  if ( RuleClassConfigurationEntryByRuleClassId )
    return CarReportRuleViolationForTriage(
             *(_DWORD *)RuleClassConfigurationEntryByRuleClassId,
             v3 | (unsigned int)((v2 << 16) + 0x10000));
  else
    return 3221226021LL;
}
