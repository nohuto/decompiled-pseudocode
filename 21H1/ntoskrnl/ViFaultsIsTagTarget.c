/*
 * XREFs of ViFaultsIsTagTarget @ 0x1409DA34C
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x1409D96DC (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1405AD97C (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x1409DA300 (ViFaultsIsTagPresentInList.c)
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
      ++dword_140D47408;
    else
      ++dword_140D47404;
  }
  return IsTagPresentInList;
}
