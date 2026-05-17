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

char __fastcall RtlpCreateHashTable(int **a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ebx
  int *Heap; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  int v13; // ebx
  unsigned int v14; // edi
  int v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  char result; // al
  _DWORD *v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-8h]
  unsigned int v22; // [esp+18h] [ebp-4h]

  v5 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v7 = 0;
  if ( !*a1 )
  {
    Heap = (int *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 36);
    if ( !Heap )
      return 0;
    v7 = 1;
  }
  Heap[5] = 0;
  Heap[6] = 0;
  Heap[7] = 0;
  Heap[8] = 0;
  *Heap = a4 | v7;
  Heap[2] = a2;
  Heap[4] = v5;
  Heap[1] = a3;
  Heap[3] = 0;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v11, a2 + 127);
    v22 = v11 - 7;
    v21 = (a2 + 127) ^ (1 << v11);
    v12 = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 64);
    v13 = (int)v12;
    v20 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x40u);
      Heap[8] = v13;
      v14 = 0;
      while ( 1 )
      {
        v15 = 1 << (v14 + 7);
        v16 = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 8 * v15);
        v17 = v16;
        if ( !v16 )
          break;
        if ( v14 >= v22 )
          v15 = v21 + 1;
        for ( ; v15; --v15 )
        {
          v16[1] = v16;
          *v16 = v16;
          v16 += 2;
        }
        v20[v14++] = v17;
        if ( v14 > v22 )
          goto LABEL_20;
      }
    }
    goto LABEL_21;
  }
  v8 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 1024);
  if ( !v8 )
  {
LABEL_21:
    RtlDeleteHashTable((int)Heap);
    return 0;
  }
  v9 = Heap[2];
  if ( v9 )
  {
    v10 = (_DWORD *)v8;
    do
    {
      v10[1] = v10;
      *v10 = v10;
      v10 += 2;
      --v9;
    }
    while ( v9 );
  }
  Heap[8] = v8;
LABEL_20:
  result = 1;
  *a1 = Heap;
  return result;
}
