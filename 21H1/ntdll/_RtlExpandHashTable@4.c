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

char __stdcall RtlExpandHashTable(_DWORD *a1)
{
  int v1; // ecx
  unsigned int v2; // eax
  char v3; // dl
  int v4; // ebx
  int v5; // ebx
  _DWORD *Heap; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int v9; // eax
  int v11; // edx
  _DWORD **ChainHead; // ebx
  _DWORD *v13; // edi
  _DWORD *v14; // edx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  _DWORD **v19; // eax
  int v20; // edx
  int v21; // [esp+Ch] [ebp-Ch]
  char v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]
  int v24; // [esp+14h] [ebp-4h]
  _DWORD **v25; // [esp+14h] [ebp-4h]

  v1 = a1[2];
  if ( v1 == 8388480 || a1[7] )
    return 0;
  _BitScanReverse(&v2, v1 + 128);
  v21 = (v1 + 128) ^ (1 << v2);
  v3 = v2 - 7;
  v22 = v2 - 7;
  v4 = v2 - 7;
  v23 = v2 - 7;
  if ( v1 == 128 )
  {
    v5 = a1[8];
    Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 64);
    v7 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x40u);
    v3 = v22;
    *v7 = v5;
    v4 = v23;
    a1[8] = v7;
  }
  v8 = (_DWORD *)a1[8];
  v24 = v8[v4];
  if ( !v24 )
  {
    v9 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 8 * (1 << (v3 + 7)));
    v24 = v9;
    if ( !v9 )
    {
      if ( a1[2] == 128 )
      {
        a1[8] = *v8;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
      }
      return 0;
    }
    v8[v4] = v9;
  }
  v11 = a1[3];
  ++a1[2];
  ChainHead = (_DWORD **)RtlpGetChainHead(a1, v11);
  ++a1[3];
  v13 = (_DWORD *)(v24 + 8 * v21);
  v13[1] = v13;
  *v13 = v13;
  v14 = *ChainHead;
  if ( *ChainHead != ChainHead )
  {
    v25 = ChainHead;
    do
    {
      v15 = v14[2] >> a1[1];
      if ( (((2 * a1[4]) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15 + 12345) >> 16))) == a1[2] - 1 )
      {
        v16 = *v14;
        if ( *(_DWORD **)(*v14 + 4) != v14
          || (v17 = (_DWORD *)v14[1], (_DWORD *)*v17 != v14)
          || (*v17 = v16, *(_DWORD *)(v16 + 4) = v17, v18 = (_DWORD *)v13[1], (_DWORD *)*v18 != v13) )
        {
          __fastfail(3u);
        }
        v14[1] = v18;
        *v14 = v13;
        *v18 = v14;
        v19 = v25;
        v13[1] = v14;
      }
      else
      {
        v19 = (_DWORD **)v14;
        v25 = (_DWORD **)v14;
      }
      v14 = *v19;
    }
    while ( *v19 != ChainHead );
    if ( (_DWORD *)*v13 != v13 )
      ++a1[6];
    if ( *ChainHead == ChainHead )
      --a1[6];
  }
  v20 = a1[4];
  if ( a1[3] == v20 + 1 )
  {
    a1[3] = 0;
    a1[4] = (2 * v20) | 1;
  }
  return 1;
}
