/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140875CDC
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x14072E7DC (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x1404EC5D4 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
