/*
 * XREFs of MiLargePageMovesInProgress @ 0x1405516A4
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 */

_BOOL8 __fastcall MiLargePageMovesInProgress(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 16LL)
                   + 4544LL * *((unsigned int *)MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 2)
                   + 4284) != 0;
}
