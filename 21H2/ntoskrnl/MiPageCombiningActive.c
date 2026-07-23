/*
 * XREFs of MiPageCombiningActive @ 0x14030E570
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140260F80 (MiSignalLargePageRebuild.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6512) == 0;
  else
    v1 = dword_140C4E584 == 0;
  return !v1;
}
