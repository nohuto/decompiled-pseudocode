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

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  unsigned int Flags; // edi
  _DWORD *Heap; // esi
  NTSTATUS v5; // edi
  SIZE_T v7; // [esp-4h] [ebp-44h]
  int v8; // [esp+24h] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+44h] [ebp+4h]

  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  LODWORD(v7) = 144;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, v7);
  if ( Heap )
  {
    Heap[27] = retaddr;
    v5 = TppWorkInitialize(
           Heap,
           (int)CallbackEnviron,
           Flags,
           (int)&TppSimplepCleanupGroupMemberVFuncs,
           (int)TppSimplepTaskVFuncs);
    v8 = v5;
    if ( v5 >= 0 )
    {
      v5 = 0;
      v8 = 0;
      Heap[12] = Callback;
      if ( CallbackEnviron )
        Heap[4] = CallbackEnviron->FinalizationCallback;
      if ( Heap[2] )
        TppCleanupGroupAddMember(Heap);
    }
  }
  else
  {
    v5 = -1073741801;
    v8 = -1073741801;
  }
  if ( v5 < 0 && Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, Heap);
    Heap = 0;
    v5 = v8;
  }
  if ( v5 >= 0 )
    TppWorkPost((int)Heap);
  return v5;
}
