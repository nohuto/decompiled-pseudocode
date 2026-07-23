/*
 * XREFs of MiGetVadCacheAttribute @ 0x14055BFC0
 * Callers:
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiProcessVaContiguityInformation @ 0x140552500 (MiProcessVaContiguityInformation.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6264 (MiReferenceIncomingPhysicalPages.c)
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
