/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x140519CF0
 * Callers:
 *     KiSelectReadyThread @ 0x14020D530 (KiSelectReadyThread.c)
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402ED0B0 (KiCheckPreferredHeteroProcessor.c)
 *     KiFindReadyThread @ 0x14032BB40 (KiFindReadyThread.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051A050 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeSetThreadBamQosLevel @ 0x1405190F0 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x140519E78 (KiGetHeteroThreadQos.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  int HeteroThreadQos; // eax
  __int64 v5; // r9
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  HeteroThreadQos = KiGetHeteroThreadQos(a1, a3, &v7);
  v5 = HeteroThreadQos;
  if ( HeteroThreadQos != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KeSetThreadBamQosLevel(a1, HeteroThreadQos);
  return *((unsigned int *)&KiDynamicHeteroCpuPolicy + 2 * v5 + v7);
}
