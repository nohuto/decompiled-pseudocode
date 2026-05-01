/*
 * XREFs of ?Invoke@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@3@PE$AAUISwitchItemCollectionChangedEventArgs@5673@@Z @ 0x180303450
 * Callers:
 *     ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@234@UE$AAAJPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@4@PE$AAUISwitchItemCollectionChangedEventArgs@6784@@Z @ 0x18030B8A0 (-__abi_Windows_Foundation_-$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@Composabl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180303492LL);
  }
  return result;
}
