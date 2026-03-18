/*
 * XREFs of MiFreePageFileHashPfn @ 0x14055BAAC
 * Callers:
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiFreePageFileHashPfns @ 0x140265F8C (MiFreePageFileHashPfns.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x58000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(a1, 2);
}
