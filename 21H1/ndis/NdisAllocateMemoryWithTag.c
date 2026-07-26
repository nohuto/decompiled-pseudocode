/*
 * XREFs of NdisAllocateMemoryWithTag @ 0x1C0019BE0
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00C50EC (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemoryWithTag(PVOID *VirtualAddress, UINT Length, ULONG Tag)
{
  PVOID PoolWithTag; // rax

  if ( !Tag )
    Tag = 1835091022;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, Tag);
  *VirtualAddress = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000001 : 0;
}
