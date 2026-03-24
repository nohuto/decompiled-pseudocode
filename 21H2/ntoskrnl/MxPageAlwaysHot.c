/*
 * XREFs of MxPageAlwaysHot @ 0x140A44FC0
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140A44500 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140547900 (MiSearchChannelTable.c)
 */

_BOOL8 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  return qword_140C4DED0 && *((_BYTE *)MiSearchChannelTable(a1) + 14) != 1;
}
