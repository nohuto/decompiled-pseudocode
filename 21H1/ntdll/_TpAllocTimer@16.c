/*
 * XREFs of _TpAllocTimer@16 @ 0x4B2B4570
 * Callers:
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlpInitializeWnf@12 @ 0x4B2AE9E0 (_RtlpInitializeWnf@12.c)
 *     _RtlInitializeHeapGC@4 @ 0x4B2E648E (_RtlInitializeHeapGC@4.c)
 * Callees:
 *     _TppInitializeTimer@24 @ 0x4B2B4877 (_TppInitializeTimer@24.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAllocTimer(_DWORD *a1, int a2, int a3, int a4)
{
  int Heap; // esi
  int result; // eax
  _UNKNOWN *retaddr; // [esp+14h] [ebp+4h]

  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 28) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, 224);
  if ( !Heap )
    return -1073741801;
  *(_DWORD *)(Heap + 108) = retaddr;
  result = TppInitializeTimer(a3, a4, TppTimerpCleanupGroupMemberVFuncs, TppTimerpTaskVFuncs);
  if ( result >= 0 )
  {
    *(_DWORD *)(Heap + 48) = a2;
    *a1 = Heap;
  }
  return result;
}
