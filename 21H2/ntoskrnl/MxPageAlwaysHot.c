/*
 * XREFs of MxPageAlwaysHot @ 0x140A45FC0
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140A45500 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140547B40 (MiSearchChannelTable.c)
 */

_BOOL8 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  return qword_140C4DF10 && *((_BYTE *)MiSearchChannelTable(a1) + 14) != 1;
}
