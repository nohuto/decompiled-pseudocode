/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1403B1A04
 * Callers:
 *     KiExecuteDpc @ 0x1403B17A0 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x1403B189C (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x14050F4F4 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
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
