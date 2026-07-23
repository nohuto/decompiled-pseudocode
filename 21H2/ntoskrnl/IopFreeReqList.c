/*
 * XREFs of IopFreeReqList @ 0x140753228
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BF62C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x140751A14 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407531D0 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B5FF0 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408B9A4C (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x140753280 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
