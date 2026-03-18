/*
 * XREFs of ExtEnvFreeMemory @ 0x14052268C
 * Callers:
 *     IvtFreeScalableModePasidTables @ 0x14052E768 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x140530DE0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x140531560 (HsaCreateDevice.c)
 *     IvtDeleteDevice @ 0x140531660 (IvtDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x140532200 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405370FC (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x140537770 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x14053799C (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x1405386C4 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140509594 (HalpMmIsInsideHalVa.c)
 */

void __fastcall ExtEnvFreeMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(v4) = 0;
  if ( (int)HalpMmIsInsideHalVa(a2, (bool *)&v4) >= 0 && !(_BYTE)v4 )
    HalpMmAllocCtxFree(v2, v3);
}
