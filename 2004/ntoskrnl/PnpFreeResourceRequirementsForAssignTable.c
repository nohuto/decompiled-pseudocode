/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x14073D540
 * Callers:
 *     PnpAllocateResources @ 0x14073A218 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14073A5FC (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x1408B0060 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1408B0248 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408B56A4 (PnpRebalance.c)
 * Callees:
 *     IopFreeReqList @ 0x14073D598 (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
