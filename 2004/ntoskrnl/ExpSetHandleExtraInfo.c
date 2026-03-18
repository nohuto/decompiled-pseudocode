/*
 * XREFs of ExpSetHandleExtraInfo @ 0x1409495E8
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1405D0990 (ExpDuplicateSingleHandle.c)
 *     ExCreateHandleEx @ 0x1405E83C0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x1405D052C (ExpAllocateTablePagedPool.c)
 *     ExpLookupHandleTableEntry @ 0x1405F62C0 (ExpLookupHandleTableEntry.c)
 *     ExpFreeTablePagedPool @ 0x14065CAFC (ExpFreeTablePagedPool.c)
 */

__int64 __fastcall ExpSetHandleExtraInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 v9; // rdx
  void *TablePagedPool; // rax

  v5 = (unsigned __int8)((unsigned int)a2 >> 2);
  v6 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v9 = *v6;
  if ( !*v6 )
  {
    TablePagedPool = ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 0x800uLL);
    v9 = (volatile signed __int64)TablePagedPool;
    if ( !TablePagedPool )
      return 3221225626LL;
    if ( _InterlockedCompareExchange64(v7, (signed __int64)TablePagedPool, 0LL) )
    {
      ExpFreeTablePagedPool(*(struct _KPROCESS **)(a1 + 16), TablePagedPool, 2048LL);
      v9 = *v7;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
    }
    if ( !v9 )
      return 3221225626LL;
  }
  *(_QWORD *)(v9 + 8 * v5) = *a3;
  return 0LL;
}
