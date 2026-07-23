/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x14051F3E0
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14027A170 (KiCheckPreferredHeteroProcessor.c)
 *     KiFindReadyThread @ 0x14029B920 (KiFindReadyThread.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F740 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeSetThreadBamQosLevel @ 0x14051E7E0 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x14051F568 (KiGetHeteroThreadQos.c)
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
