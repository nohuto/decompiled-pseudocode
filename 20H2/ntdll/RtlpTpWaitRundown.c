/*
 * XREFs of RtlpTpWaitRundown @ 0x180009AA8
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x180009A80 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
