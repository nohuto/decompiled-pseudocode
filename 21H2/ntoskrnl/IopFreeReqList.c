/*
 * XREFs of IopFreeReqList @ 0x140753068
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BDF0C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x140751854 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140753010 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B46D0 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408B98EC (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1407530C0 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
