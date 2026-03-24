/*
 * XREFs of MI_NODE_FROM_PFN @ 0x140547B38
 * Callers:
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MI_NODE_FROM_PFN(__int64 a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 2);
}
