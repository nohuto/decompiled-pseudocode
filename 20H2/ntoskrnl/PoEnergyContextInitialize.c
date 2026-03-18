/*
 * XREFs of PoEnergyContextInitialize @ 0x1406D64D4
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PopEtInit @ 0x140A70A24 (PopEtInit.c)
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
    result = PopEtGlobals + 768;
    a1[56] = PopEtGlobals + 768;
  }
  return result;
}
