/*
 * XREFs of RtlFlsSetValue @ 0x18004FB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004FCA4 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 */

__int64 __fastcall RtlFlsSetValue(int a1, __int64 a2)
{
  struct _TEB *v2; // rbx
  _QWORD *FlsData; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // esi
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  _QWORD *Heap; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  _QWORD *v17; // rax

  v2 = NtCurrentTeb();
  if ( (unsigned int)(a1 - 1) > 0xFEE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    FlsData = v2->FlsData;
    v5 = a1 + 16;
    v6 = 0;
    if ( !FlsData )
    {
      Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 80LL);
      FlsData = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      *Heap = 0LL;
      Heap[1] = 0LL;
      Heap[2] = 0LL;
      Heap[3] = 0LL;
      Heap[4] = 0LL;
      Heap[5] = 0LL;
      Heap[6] = 0LL;
      Heap[7] = 0LL;
      Heap[8] = 0LL;
      Heap[9] = 0LL;
      v2->FlsData = Heap;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, v14, v15, v16);
      v17 = (_QWORD *)qword_18016D350;
      if ( *(__int64 **)qword_18016D350 != &qword_18016D348 )
        __fastfail(3u);
      *FlsData = &qword_18016D348;
      FlsData[1] = v17;
      *v17 = FlsData;
      qword_18016D350 = (__int64)FlsData;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
    }
    _BitScanReverse(&v7, v5);
    v8 = 1 << v7;
    v9 = v7 - 4;
    v10 = v5 ^ v8;
    v11 = FlsData[v9 + 2];
    if ( !v11 )
    {
      v11 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(FlsData + 2, (unsigned int)v9);
      if ( !v11 )
        return (unsigned int)-1073741801;
    }
    *(_QWORD *)(v11 + 8 * v10 + 8) = a2;
  }
  return v6;
}
