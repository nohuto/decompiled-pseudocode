/*
 * XREFs of ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x180304D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x1802FAAD0 (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802FE820 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180305910 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x18030DDD0 (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     ?get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4VirtualDesktopCollectionChangedEventType@3456@XZ @ 0x18030DEA8 (-get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSourceCollectionChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // ebp
  void (__fastcall *v8)(RTL_SRWLOCK *, RTL_SRWLOCK *, __int64); // r15
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r8

  v5 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a3);
  v6 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs::EventType::get(a3);
  AcquireSRWLockExclusive(a1 + 7);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(a1, v6);
    }
    else
    {
      v8 = (void (__fastcall *)(RTL_SRWLOCK *, RTL_SRWLOCK *, __int64))*((_QWORD *)a1->Ptr + 8);
      v9 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v10 = Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
              (__int64)v9,
              v6,
              v7);
      v11 = v10;
      if ( v10 )
        v12 = v10 + 8;
      else
        v12 = 0LL;
      v8(a1, a1 + 2, v12);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem((__int64 **)a1, v6);
  }
  if ( a1 != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(a1 + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
