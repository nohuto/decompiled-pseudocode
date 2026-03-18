/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x14074C450
 * Callers:
 *     PnpAllocateResources @ 0x140749128 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14074950C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x1408B5B90 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1408B5D78 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408BB2C4 (PnpRebalance.c)
 * Callees:
 *     IopFreeReqList @ 0x14074C4A8 (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx
  void *v4; // rcx

  if ( a1 < a2 )
  {
    v2 = (PVOID *)(a1 + 32);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(*v2);
      *v2 = 0LL;
      if ( (*(_DWORD *)(v2 - 3) & 0x200) != 0 )
      {
        v4 = *(v2 - 1);
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          *(v2 - 1) = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
