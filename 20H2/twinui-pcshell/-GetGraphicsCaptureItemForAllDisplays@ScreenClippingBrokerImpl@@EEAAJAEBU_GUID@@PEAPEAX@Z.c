/*
 * XREFs of ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18042F030
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18042EE90 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::GetGraphicsCaptureItemForAllDisplays(
        ScreenClippingBrokerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  try
  {
    anonymous_namespace_::CreateGraphicsCaptureItem(&v9, (__int64)a2);
    v5 = (**v9)(v9, a2, a3);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v9);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
                           v6);
  }
  return result;
}
