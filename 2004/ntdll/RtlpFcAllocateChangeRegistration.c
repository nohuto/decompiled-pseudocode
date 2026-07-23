/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18000948C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

PTP_WORK *__fastcall RtlpFcAllocateChangeRegistration(_TP_WORK *a1, _TP_WORK *a2)
{
  PTP_WORK *v3; // rdi
  PTP_WORK *Heap; // rax
  PTP_WORK *v6; // rbx

  v3 = 0LL;
  Heap = (PTP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v6 = Heap;
  if ( Heap )
  {
    if ( TpAllocWork(Heap + 5, RtlpFcChangeRegistrationCallback, Heap, 0LL) >= 0 )
    {
      v6[2] = a1;
      v3 = v6;
      v6[3] = a2;
      v6 = 0LL;
    }
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return v3;
}
