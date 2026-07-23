/*
 * XREFs of HsaGetDeviceAperture @ 0x1404E39C4
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1404E2300 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E37D0 (HsaFreeRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x1404E4950 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4B00 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     ExtEnvCriticalFailure @ 0x1404D55DC (ExtEnvCriticalFailure.c)
 */

__int64 __fastcall HsaGetDeviceAperture(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = WORD1(a1);
  if ( (unsigned int)v1 >= 0x20 )
    ExtEnvCriticalFailure(a1, 0LL, 0LL, 0LL, 0LL);
  v2 = HsaDeviceApertureRanges[v1];
  result = 0LL;
  if ( v2 )
    return v2 + 72LL * ((unsigned __int16)a1 >> 9);
  return result;
}
