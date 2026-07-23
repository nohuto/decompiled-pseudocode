/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x1800CFC90
 * Callers:
 *     LdrpLogNewDllLoad @ 0x180014A14 (LdrpLogNewDllLoad.c)
 *     LdrLogNewDataDllLoad @ 0x180073330 (LdrLogNewDataDllLoad.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

int __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rbp
  unsigned int v9; // esi
  _WORD *Heap; // rax
  _WORD *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rcx

  v6 = a4;
  v9 = a4 + 54;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, a4 + 54);
  v11 = Heap;
  if ( Heap )
  {
    v12 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v12 = 5297;
    v11[3] = v12;
    *((_DWORD *)v11 + 12) = a3;
    *((_QWORD *)v11 + 4) = a1;
    *((_QWORD *)v11 + 5) = a2;
    memmove(v11 + 26, Src, v6);
    v11[(v6 >> 1) + 26] = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v13, 0x403u, v9 - 32, v11);
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  return (int)Heap;
}
