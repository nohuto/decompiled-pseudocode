/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x14045AD66
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeSetThreadBamQosLevel @ 0x14045AB80 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x14045AE34 (KiGetHeteroThreadQos.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int HeteroThreadQos; // eax
  __int64 v6; // r9
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  HeteroThreadQos = KiGetHeteroThreadQos(a1, a2, &v8, a4);
  v6 = HeteroThreadQos;
  if ( HeteroThreadQos != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KeSetThreadBamQosLevel(a1, HeteroThreadQos);
  return *((unsigned int *)&KiDynamicHeteroCpuPolicy + 2 * v6 + v8);
}
