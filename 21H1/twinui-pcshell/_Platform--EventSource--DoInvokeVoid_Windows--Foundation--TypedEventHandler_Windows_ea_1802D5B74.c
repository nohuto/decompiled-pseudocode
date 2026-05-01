/*
 * XREFs of _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_16286fe9edebb121e83a2911c5464574____::_1_::catch$4 @ 0x1802D5B74
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_16286fe9edebb121e83a2911c5464574____::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a2 + 72);
  if ( *(_DWORD *)(v5 + 64) != -2147023174 && *(_DWORD *)(v5 + 64) != -2147417848 && *(_DWORD *)(v5 + 64) != -1996357631 )
  {
    *(_QWORD *)(a2 + 64) = __abi_winrt_ptr_ctor(v5);
    throw (Platform::Exception **)(a2 + 64);
  }
  Platform::Details::EventSourceRemove(
    *(Platform::Details **)(a2 + 144),
    *(void ***)(a2 + 152),
    *(struct Platform::Details::EventLock **)(a2 + 40),
    a4);
  return 0LL;
}
