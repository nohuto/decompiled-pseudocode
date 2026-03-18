/*
 * XREFs of ViFaultsIsTagTarget @ 0x1409E03CC
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x1409DF75C (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1405B1BFC (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x1409E0380 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int IsTagPresentInList; // ecx

  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(v1, 1819692358) )
    return 0LL;
  IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    IsTagPresentInList = ViFaultsIsTagPresentInList(v2);
    if ( IsTagPresentInList )
      ++dword_140D4A408;
    else
      ++dword_140D4A404;
  }
  return IsTagPresentInList;
}
