/*
 * XREFs of MI_NODE_FROM_PFN @ 0x140546038
 * Callers:
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MI_NODE_FROM_PFN(__int64 a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 2);
}
