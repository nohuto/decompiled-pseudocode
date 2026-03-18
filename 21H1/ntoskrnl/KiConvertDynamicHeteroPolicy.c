/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x1405196A0
 * Callers:
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1403321F0 (KiCheckPreferredHeteroProcessor.c)
 *     KiFindReadyThread @ 0x140337CC0 (KiFindReadyThread.c)
 *     KiHeteroChooseTargetProcessor @ 0x140519A00 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeSetThreadBamQosLevel @ 0x140518AA0 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x140519828 (KiGetHeteroThreadQos.c)
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
