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

int __userpurge RtlAddAttributeActionToRXact@<eax>(
        int a1@<edi>,
        int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        void *Src,
        unsigned int Size)
{
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // esi
  _DWORD *Heap; // eax
  int v14; // ecx
  int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  size_t v18; // [esp-18h] [ebp-28h]
  SIZE_T v19; // [esp-Ch] [ebp-1Ch]
  size_t v20; // [esp-Ch] [ebp-1Ch]
  size_t v21; // [esp-Ch] [ebp-1Ch]
  unsigned int v22; // [esp+4h] [ebp-Ch]
  unsigned int v23; // [esp+8h] [ebp-8h]
  _DWORD *v24; // [esp+Ch] [ebp-4h]
  unsigned int *v25; // [esp+Ch] [ebp-4h]

  if ( a3 != 1 && a3 != 2 )
    return -1073741811;
  HIDWORD(v19) = a1;
  v22 = (Size + 3) & 0xFFFFFFFC;
  v10 = *(_DWORD *)(a2 + 12);
  v23 = (((*a6 + 3) & 0xFFFFFFFC) + 43 + v22 + ((*a4 + 3) & 0xFFFFFFFC)) & 0xFFFFFFFC;
  v11 = v23 + *(_DWORD *)(v10 + 8);
  if ( v11 < v23 )
    return -1073741801;
  v12 = *(_DWORD *)(v10 + 4);
  if ( v11 > v12 )
  {
    do
      v12 *= 2;
    while ( v12 < v11 );
    LODWORD(v19) = v12;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    v24 = Heap;
    if ( Heap )
    {
      LODWORD(v20) = *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8);
      memcpy(Heap, *(const void **)(a2 + 12), v20);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a2 + 12));
      *(_DWORD *)(a2 + 12) = v24;
      v24[1] = v12;
      v10 = *(_DWORD *)(a2 + 12);
      goto LABEL_9;
    }
    return -1073741801;
  }
LABEL_9:
  v25 = (unsigned int *)(v10 + *(_DWORD *)(v10 + 8));
  *v25 = v23;
  v25[1] = a3;
  v25[2] = *(_DWORD *)a4;
  v25[3] = *((_DWORD *)a4 + 1);
  v25[4] = *(_DWORD *)a6;
  v25[5] = *((_DWORD *)a6 + 1);
  v25[7] = a7;
  v25[8] = Size;
  v25[6] = a5;
  v14 = *(_DWORD *)(a2 + 12);
  LODWORD(v19) = *a4;
  v15 = *(_DWORD *)(v14 + 8) + 40;
  memmove((void *)(v14 + v15), *((const void **)a4 + 1), v19);
  v25[3] = v15;
  v16 = ((*a4 + 3) & 0xFFFFFFFC) + v15;
  LODWORD(v18) = *a6;
  memmove((void *)(v16 + *(_DWORD *)(a2 + 12)), *((const void **)a6 + 1), v18);
  v25[5] = v16;
  v17 = ((*a6 + 3) & 0xFFFFFFFC) + v16;
  if ( a3 == 2 )
  {
    LODWORD(v21) = Size;
    memmove((void *)(v17 + *(_DWORD *)(a2 + 12)), Src, v21);
    v25[9] = v17;
    v17 += v22;
  }
  *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8) = (v17 + 3) & 0xFFFFFFFC;
  ++**(_DWORD **)(a2 + 12);
  return 0;
}
