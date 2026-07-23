/*
 * XREFs of ExtEnvFreeMemory @ 0x1404D55FC
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1404E2300 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404E2AE0 (HsaCreateDevice.c)
 *     IvtDeleteDevice @ 0x1404E2C30 (IvtDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E37D0 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E7C70 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E7F20 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x1404E8AF4 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x1404BCC64 (HalpMmIsInsideHalVa.c)
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
