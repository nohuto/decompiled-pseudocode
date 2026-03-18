/*
 * XREFs of MiDereferenceCombineCrc @ 0x1406F33E4
 * Callers:
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDereferenceCombineCrc(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0x100 )
    return 0LL;
  MiDecrementCombinedPte(0LL, v1 + 48);
  return 1LL;
}
