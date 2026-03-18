/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x14086E69C
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x14071EA4C (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x1404E8714 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck((__int64)a1, *(int *)*a1, *a1, a1[1]);
}
