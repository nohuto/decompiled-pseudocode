/*
 * XREFs of _RtlAddAttributeActionToRXact@32 @ 0x4B3455D0
 * Callers:
 *     _RtlAddActionToRXact@24 @ 0x4B345590 (_RtlAddActionToRXact@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlAddAttributeActionToRXact(
        int a1,
        int a2,
        unsigned __int16 *a3,
        int a4,
        unsigned __int16 *a5,
        int a6,
        void *Src,
        size_t Size)
{
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // esi
  _DWORD *Heap; // eax
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  size_t v17; // [esp+4h] [ebp-Ch]
  unsigned int v18; // [esp+8h] [ebp-8h]
  _DWORD *v19; // [esp+Ch] [ebp-4h]
  unsigned int *v20; // [esp+Ch] [ebp-4h]

  if ( a2 != 1 && a2 != 2 )
    return -1073741811;
  v17 = (Size + 3) & 0xFFFFFFFC;
  v9 = *(_DWORD *)(a1 + 12);
  v18 = (((*a5 + 3) & 0xFFFFFFFC) + 43 + v17 + ((*a3 + 3) & 0xFFFFFFFC)) & 0xFFFFFFFC;
  v10 = v18 + *(_DWORD *)(v9 + 8);
  if ( v10 < v18 )
    return -1073741801;
  v11 = *(_DWORD *)(v9 + 4);
  if ( v10 > v11 )
  {
    do
      v11 *= 2;
    while ( v11 < v10 );
    Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v11);
    v19 = Heap;
    if ( Heap )
    {
      memcpy(Heap, *(const void **)(a1 + 12), *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8));
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(a1 + 12));
      *(_DWORD *)(a1 + 12) = v19;
      v19[1] = v11;
      v9 = *(_DWORD *)(a1 + 12);
      goto LABEL_9;
    }
    return -1073741801;
  }
LABEL_9:
  v20 = (unsigned int *)(v9 + *(_DWORD *)(v9 + 8));
  *v20 = v18;
  v20[1] = a2;
  v20[2] = *(_DWORD *)a3;
  v20[3] = *((_DWORD *)a3 + 1);
  v20[4] = *(_DWORD *)a5;
  v20[5] = *((_DWORD *)a5 + 1);
  v20[7] = a6;
  v20[8] = Size;
  v20[6] = a4;
  v13 = *(_DWORD *)(a1 + 12);
  v14 = *(_DWORD *)(v13 + 8) + 40;
  memmove((void *)(v13 + v14), *((const void **)a3 + 1), *a3);
  v20[3] = v14;
  v15 = ((*a3 + 3) & 0xFFFFFFFC) + v14;
  memmove((void *)(v15 + *(_DWORD *)(a1 + 12)), *((const void **)a5 + 1), *a5);
  v20[5] = v15;
  v16 = ((*a5 + 3) & 0xFFFFFFFC) + v15;
  if ( a2 == 2 )
  {
    memmove((void *)(v16 + *(_DWORD *)(a1 + 12)), Src, Size);
    v20[9] = v16;
    v16 += v17;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) = (v16 + 3) & 0xFFFFFFFC;
  ++**(_DWORD **)(a1 + 12);
  return 0;
}
