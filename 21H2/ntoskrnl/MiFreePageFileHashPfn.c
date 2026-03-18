/*
 * XREFs of MiFreePageFileHashPfn @ 0x1405BC4A4
 * Callers:
 *     MiFreePageFileHashPfns @ 0x140268C20 (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x220000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(a1, 2);
}
