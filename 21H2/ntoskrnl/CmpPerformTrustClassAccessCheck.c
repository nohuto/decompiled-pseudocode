/*
 * XREFs of CmpPerformTrustClassAccessCheck @ 0x1402562E0
 * Callers:
 *     CmpJoinClassOfTrust @ 0x140256264 (CmpJoinClassOfTrust.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPerformTrustClassAccessCheck(__int64 a1, char a2)
{
  if ( !a2 || (*(_DWORD *)(a1 + 4112) & 1) != 0 )
    return 0LL;
  else
    return 3221225485LL;
}
