/*
 * XREFs of _RtlpFcAllocateChangeRegistration@8 @ 0x4B2B2462
 * Callers:
 *     _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0 (_RtlRegisterFeatureConfigurationChangeNotification@16.c)
 * Callees:
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

PTP_WORK *__fastcall RtlpFcAllocateChangeRegistration(_TP_WORK *a1, _TP_WORK *a2)
{
  PTP_WORK *v3; // edi
  PTP_WORK *Heap; // eax
  PTP_WORK *v5; // esi
  SIZE_T v7; // [esp-4h] [ebp-14h]

  LODWORD(v7) = 24;
  v3 = 0;
  Heap = (PTP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  v5 = Heap;
  if ( Heap )
  {
    if ( TpAllocWork(Heap + 5, RtlpFcChangeRegistrationCallback, Heap, 0) >= 0 )
    {
      v3 = v5;
      v5[2] = a1;
      v5[3] = a2;
      v5 = 0;
    }
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return v3;
}
