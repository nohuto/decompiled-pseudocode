/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140A8B590
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403793D4 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
