/*
 * XREFs of _RtlpCreateHashTable@16 @ 0x4B35B3EB
 * Callers:
 *     _RtlCreateHashTable@12 @ 0x4B35ADE0 (_RtlCreateHashTable@12.c)
 *     _RtlCreateHashTableEx@16 @ 0x4B35AE10 (_RtlCreateHashTableEx@16.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlDeleteHashTable@4 @ 0x4B35AE30 (_RtlDeleteHashTable@4.c)
 */

char __fastcall RtlpCreateHashTable(_RTL_DYNAMIC_HASH_TABLE **a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  _RTL_DYNAMIC_HASH_TABLE *Heap; // esi
  int v7; // eax
  _DWORD *v8; // eax
  unsigned int TableSize; // edx
  _DWORD *v10; // ecx
  unsigned int v11; // eax
  PVOID v12; // eax
  PVOID v13; // ebx
  unsigned int v14; // edi
  int v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  char result; // al
  SIZE_T v19; // [esp-4h] [ebp-20h]
  size_t v20; // [esp-4h] [ebp-20h]
  SIZE_T v21; // [esp-4h] [ebp-20h]
  _DWORD *v23; // [esp+10h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-8h]
  unsigned int v25; // [esp+18h] [ebp-4h]

  v5 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v7 = 0;
  if ( !*a1 )
  {
    LODWORD(v19) = 36;
    Heap = (_RTL_DYNAMIC_HASH_TABLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    if ( !Heap )
      return 0;
    v7 = 1;
  }
  Heap->NumEntries = 0;
  Heap->NonEmptyBuckets = 0;
  Heap->NumEnumerators = 0;
  Heap->Directory = 0;
  Heap->Flags = a4 | v7;
  Heap->TableSize = a2;
  Heap->DivisorMask = v5;
  Heap->Shift = a3;
  Heap->Pivot = 0;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v11, a2 + 127);
    LODWORD(v19) = 64;
    v25 = v11 - 7;
    v24 = (a2 + 127) ^ (1 << v11);
    v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    v13 = v12;
    v23 = v12;
    if ( v12 )
    {
      LODWORD(v20) = 64;
      memset(v12, 0, v20);
      Heap->Directory = v13;
      v14 = 0;
      while ( 1 )
      {
        v15 = 1 << (v14 + 7);
        LODWORD(v21) = 8 * v15;
        v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
        v17 = v16;
        if ( !v16 )
          break;
        if ( v14 >= v25 )
          v15 = v24 + 1;
        for ( ; v15; --v15 )
        {
          v16[1] = v16;
          *v16 = v16;
          v16 += 2;
        }
        v23[v14++] = v17;
        if ( v14 > v25 )
          goto LABEL_20;
      }
    }
    goto LABEL_21;
  }
  LODWORD(v19) = 1024;
  v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
  if ( !v8 )
  {
LABEL_21:
    RtlDeleteHashTable(Heap);
    return 0;
  }
  TableSize = Heap->TableSize;
  if ( TableSize )
  {
    v10 = v8;
    do
    {
      v10[1] = v10;
      *v10 = v10;
      v10 += 2;
      --TableSize;
    }
    while ( TableSize );
  }
  Heap->Directory = v8;
LABEL_20:
  result = 1;
  *a1 = Heap;
  return result;
}
