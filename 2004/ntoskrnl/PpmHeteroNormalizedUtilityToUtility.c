/*
 * XREFs of PpmHeteroNormalizedUtilityToUtility @ 0x140572E8C
 * Callers:
 *     PpmParkDistributeUtility @ 0x14021F670 (PpmParkDistributeUtility.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroNormalizedUtilityToUtility(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 56);
  result = a2;
  if ( v2 )
    return (a2 << 16) / v2;
  return result;
}
