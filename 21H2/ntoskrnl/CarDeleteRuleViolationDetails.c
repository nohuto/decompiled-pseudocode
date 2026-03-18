/*
 * XREFs of CarDeleteRuleViolationDetails @ 0x140603780
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteRuleViolationDetails(PVOID **a1)
{
  PVOID *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      if ( v2[7] )
      {
        ExFreePoolWithTag(v2[7], 0x4E726143u);
        v2 = *a1;
      }
      if ( v2[3] )
      {
        ExFreePoolWithTag(v2[3], 0x4E726143u);
        v2 = *a1;
      }
      ExFreePoolWithTag(v2, 0x4E726143u);
      *a1 = 0LL;
    }
  }
}
