/*
 * XREFs of ?add@SwitchItemCollectionChanged@ISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@86@@Z @ 0x1802EC5C0
 * Callers:
 *     ?ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1802DE53C (-ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItemCollectionChanged::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 72LL))(a1, a3, a2);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    __debugbreak();
  }
  return a2;
}
