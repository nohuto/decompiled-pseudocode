/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::Invoke @ 0x1803035B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4VirtualDesktopCollectionChangedEventType@3456@XZ @ 0x18030DEA8 (-get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@W.c)
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs::EventType::get(a3);
  if ( (_DWORD)result == 2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
    if ( (int)result < 0 )
    {
      __abi_WinRTraiseException(result);
      __debugbreak();
    }
  }
  return result;
}
