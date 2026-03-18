/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x14081FECC
 * Callers:
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1407483B4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140958F84 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14095A02C (PnpRebalance.c)
 * Callees:
 *     IopFreeReqList @ 0x14082045C (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
