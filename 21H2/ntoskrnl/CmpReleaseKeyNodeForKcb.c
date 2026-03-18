/*
 * XREFs of CmpReleaseKeyNodeForKcb @ 0x140881426
 * Callers:
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 */

__int64 __fastcall CmpReleaseKeyNodeForKcb(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v2, a2);
  else
    return HvpReleaseCellPaged(v2, a2);
}
