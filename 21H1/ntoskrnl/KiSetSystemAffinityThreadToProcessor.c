/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1403ABD84
 * Callers:
 *     KiExecuteDpc @ 0x1403ABB20 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x1403ABC1C (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x14050EEA4 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
