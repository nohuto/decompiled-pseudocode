/*
 * XREFs of KeQueryNodeActiveDpcGangAffinity @ 0x1403698BC
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140715860 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 */

void __fastcall KeQueryNodeActiveDpcGangAffinity(USHORT a1, _GROUP_AFFINITY *a2, USHORT *a3)
{
  KeQueryNodeActiveAffinity(a1, a2, a3);
}
