/*
 * XREFs of IopFreeReqList @ 0x14074C4A8
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BE9AC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x14074AC94 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14074C450 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B0E60 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408BC40C (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x14074C500 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
