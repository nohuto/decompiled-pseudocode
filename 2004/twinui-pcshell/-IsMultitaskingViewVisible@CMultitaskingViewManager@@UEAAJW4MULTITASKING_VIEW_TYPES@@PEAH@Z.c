/*
 * XREFs of ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180388770
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180389DF4 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 */

__int64 __fastcall CMultitaskingViewManager::IsMultitaskingViewVisible(__int64 a1, unsigned int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  int v7; // ebx

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 40) & -(__int64)(a1 != 0));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  *a3 = (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 1LL, 0LL, 0LL) >= 0;
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
