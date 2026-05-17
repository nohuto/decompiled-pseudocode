/*
 * XREFs of _RtlpFcAllocateChangeRegistration@8 @ 0x4B2B2462
 * Callers:
 *     _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0 (_RtlRegisterFeatureConfigurationChangeNotification@16.c)
 * Callees:
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall RtlpFcAllocateChangeRegistration(int a1, int a2)
{
  int v3; // edi
  int Heap; // eax
  int v5; // esi

  v3 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, 24);
  v5 = Heap;
  if ( Heap )
  {
    if ( (int)TpAllocWork(Heap + 20, RtlpFcChangeRegistrationCallback, Heap, 0) >= 0 )
    {
      v3 = v5;
      *(_DWORD *)(v5 + 8) = a1;
      *(_DWORD *)(v5 + 12) = a2;
      v5 = 0;
    }
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return v3;
}
