/*
 * XREFs of MiPageCombiningActive @ 0x140303820
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140272FE0 (MiSignalLargePageRebuild.c)
 *     MiAbortCombineScan @ 0x140303770 (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6512) == 0;
  else
    v1 = dword_140C4E544 == 0;
  return !v1;
}
