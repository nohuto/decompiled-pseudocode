/*
 * XREFs of ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C01AC338
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01ABFD8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E878C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     qsort_0 @ 0x1C002B1E1 (qsort_0.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_WORD *)(v1 + 20) )
    {
      qsort_0(
        (void *)(v1 + 56),
        *(unsigned __int16 *)(v1 + 20),
        0x128uLL,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback);
      return 0LL;
    }
  }
  return result;
}
