/*
 * XREFs of MiPageCombiningActive @ 0x140349844
 * Callers:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiSignalLargePageRebuild @ 0x1402660EC (MiSignalLargePageRebuild.c)
 *     MiAbortCombineScan @ 0x140349794 (MiAbortCombineScan.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6512) == 0;
  else
    v1 = dword_140C4E3C4 == 0;
  return !v1;
}
