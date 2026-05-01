/*
 * XREFs of ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180261024
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003EE30 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180260A68 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x180261E40 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::RemovedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 *Ptr; // r8
  __int64 *i; // rdi
  PVOID v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  struct IApplicationView *v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  v14 = v4;
  Ptr = (__int64 *)this[18].Ptr;
  for ( i = (__int64 *)this[17].Ptr; i != Ptr && *(struct IApplicationView **)(*i + 32) != a2; i += 2 )
    ;
  if ( i != Ptr )
  {
    v13 = 0LL;
    v7 = this[43].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( (*(int (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)v7 + 72LL))(v7, &v13) >= 0 && v13 == a2 )
    {
      v8 = *i;
      v9 = *i;
      if ( *(_QWORD *)(*i + 24) >= 8uLL )
        v9 = *(_QWORD *)v8;
      PeoplePaneViewManager::NotifyListeners((__int64)this, 3uLL, v9, *(_DWORD *)(v8 + 40));
    }
    v10 = *i;
    v11 = *i;
    if ( *(_QWORD *)(*i + 24) >= 8uLL )
      v11 = *(_QWORD *)v10;
    PeoplePaneViewManager::NotifyListeners((__int64)this, 1uLL, v11, *(_DWORD *)(v10 + 40));
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v14, i);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
