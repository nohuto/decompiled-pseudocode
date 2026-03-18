/*
 * XREFs of ExtEnvFreeMemory @ 0x1404D044C
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1404DD0D0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404DD860 (HsaCreateDevice.c)
 *     IvtDeleteDevice @ 0x1404DD970 (IvtDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x1404DE510 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E233C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E2960 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E2BC0 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x1404E3794 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x1404B7B44 (HalpMmIsInsideHalVa.c)
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
