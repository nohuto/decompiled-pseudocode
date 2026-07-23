/*
 * XREFs of HalpWheaNativeReadMsr @ 0x140365250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpWheaNativeReadMsr(__int64 a1, unsigned int a2)
{
  return __readmsr(a2);
}
