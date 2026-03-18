/*
 * XREFs of CmpPerformTrustClassAccessCheck @ 0x14035DB14
 * Callers:
 *     CmpJoinClassOfTrust @ 0x14035DA98 (CmpJoinClassOfTrust.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPerformTrustClassAccessCheck(__int64 a1, char a2)
{
  if ( a2 && (*(_DWORD *)(a1 + 4152) & 1) == 0 )
    return 3221225485LL;
  else
    return 0LL;
}
