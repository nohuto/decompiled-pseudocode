/*
 * XREFs of ExtEnvFreeMemory @ 0x1404CFF9C
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1404DCB30 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404DD2A0 (HsaCreateDevice.c)
 *     IvtDeleteDevice @ 0x1404DD3B0 (IvtDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x1404DDF50 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E1D7C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E23B0 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E2610 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x1404E31E4 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x1404B7464 (HalpMmIsInsideHalVa.c)
 */

__int64 __fastcall ExtEnvFreeMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  LOBYTE(v5) = 0;
  result = HalpMmIsInsideHalVa(a2, (bool *)&v5);
  if ( (int)result >= 0 && !(_BYTE)v5 )
    return HalpMmAllocCtxFree(v3, v4);
  return result;
}
