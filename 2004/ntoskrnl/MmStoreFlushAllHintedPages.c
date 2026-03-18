/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406D29EC
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1403112E0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x14031056C (MiFlushAllHintedStorePages.c)
 */

__int64 __fastcall MmStoreFlushAllHintedPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiFlushAllHintedStorePages(a1, a2, a3, a4);
}
