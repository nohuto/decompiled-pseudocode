/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x14087018C
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407207EC (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x1404E8D44 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck((__int64)a1, *(int *)*a1, *a1, a1[1]);
}
