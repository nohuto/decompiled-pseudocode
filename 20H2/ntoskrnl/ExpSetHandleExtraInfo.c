/*
 * XREFs of ExpSetHandleExtraInfo @ 0x14094F3A8
 * Callers:
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     ExCreateHandleEx @ 0x140657360 (ExCreateHandleEx.c)
 *     ExpDuplicateSingleHandle @ 0x1406F5460 (ExpDuplicateSingleHandle.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ExpFreeTablePagedPool @ 0x140631ABC (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x1406F4B0C (ExpAllocateTablePagedPool.c)
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
      ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x800uLL);
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
