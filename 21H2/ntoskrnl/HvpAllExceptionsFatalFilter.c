/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140873720
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140732C0C (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x1404EE0F4 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
