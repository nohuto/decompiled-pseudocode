/*
 * XREFs of ?GetViewType@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180302510
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IAllUpViewHost>::GetViewType(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  *a2 = *(_DWORD *)(a1 + 72);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
