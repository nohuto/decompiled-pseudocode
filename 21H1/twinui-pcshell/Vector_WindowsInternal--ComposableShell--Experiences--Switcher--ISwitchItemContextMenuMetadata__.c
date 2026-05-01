/*
 * XREFs of Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Array_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_::_Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::[Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___]::ReplaceAll_::_1_::catch$5 @ 0x1802FA2FC
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Array_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_::_Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::_Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____::ReplaceAll_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 64) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 64) = v4;
  *(_QWORD *)(a2 + 32) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 32);
}
