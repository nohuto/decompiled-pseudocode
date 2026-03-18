/*
 * XREFs of IopFreeReqList @ 0x14082045C
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405611AC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14081FECC (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140820308 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x140820DCC (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x14095F29C (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1408204B4 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
