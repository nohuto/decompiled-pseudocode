/*
 * XREFs of ?Invoke@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAXPE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@PE$AAUIVectorChangedEventArgs@234@@Z @ 0x18031B5F0
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@2345@UE$AAAJPE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@345@PE$AAUIVectorChangedEventArgs@345@@Z @ 0x18031DE90 (-__abi_Windows_Foundation_Collections_-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMe.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x18031B632LL);
  }
  return result;
}
