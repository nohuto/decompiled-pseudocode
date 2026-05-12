/*
 * XREFs of RaInitializeTagList @ 0x1C0072B50
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C001874C (RaidUnitAllocateResources.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 */

__int64 __fastcall RaInitializeTagList(__int64 a1, unsigned int a2, __int64 a3)
{
  PVOID Pool; // rax
  unsigned int HighestNodeNumber; // r13d
  unsigned int v8; // ebp
  __int64 v9; // r14
  PVOID v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax

  Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, 16LL * a2, 0x4D546152u, a3);
  *(_QWORD *)(a1 + 64) = Pool;
  if ( !Pool )
    return 3221225495LL;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v8 = HighestNodeNumber + 1;
  v9 = HighestNodeNumber + 1;
  v10 = RaidAllocatePool(NonPagedPoolNxCacheAligned, v9 << 6, 0x4D546152u, a3);
  *(_QWORD *)a1 = v10;
  if ( v10 )
  {
    *(_DWORD *)(a1 + 72) = a2 / v8;
    if ( !(a2 / v8) )
      *(_DWORD *)(a1 + 72) = 1;
    v11 = 0;
    v12 = 0LL;
    do
    {
      InitializeSListHead((PSLIST_HEADER)(v12 + *(_QWORD *)a1));
      v12 += 64LL;
      --v9;
    }
    while ( v9 );
    if ( a2 )
    {
      v13 = 0LL;
      v14 = 0LL;
      do
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + v13 + 8) = v11;
        if ( *(_DWORD *)(a1 + 72) == 0x8000 )
          v15 = v11 >> 15;
        else
          v15 = v11 / *(_DWORD *)(a1 + 72);
        v16 = HighestNodeNumber;
        if ( v15 < v8 )
          v16 = v15;
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)a1 + (v16 << 6)),
          (PSLIST_ENTRY)(v14 + *(_QWORD *)(a1 + 64)));
        ++v11;
        v14 += 16LL;
        v13 += 16LL;
      }
      while ( v11 < a2 );
    }
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0x4D546152u);
    result = 3221225495LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
