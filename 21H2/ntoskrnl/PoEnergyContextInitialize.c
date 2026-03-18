/*
 * XREFs of PoEnergyContextInitialize @ 0x1406D811C
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PopEtInit @ 0x140B27E7C (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEnergyContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  a1[55] = 0LL;
  a1[54] = 0LL;
  result = PopEtGlobals;
  if ( PopEtGlobals )
  {
    result = PopEtGlobals + 784;
    a1[56] = PopEtGlobals + 784;
  }
  return result;
}
