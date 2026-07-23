/*
 * XREFs of _RtlFlsSetValue@8 @ 0x4B2DBE50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z @ 0x4B2DBF63 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z.c)
 */

NTSTATUS __cdecl RtlFlsSetValue(ULONG FlsIndex, PVOID FlsData)
{
  struct _TEB *v2; // esi
  _DWORD *v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // edx
  _DWORD *Heap; // eax
  _DWORD *v11; // eax
  SIZE_T v12; // [esp-4h] [ebp-10h]

  v2 = NtCurrentTeb();
  if ( FlsIndex && FlsIndex < 0xFF0 )
  {
    v3 = v2->FlsData;
    v4 = FlsIndex + 16;
    if ( !v3 )
    {
      LODWORD(v12) = 40;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      v3 = Heap;
      if ( !Heap )
        return -1073741801;
      *Heap = 0;
      Heap[1] = 0;
      Heap[2] = 0;
      Heap[3] = 0;
      Heap[4] = 0;
      Heap[5] = 0;
      Heap[6] = 0;
      Heap[7] = 0;
      Heap[8] = 0;
      Heap[9] = 0;
      v2->FlsData = Heap;
      RtlAcquireSRWLockExclusive(&RtlpFlsContext);
      v11 = (_DWORD *)dword_4B3A66F8;
      if ( *(int **)dword_4B3A66F8 != &dword_4B3A66F4 )
        __fastfail(3u);
      *v3 = &dword_4B3A66F4;
      v3[1] = v11;
      *v11 = v3;
      dword_4B3A66F8 = (int)v3;
      RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    }
    _BitScanReverse(&v5, v4);
    v6 = v3[v5 - 2];
    v7 = v4 ^ (1 << v5);
    v8 = v5 - 4;
    if ( v6 || (v6 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(v3 + 2, v8)) != 0 )
    {
      *(_DWORD *)(v6 + 4 * v7 + 4) = FlsData;
      return 0;
    }
    return -1073741801;
  }
  return -1073741811;
}
