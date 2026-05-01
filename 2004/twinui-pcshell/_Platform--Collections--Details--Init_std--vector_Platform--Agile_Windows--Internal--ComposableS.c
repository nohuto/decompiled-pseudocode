/*
 * XREFs of _Platform::Collections::Details::Init_std::vector_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1__std::allocator_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1________::_1_::catch$26 @ 0x1802F7E8C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DF14 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Platform::Collections::Details::Init_std::vector_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1__std::allocator_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1________::_1_::catch_26(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 96) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 96) = v4;
  *(_QWORD *)(a2 + 32) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 32);
}
