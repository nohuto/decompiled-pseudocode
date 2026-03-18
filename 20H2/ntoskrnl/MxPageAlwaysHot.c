/*
 * XREFs of MxPageAlwaysHot @ 0x140A454A0
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140A449E0 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140545E00 (MiSearchChannelTable.c)
 */

_BOOL8 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  return qword_140C4DD50 && *((_BYTE *)MiSearchChannelTable(a1) + 14) != 1;
}
