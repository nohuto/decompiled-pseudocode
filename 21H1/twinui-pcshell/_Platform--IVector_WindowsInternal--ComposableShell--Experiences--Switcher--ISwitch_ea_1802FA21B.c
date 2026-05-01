/*
 * XREFs of _Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::[Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___]::RemoveAtEnd_::_1_::catch$21 @ 0x1802FA21B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::_Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____::RemoveAtEnd_::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 64) = Exception;
  v4 = Platform::FailureException::FailureException(Exception);
  *(_QWORD *)(a2 + 64) = v4;
  *(_QWORD *)(a2 + 40) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::FailureException **)(a2 + 40);
}
