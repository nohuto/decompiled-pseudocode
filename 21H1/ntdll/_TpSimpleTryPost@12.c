/*
 * XREFs of _TpSimpleTryPost@12 @ 0x4B2E7210
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _TppWorkPost@4 @ 0x4B2C1B97 (_TppWorkPost@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TpSimpleTryPost@12 @ 0x4B2E7210 (_TpSimpleTryPost@12.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpSimpleTryPost(int a1, int a2, int a3)
{
  int v3; // edi
  _DWORD *Heap; // esi
  int v5; // edi
  int v7; // [esp+24h] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+44h] [ebp+4h]

  if ( a3 )
    v3 = *(_DWORD *)(a3 + 28);
  else
    v3 = 0;
  if ( !a1 || (v3 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 144);
  if ( Heap )
  {
    Heap[27] = retaddr;
    v5 = TppWorkInitialize(Heap, a3, v3, (int)TppSimplepCleanupGroupMemberVFuncs, (int)TppSimplepTaskVFuncs);
    v7 = v5;
    if ( v5 >= 0 )
    {
      v5 = 0;
      v7 = 0;
      Heap[12] = a1;
      if ( a3 )
        Heap[4] = *(_DWORD *)(a3 + 24);
      if ( Heap[2] )
        TppCleanupGroupAddMember(Heap);
    }
  }
  else
  {
    v5 = -1073741801;
    v7 = -1073741801;
  }
  if ( v5 < 0 && Heap )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (int)Heap);
    Heap = 0;
    v5 = v7;
  }
  if ( v5 >= 0 )
    TppWorkPost((int)Heap);
  return v5;
}
