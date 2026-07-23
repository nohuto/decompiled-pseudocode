/*
 * XREFs of KeQueryNodeActiveDpcGangAffinity @ 0x140368EFC
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140328260 (KeQueryNodeActiveAffinity.c)
 */

void __fastcall KeQueryNodeActiveDpcGangAffinity(USHORT a1, _GROUP_AFFINITY *a2, USHORT *a3)
{
  KeQueryNodeActiveAffinity(a1, a2, a3);
}
