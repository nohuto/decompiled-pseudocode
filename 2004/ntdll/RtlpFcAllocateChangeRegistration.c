/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18000948C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpFcAllocateChangeRegistration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 Heap; // rax
  __int64 v6; // rbx

  v3 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 48LL);
  v6 = Heap;
  if ( Heap )
  {
    if ( (int)TpAllocWork(Heap + 40, RtlpFcChangeRegistrationCallback, Heap, 0LL) >= 0 )
    {
      *(_QWORD *)(v6 + 16) = a1;
      v3 = v6;
      *(_QWORD *)(v6 + 24) = a2;
      v6 = 0LL;
    }
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
  }
  return v3;
}
