/*
 * XREFs of HalpSaveDmaControllerState @ 0x1409918F0
 * Callers:
 *     HalpAcpiPreSleep @ 0x14099175C (HalpAcpiPreSleep.c)
 * Callees:
 *     <none>
 */

__int64 HalpSaveDmaControllerState()
{
  __int64 result; // rax

  for ( result = HalpDmaControllers; (__int64 *)result != &HalpDmaControllers; result = *(_QWORD *)result )
    *(_BYTE *)(result + 216) = 0;
  return result;
}
