/*
 * XREFs of MiFreePageFileHashPfn @ 0x140557A8C
 * Callers:
 *     MiFreePageFileHashPfns @ 0x1402402EC (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x58000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(a1, 2);
}
