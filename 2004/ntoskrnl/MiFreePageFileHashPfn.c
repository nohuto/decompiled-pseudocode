/*
 * XREFs of MiFreePageFileHashPfn @ 0x1405580DC
 * Callers:
 *     MiFreePageFileHashPfns @ 0x1402F35EC (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x58000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(a1, 2);
}
