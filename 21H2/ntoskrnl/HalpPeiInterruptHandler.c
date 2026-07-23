/*
 * XREFs of HalpPeiInterruptHandler @ 0x1404CFD10
 * Callers:
 *     <none>
 * Callees:
 *     HalpCheckAndReportGhes @ 0x1404CFB88 (HalpCheckAndReportGhes.c)
 */

char __fastcall HalpPeiInterruptHandler(__int64 a1, __int64 a2)
{
  if ( HalpGenericPeiInitDone && a2 )
    HalpCheckAndReportGhes(a2);
  return 1;
}
