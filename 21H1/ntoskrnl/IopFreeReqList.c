/*
 * XREFs of IopFreeReqList @ 0x14073BA18
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BB20C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x14073A204 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14073B9C0 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14079DB50 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408B54CC (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x14073BA70 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
