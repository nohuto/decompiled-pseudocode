/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@EEAAXXZ @ 0x180048BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180046F30 (--1-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ.c)
 */

int __fastcall std::_Ref_count_obj<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::_Destroy(
        __int64 a1)
{
  char *v2; // rcx
  int result; // eax

  std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(a1 + 24);
  v2 = *(char **)(a1 + 16);
  result = (_DWORD)v2 - 1;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v2);
  return result;
}
