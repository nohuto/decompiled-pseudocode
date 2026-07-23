/*
 * XREFs of _RtlExpandHashTable@4 @ 0x4B35AFD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // ecx
  unsigned int v2; // eax
  char v3; // dl
  int v4; // ebx
  void *Directory; // ebx
  _DWORD *Heap; // eax
  _DWORD *v7; // edi
  void **v8; // edi
  char *v9; // eax
  unsigned int Pivot; // edx
  char *ChainHead; // ebx
  char *v13; // edi
  char *v14; // edx
  int v15; // eax
  int v16; // eax
  char **v17; // ecx
  char **v18; // eax
  char **v19; // eax
  unsigned int DivisorMask; // edx
  SIZE_T v21; // [esp-4h] [ebp-1Ch]
  size_t v22; // [esp-4h] [ebp-1Ch]
  int v23; // [esp+Ch] [ebp-Ch]
  char v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h]
  char *v26; // [esp+14h] [ebp-4h]
  char *v27; // [esp+14h] [ebp-4h]

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v2, TableSize + 128);
  v23 = (TableSize + 128) ^ (1 << v2);
  v3 = v2 - 7;
  v24 = v2 - 7;
  v4 = v2 - 7;
  v25 = v2 - 7;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    LODWORD(v21) = 64;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    v7 = Heap;
    if ( !Heap )
      return 0;
    LODWORD(v22) = 64;
    memset(Heap, 0, v22);
    v3 = v24;
    *v7 = Directory;
    v4 = v25;
    HashTable->Directory = v7;
  }
  v8 = (void **)HashTable->Directory;
  v26 = (char *)v8[v4];
  if ( !v26 )
  {
    LODWORD(v21) = 8 * (1 << (v3 + 7));
    v9 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    v26 = v9;
    if ( !v9 )
    {
      if ( HashTable->TableSize == 128 )
      {
        HashTable->Directory = *v8;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
      return 0;
    }
    v8[v4] = v9;
  }
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (char *)RtlpGetChainHead(HashTable, Pivot);
  ++HashTable->Pivot;
  v13 = &v26[8 * v23];
  *((_DWORD *)v13 + 1) = v13;
  *(_DWORD *)v13 = v13;
  v14 = *(char **)ChainHead;
  if ( *(char **)ChainHead != ChainHead )
  {
    v27 = ChainHead;
    do
    {
      v15 = *((_DWORD *)v14 + 2) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v16 = *(_DWORD *)v14;
        if ( *(char **)(*(_DWORD *)v14 + 4) != v14
          || (v17 = (char **)*((_DWORD *)v14 + 1), *v17 != v14)
          || (*v17 = (char *)v16, *(_DWORD *)(v16 + 4) = v17, v18 = (char **)*((_DWORD *)v13 + 1), *v18 != v13) )
        {
          __fastfail(3u);
        }
        *((_DWORD *)v14 + 1) = v18;
        *(_DWORD *)v14 = v13;
        *v18 = v14;
        v19 = (char **)v27;
        *((_DWORD *)v13 + 1) = v14;
      }
      else
      {
        v19 = (char **)v14;
        v27 = v14;
      }
      v14 = *v19;
    }
    while ( *v19 != ChainHead );
    if ( *(char **)v13 != v13 )
      ++HashTable->NonEmptyBuckets;
    if ( *(char **)ChainHead == ChainHead )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
