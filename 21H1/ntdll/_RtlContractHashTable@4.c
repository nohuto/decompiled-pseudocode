/*
 * XREFs of _RtlContractHashTable@4 @ 0x4B35ACD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  PRTL_DYNAMIC_HASH_TABLE v1; // esi
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _DWORD *ChainHead; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *i; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  unsigned int v14; // eax
  int v15; // edi
  void **Directory; // ebx
  _DWORD *v18; // [esp+4h] [ebp-8h]

  v1 = HashTable;
  TableSize = HashTable->TableSize;
  if ( TableSize == 128 || HashTable->NumEnumerators )
    return 0;
  Pivot = HashTable->Pivot;
  if ( Pivot )
  {
    DivisorMask = Pivot - 1;
  }
  else
  {
    HashTable->DivisorMask >>= 1;
    DivisorMask = HashTable->DivisorMask;
  }
  HashTable->Pivot = DivisorMask;
  ChainHead = (_DWORD *)RtlpGetChainHead(HashTable, TableSize - 1);
  v18 = ChainHead;
  v7 = (_DWORD *)RtlpGetChainHead(v6, HashTable->Pivot);
  --HashTable->TableSize;
  v8 = v7;
  if ( (_DWORD *)*ChainHead != ChainHead && (_DWORD *)*v7 != v7 )
    --HashTable->NonEmptyBuckets;
  for ( i = v7; ; *i = v10 )
  {
    v10 = (_DWORD *)*ChainHead;
    if ( (_DWORD *)*ChainHead == ChainHead )
      break;
    if ( (_DWORD *)v10[1] != ChainHead )
      goto LABEL_20;
    v11 = *v10;
    if ( *(_DWORD **)(*v10 + 4) != v10 )
      goto LABEL_20;
    *ChainHead = v11;
    *(_DWORD *)(v11 + 4) = ChainHead;
    if ( (_DWORD *)*i != v8 )
    {
      v12 = (_DWORD *)*i;
      do
      {
        if ( v12[2] >= v10[2] )
          break;
        i = v12;
        v12 = (_DWORD *)*v12;
      }
      while ( v12 != v8 );
      v1 = HashTable;
      ChainHead = v18;
    }
    v13 = (_DWORD *)*i;
    if ( *(_DWORD **)(*i + 4) != i )
LABEL_20:
      __fastfail(3u);
    *v10 = v13;
    v10[1] = i;
    v13[1] = v10;
  }
  v14 = v1->TableSize + 128;
  _BitScanReverse((unsigned int *)&v15, v14);
  if ( v14 == 1 << v15 )
  {
    Directory = (void **)v1->Directory;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory[v15 - 7]);
    Directory[v15 - 7] = 0;
    if ( v1->TableSize == 128 )
    {
      v1->Directory = *Directory;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
