/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406E41E0
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140331B30 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x14033B114 (MiFlushAllHintedStorePages.c)
 */

__int64 __fastcall MmStoreFlushAllHintedPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiFlushAllHintedStorePages(a1, a2, a3, a4);
}
