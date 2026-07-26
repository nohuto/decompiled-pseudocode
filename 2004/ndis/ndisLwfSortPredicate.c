/*
 * XREFs of ndisLwfSortPredicate @ 0x1C012504C
 * Callers:
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C0124208 (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 * Callees:
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 */

bool __fastcall ndisLwfSortPredicate(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  bool v5; // cf
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // dx

  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 != *(_DWORD *)(a2 + 48) )
    return v3 > *(_DWORD *)(a2 + 48);
  v5 = *(_DWORD *)a2 < *(_DWORD *)a1;
  if ( *(_DWORD *)a2 == *(_DWORD *)a1
    && (v6 = *(_WORD *)(a2 + 4), v5 = v6 < *(_WORD *)(a1 + 4), v6 == *(_WORD *)(a1 + 4))
    && (v7 = *(_WORD *)(a2 + 6), v5 = v7 < *(_WORD *)(a1 + 6), v7 == *(_WORD *)(a1 + 6)) )
  {
    return memcmp((const void *)(a2 + 8), (const void *)(a1 + 8), 8uLL) < 0;
  }
  else
  {
    return v5;
  }
}
