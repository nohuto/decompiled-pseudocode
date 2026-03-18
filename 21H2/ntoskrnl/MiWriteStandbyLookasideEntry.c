/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x1402E901C
 * Callers:
 *     MiClearEntireStandbyLookasideList @ 0x1402E89E8 (MiClearEntireStandbyLookasideList.c)
 *     MiReplaceStandbyLookaside @ 0x1402E8AA0 (MiReplaceStandbyLookaside.c)
 *     MiRebuildStandbyLookasideList @ 0x1402E8BCC (MiRebuildStandbyLookasideList.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402C1520 (MiIsDecayPfn.c)
 *     MiSetStandbyLookasideState @ 0x1402E94F0 (MiSetStandbyLookasideState.c)
 *     MiPurgingPageFromLookaside @ 0x1402E9540 (MiPurgingPageFromLookaside.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(ULONG_PTR *a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v4 = *a1;
  *a1 = a3;
  if ( v4 != -1LL && !MiIsDecayPfn(v4) )
    MiPurgingPageFromLookaside(v5);
  if ( a3 != -1LL && !MiIsDecayPfn(a3) )
    MiSetStandbyLookasideState(v6, 1LL);
}
