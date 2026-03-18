/*
 * XREFs of MiFreePartitionPageRun @ 0x1408D7A34
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14055B400 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiIsPfn @ 0x140206280 (MiIsPfn.c)
 *     MiFreeMdlPageRun @ 0x1403175B8 (MiFreeMdlPageRun.c)
 *     MiInsertHugeRangeInList @ 0x14052E138 (MiInsertHugeRangeInList.c)
 */

signed __int64 __fastcall MiFreePartitionPageRun(ULONG_PTR *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  signed __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int64 i; // rdi

  result = MiIsPfn(a2);
  if ( (_DWORD)result )
  {
    result = MiFreeMdlPageRun(a2, a3, a4 == 1);
    if ( result && a1 == &MiSystemPartition )
      return _InterlockedExchangeAdd64(&qword_140C4EDB8, -result);
  }
  else
  {
    v9 = (a2 >> 18) & 0x3FFFF;
    for ( i = a3 >> 18; i; --i )
    {
      MiInsertHugeRangeInList(v9, a4 == 1, 0LL);
      result = ((unsigned int)v9 ^ ((_DWORD)v9 + 1)) & 0x3FFFF;
      LODWORD(v9) = result ^ v9;
    }
  }
  return result;
}
