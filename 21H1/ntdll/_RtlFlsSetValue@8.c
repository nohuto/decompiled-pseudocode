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

int __stdcall RtlFlsSetValue(unsigned int a1, int a2)
{
  struct _TEB *v2; // esi
  _DWORD *FlsData; // ebx
  unsigned int v4; // edi
  unsigned int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // edx
  _DWORD *Heap; // eax
  _DWORD *v11; // eax

  v2 = NtCurrentTeb();
  if ( a1 && a1 < 0xFF0 )
  {
    FlsData = v2->FlsData;
    v4 = a1 + 16;
    if ( !FlsData )
    {
      Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 40);
      FlsData = Heap;
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
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpFlsContext);
      v11 = (_DWORD *)dword_4B3A66F8;
      if ( *(int **)dword_4B3A66F8 != &dword_4B3A66F4 )
        __fastfail(3u);
      *FlsData = &dword_4B3A66F4;
      FlsData[1] = v11;
      *v11 = FlsData;
      dword_4B3A66F8 = (int)FlsData;
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)&RtlpFlsContext);
    }
    _BitScanReverse(&v5, v4);
    v6 = FlsData[v5 - 2];
    v7 = v4 ^ (1 << v5);
    v8 = v5 - 4;
    if ( v6 || (v6 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(FlsData + 2, v8)) != 0 )
    {
      *(_DWORD *)(v6 + 4 * v7 + 4) = a2;
      return 0;
    }
    return -1073741801;
  }
  return -1073741811;
}
