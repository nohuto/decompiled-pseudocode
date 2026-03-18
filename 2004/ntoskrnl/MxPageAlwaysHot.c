/*
 * XREFs of MxPageAlwaysHot @ 0x140A3F200
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140A3E740 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140542430 (MiSearchChannelTable.c)
 */

_BOOL8 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  return qword_140C4DCD0 && *((_BYTE *)MiSearchChannelTable(a1) + 14) != 1;
}
