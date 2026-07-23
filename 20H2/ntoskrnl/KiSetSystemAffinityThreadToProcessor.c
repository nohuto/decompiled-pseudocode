/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1403B4374
 * Callers:
 *     KiExecuteDpc @ 0x1403B4110 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x1403B420C (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x140512E24 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
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
