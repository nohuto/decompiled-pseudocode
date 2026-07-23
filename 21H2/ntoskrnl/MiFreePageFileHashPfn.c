/*
 * XREFs of MiFreePageFileHashPfn @ 0x14055D7BC
 * Callers:
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiFreePageFileHashPfns @ 0x140261204 (MiFreePageFileHashPfns.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x58000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  return MiInsertPageInFreeOrZeroedList(a1, 2);
}
