/*
 * XREFs of CarDeleteTelemetryData @ 0x140603744
 * Callers:
 *     CarCreateTelemetryData @ 0x14060369C (CarCreateTelemetryData.c)
 *     CarDeregisterRuleClassConfiguration @ 0x1406037F0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140603890 (CarDeregisterRuleOverride.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 *     CarLiveDump @ 0x1406053C0 (CarLiveDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteTelemetryData(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x4E726143u);
      *a1 = 0LL;
    }
  }
}
