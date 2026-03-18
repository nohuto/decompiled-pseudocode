/*
 * XREFs of KeQueryNodeActiveDpcGangAffinity @ 0x140378C44
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 */

void __fastcall KeQueryNodeActiveDpcGangAffinity(USHORT a1, struct _GROUP_AFFINITY *a2, USHORT *a3)
{
  KeQueryNodeActiveAffinity(a1, a2, a3);
}
