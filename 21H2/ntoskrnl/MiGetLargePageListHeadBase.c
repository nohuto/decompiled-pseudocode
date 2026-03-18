/*
 * XREFs of MiGetLargePageListHeadBase @ 0x1405AF190
 * Callers:
 *     MiScrubNodeLargePages @ 0x14097E8C8 (MiScrubNodeLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetLargePageListHeadBase(int a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  return *(_QWORD *)(a2 + 8 * (a6 + 134LL * a3 + 4 * (a4 + 4 * (a5 + 2LL * a1))) + 560);
}
