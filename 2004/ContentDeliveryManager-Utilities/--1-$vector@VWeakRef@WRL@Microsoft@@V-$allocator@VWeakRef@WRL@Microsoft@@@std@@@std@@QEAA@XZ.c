/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180046F30
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800461F8 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?_Destroy@?$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@EEAAXXZ @ 0x180048BC0 (-_Destroy@-$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedConten.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue_::_1_::dtor$1 @ 0x1800D0EBC (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--Subscriptio_ea_1800D0EBC.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$0 @ 0x1800D1212 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RemoveInvalidWeakPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    operator delete(v1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
