/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1403B5B64
 * Callers:
 *     KiExecuteDpc @ 0x1403B5900 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x1403B59FC (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x140514BA4 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
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
