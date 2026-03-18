/*
 * XREFs of PpmIdleRollbackCoordinatedSelection @ 0x1405651FC
 * Callers:
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140564670 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140564940 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleRollbackCoordinatedSelection(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 result; // rax

  for ( LODWORD(v2) = *(_DWORD *)(a1 + 4);
        (unsigned int)v2 > a2;
        *(_DWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v2) + PpmPlatformStates + 320) = 0 )
  {
    v2 = (unsigned int)(v2 - 1);
    result = PpmPlatformStates;
  }
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
