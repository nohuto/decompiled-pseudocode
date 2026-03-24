/*
 * XREFs of ACPIValidateGPEEventIndex @ 0x1C00560EC
 * Callers:
 *     ACPIGpeValidIndex @ 0x1C001A140 (ACPIGpeValidIndex.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIValidateGPEEventIndex(unsigned int a1, unsigned int a2, int a3)
{
  return a1 >= a2 && a1 < a2 + 8 * a3;
}
