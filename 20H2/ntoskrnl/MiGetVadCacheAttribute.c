/*
 * XREFs of MiGetVadCacheAttribute @ 0x14055A2B0
 * Callers:
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D8944 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadCacheAttribute(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = 1LL;
  v2 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  if ( v2 >> 3 != 3 )
    return v2 >> 3 != 1;
  if ( (v2 & 7) != 0 )
    return 2LL;
  return result;
}
