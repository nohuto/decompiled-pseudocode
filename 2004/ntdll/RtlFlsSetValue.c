/*
 * XREFs of RtlFlsSetValue @ 0x18004CDA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004CEE4 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 */

NTSTATUS __cdecl RtlFlsSetValue(ULONG FlsIndex, PVOID FlsData)
{
  struct _TEB *v2; // rbx
  _QWORD *v4; // rdi
  unsigned int v5; // r14d
  NTSTATUS v6; // esi
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  _QWORD *Heap; // rax
  _QWORD *v14; // rax

  v2 = NtCurrentTeb();
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  v4 = v2->FlsData;
  v5 = FlsIndex + 16;
  v6 = 0;
  if ( !v4 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x50uLL);
    v4 = Heap;
    if ( !Heap )
      return -1073741801;
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
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v14 = (_QWORD *)qword_18016B300;
    if ( *(__int64 **)qword_18016B300 != &qword_18016B2F8 )
      __fastfail(3u);
    *v4 = &qword_18016B2F8;
    v4[1] = v14;
    *v14 = v4;
    qword_18016B300 = (__int64)v4;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  _BitScanReverse(&v7, v5);
  v8 = 1 << v7;
  v9 = v7 - 4;
  v10 = v5 ^ v8;
  v11 = v4[v9 + 2];
  if ( !v11 )
  {
    v11 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(v4 + 2, (unsigned int)v9);
    if ( !v11 )
      return -1073741801;
  }
  *(_QWORD *)(v11 + 8 * v10 + 8) = FlsData;
  return v6;
}
