/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140A912A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B104 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
