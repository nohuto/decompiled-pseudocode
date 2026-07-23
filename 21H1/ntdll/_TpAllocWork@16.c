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

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  unsigned int Flags; // edi
  _DWORD *Heap; // esi
  NTSTATUS v6; // edi
  SIZE_T v8; // [esp-4h] [ebp-3Ch]
  int v9; // [esp+1Ch] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+4h]

  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn || !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *WorkReturn = 0;
  LODWORD(v8) = 144;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, v8);
  if ( Heap )
  {
    Heap[27] = retaddr;
    v6 = TppWorkInitialize(CallbackEnviron, Flags, &TppWorkpCleanupGroupMemberVFuncs, &TppWorkpTaskVFuncs);
    v9 = v6;
    if ( v6 >= 0 )
    {
      Heap[12] = Callback;
      v6 = 0;
      v9 = 0;
      if ( CallbackEnviron )
        Heap[4] = CallbackEnviron->FinalizationCallback;
      if ( Heap[2] )
        TppCleanupGroupAddMember(Heap);
    }
  }
  else
  {
    v6 = -1073741801;
    v9 = -1073741801;
  }
  if ( v6 < 0 && Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, Heap);
    Heap = 0;
    v6 = v9;
  }
  if ( v6 >= 0 )
    *WorkReturn = (PTP_WORK)Heap;
  return v6;
}
