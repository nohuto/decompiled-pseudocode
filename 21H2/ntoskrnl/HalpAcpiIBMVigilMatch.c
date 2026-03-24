/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140A8E100
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B354 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
