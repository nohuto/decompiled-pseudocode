/*
 * XREFs of MiPageCombiningActive @ 0x1402F7340
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1402F41A4 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6512) == 0;
  else
    v1 = dword_140C4E344 == 0;
  return !v1;
}
