/*
 * XREFs of KeQueryNodeActiveDpcGangAffinity @ 0x14036BCFC
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402942D0 (KeQueryNodeActiveAffinity.c)
 */

void __fastcall KeQueryNodeActiveDpcGangAffinity(USHORT a1, _GROUP_AFFINITY *a2, USHORT *a3)
{
  KeQueryNodeActiveAffinity(a1, a2, a3);
}
