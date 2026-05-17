/*
 * XREFs of _TpAllocWork@16 @ 0x4B2B3CB0
 * Callers:
 *     _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB (_LdrpEnableParallelLoading@4.c)
 *     _RtlpFcAllocateChangeRegistration@8 @ 0x4B2B2462 (_RtlpFcAllocateChangeRegistration@8.c)
 *     _RtlpCtContextInit@8 @ 0x4B369E6A (_RtlpCtContextInit@8.c)
 * Callees:
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAllocWork(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // edi
  _DWORD *Heap; // esi
  int v6; // edi
  int v8; // [esp+1Ch] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+4h]

  if ( a4 )
    v4 = *(_DWORD *)(a4 + 28);
  else
    v4 = 0;
  if ( !a1 || !a2 || (v4 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *a1 = 0;
  Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 144);
  if ( Heap )
  {
    Heap[27] = retaddr;
    v6 = TppWorkInitialize(a4, v4, TppWorkpCleanupGroupMemberVFuncs, TppWorkpTaskVFuncs);
    v8 = v6;
    if ( v6 >= 0 )
    {
      Heap[12] = a2;
      v6 = 0;
      v8 = 0;
      if ( a4 )
        Heap[4] = *(_DWORD *)(a4 + 24);
      if ( Heap[2] )
        TppCleanupGroupAddMember(Heap);
    }
  }
  else
  {
    v6 = -1073741801;
    v8 = -1073741801;
  }
  if ( v6 < 0 && Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, Heap);
    Heap = 0;
    v6 = v8;
  }
  if ( v6 >= 0 )
    *a1 = Heap;
  return v6;
}
