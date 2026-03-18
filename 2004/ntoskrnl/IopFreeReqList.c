/*
 * XREFs of IopFreeReqList @ 0x14073D598
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BC52C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x14073BD84 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14073D540 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A1B30 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408B67EC (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x14073D5F0 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
