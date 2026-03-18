/*
 * XREFs of MiFreePartitionPageRun @ 0x14098194C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 */

__int64 __fastcall MiFreePartitionPageRun(ULONG_PTR *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int i; // esi

  result = MiIsPfn(a2);
  if ( (_DWORD)result )
  {
    result = MiFreeMdlPageRun(a2, a3, a4 != 0);
    if ( result && a1 == &MiSystemPartition )
      return _InterlockedExchangeAdd64(&qword_140C53530, -result);
  }
  else
  {
    v9 = (a2 >> 18) & 0x3FFFFF;
    v10 = a3 >> 18;
    for ( i = a4 != 0 ? 2 : 0; v10; --v10 )
    {
      MiInsertHugeRangeInList(0LL, v9, i);
      result = (v9 ^ (v9 + 1)) & 0x3FFFFF;
      v9 ^= result;
    }
  }
  return result;
}
