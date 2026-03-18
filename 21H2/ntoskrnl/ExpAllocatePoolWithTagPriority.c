/*
 * XREFs of ExpAllocatePoolWithTagPriority @ 0x140A6E028
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140240470 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x14034BAE0 (MmResourcesAvailable.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagPriority(POOL_TYPE a1, ULONG_PTR a2, unsigned int a3, unsigned int a4, int a5)
{
  if ( a4 == 32 || (a1 & 2) != 0 || (unsigned int)MmResourcesAvailable(a1, a2, a4) || a2 <= 0xFE0 )
    return ExpAllocatePoolWithTagFromNode(a1, a2, a3, a5, (a4 >> 3) & 1);
  else
    return 0LL;
}
