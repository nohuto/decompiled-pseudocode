/*
 * XREFs of ??1SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA@XZ @ 0x1802FCFAC
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18030BE10 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_18030BE10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x1802F9650 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QE$AAUISwitchItem@Multitasking@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::~SwitchItemDataViewImpl(
        void **a1)
{
  void **v2; // rbx
  void **v3; // rdx
  void *v4; // rcx
  void **v5; // rdx

  v2 = a1 + 13;
  std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>,void *>>>(
    (__int64)(a1 + 13),
    (__int64)(a1 + 13),
    *((__int64 **)a1[13] + 1));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  v4 = a1[11];
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 8), v3);
  Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 6), v5);
}
