/*
 * XREFs of MiFreePartitionPageRun @ 0x1408DB194
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x14030AA48 (MiFreeMdlPageRun.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     MiInsertHugeRangeInList @ 0x140533848 (MiInsertHugeRangeInList.c)
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
      return _InterlockedExchangeAdd64(&qword_140C4EFF8, -result);
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
