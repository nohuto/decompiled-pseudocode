/*
 * XREFs of MxPageAlwaysHot @ 0x140A45FC8
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140A45508 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140541DE0 (MiSearchChannelTable.c)
 */

_BOOL8 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  return qword_140C4DE10 && *((_BYTE *)MiSearchChannelTable(a1) + 14) != 1;
}
