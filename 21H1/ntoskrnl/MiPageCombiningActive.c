/*
 * XREFs of MiPageCombiningActive @ 0x140353320
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140350180 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6512) == 0;
  else
    v1 = dword_140C4E484 == 0;
  return !v1;
}
