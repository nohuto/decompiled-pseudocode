/*
 * XREFs of HalpNumaQueryProximityNode @ 0x1403CF960
 * Callers:
 *     HalpNumaAddRangeProximity @ 0x1404D1EA0 (HalpNumaAddRangeProximity.c)
 *     HalpNumaParseHmat @ 0x140A8E0E4 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaQueryProximityNode(int a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned int v3; // r9d

  v2 = 0;
  v3 = *(_DWORD *)(HalpNumaConfig + 56);
  if ( !v3 )
    return 3221226021LL;
  while ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * v2) != a1 )
  {
    if ( ++v2 >= v3 )
      return 3221226021LL;
  }
  *a2 = v2;
  return 0LL;
}
