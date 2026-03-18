/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x140572FCC
 * Callers:
 *     PpmParkDistributeUtility @ 0x14021F670 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeHeteroResponse @ 0x1405727D0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityToNormalizedUtility(__int64 a1, unsigned int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 )
    return (v2 * a2) >> 16;
  return a2;
}
