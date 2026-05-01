/*
 * XREFs of _Platform::Collections::Details::Init_std::vector_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1__std::allocator_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1________::_1_::catch$27 @ 0x1802D636B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Platform::Collections::Details::Init_std::vector_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1__std::allocator_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1________::_1_::catch_27(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 96) = Exception;
  v4 = Platform::FailureException::FailureException(Exception);
  *(_QWORD *)(a2 + 96) = v4;
  *(_QWORD *)(a2 + 40) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::FailureException **)(a2 + 40);
}
