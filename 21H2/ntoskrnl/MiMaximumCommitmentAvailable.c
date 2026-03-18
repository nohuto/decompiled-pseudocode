/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x1402693A4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMaximumCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 16008);
  v2 = *(_QWORD *)(a1 + 17256);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}
