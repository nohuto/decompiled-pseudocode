/*
 * XREFs of ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x180066AB4
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800659CC (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18018A750 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180087364 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+20h] BYREF
  __int64 v5; // [rsp+48h] [rbp+28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  v6 = v2;
  result = winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v4);
  v5 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_storage<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::value,
      &v5);
    v2 = v5;
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v6);
  }
  if ( v4 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(v2, *(_QWORD *)(a1 + 16));
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v5);
  }
  return result;
}
