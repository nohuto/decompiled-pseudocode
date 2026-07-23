/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x1800748A0
 * Callers:
 *     ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180074774 (-RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(PVOID *a1)
{
  int v2; // ebx
  _QWORD *Heap; // r8
  int v4; // r9d
  unsigned int i; // edx
  unsigned int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v2 = 4;
  while ( 1 )
  {
    Heap = *a1;
    if ( !*a1 )
    {
      v8 = 1 << v2;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)((16 << v2) + 8));
      if ( Heap )
      {
        *(_OWORD *)Heap = 0LL;
        Heap[2] = 0LL;
        if ( v8 )
        {
          v9 = Heap + 1;
          v10 = v8;
          do
          {
            *v9 = 0LL;
            v9[1] = 0LL;
            v9 += 2;
            --v10;
          }
          while ( v10 );
        }
        *a1 = Heap;
      }
      if ( !Heap )
        return (unsigned int)-1;
    }
    v4 = 1 << v2;
    if ( *(_DWORD *)Heap < (unsigned int)(1 << v2) )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 8 )
      return (unsigned int)-1;
  }
  for ( i = *(_DWORD *)Heap; Heap[2 * i + 2]; i = (v4 - 1) & (i + 1) )
    ;
  ++*(_DWORD *)Heap;
  return v4 | i;
}
