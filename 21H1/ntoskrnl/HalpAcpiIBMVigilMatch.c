/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140A8C000
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
