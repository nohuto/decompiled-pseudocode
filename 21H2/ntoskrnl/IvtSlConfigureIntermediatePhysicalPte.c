/*
 * XREFs of IvtSlConfigureIntermediatePhysicalPte @ 0x1404E5010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall IvtSlConfigureIntermediatePhysicalPte(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx

  if ( *a1 )
    return 0;
  v5 = 1LL;
  v6 = 2LL;
  do
  {
    v7 = v5++ | *a1;
    *a1 = v7;
    --v6;
  }
  while ( v6 );
  *a1 = v7 ^ (a3 ^ v7) & 0xFFFFFFFFFF000LL;
  return 1;
}
