/*
 * XREFs of MiCommitmentAvailable @ 0x140332924
 * Callers:
 *     MiPrefetchNormally @ 0x1403328A4 (MiPrefetchNormally.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 7592);
  v2 = *(_QWORD *)(a1 + 7464);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}
