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

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  _TP_TIMER *Heap; // esi
  NTSTATUS result; // eax
  SIZE_T v6; // [esp-4h] [ebp-14h]
  _UNKNOWN *retaddr; // [esp+14h] [ebp+4h]

  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  LODWORD(v6) = 224;
  Heap = (_TP_TIMER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, v6);
  if ( !Heap )
    return -1073741801;
  *((_DWORD *)Heap + 27) = retaddr;
  result = TppInitializeTimer(Context, CallbackEnviron, &TppTimerpCleanupGroupMemberVFuncs, TppTimerpTaskVFuncs);
  if ( result >= 0 )
  {
    *((_DWORD *)Heap + 12) = Callback;
    *Timer = Heap;
  }
  return result;
}
