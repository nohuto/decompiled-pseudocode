/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1403CBB10
 * Callers:
 *     KiInitMachineDependent @ 0x1403CB7F4 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x1403CB9F0 (KiExecuteDpc.c)
 *     KiDeregisterNmiSxCallback @ 0x14056A8C4 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
