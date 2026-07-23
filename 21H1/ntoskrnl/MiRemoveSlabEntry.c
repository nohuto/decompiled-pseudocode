/*
 * XREFs of MiRemoveSlabEntry @ 0x14054D880
 * Callers:
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     MmUpdateSlabRangeProtection @ 0x140A90848 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall MiRemoveSlabEntry(__int64 a1, _RTL_RB_TREE *a2, __int64 a3)
{
  RtlRbRemoveNode(a2, (PRTL_BALANCED_NODE)a3);
  if ( a2[1].Min == (_RTL_BALANCED_NODE *)a3 )
    a2[1].Min = 0LL;
  a2[2].Root = (_RTL_BALANCED_NODE *)((char *)a2[2].Root - *(unsigned int *)(a3 + 132));
  --a2[2].Min;
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7632), 0xFFFFFFFFFFFFFE00uLL);
}
