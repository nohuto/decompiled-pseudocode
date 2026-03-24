/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x14051F1A0
 * Callers:
 *     KeClockInterruptNotify @ 0x140221640 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140258C00 (KiCheckPreferredHeteroProcessor.c)
 *     KiFindReadyThread @ 0x1402EA5D0 (KiFindReadyThread.c)
 *     KiSelectReadyThread @ 0x140347900 (KiSelectReadyThread.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F500 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeSetThreadBamQosLevel @ 0x14051E5A0 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x14051F328 (KiGetHeteroThreadQos.c)
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
