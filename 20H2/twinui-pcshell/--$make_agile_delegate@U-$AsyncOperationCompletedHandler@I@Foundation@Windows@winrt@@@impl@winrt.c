/*
 * XREFs of ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x1804614B8
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@I@Foundation@Windows@3@@Z @ 0x1804624AC (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     RoGetAgileReference_0 @ 0x18008E34B (RoGetAgileReference_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int_::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___ @ 0x180460474 (winrt--Windows--Foundation--AsyncOperationCompletedHandler_unsigned_int_--AsyncOperationComplete.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>(
        __int64 *a1,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( !*a2 )
  {
    v5 = 0LL;
    v11 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v11 = 0LL;
  (**v4)(v4, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v11);
  v5 = v11;
  if ( !v11 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v11);
  v7 = *a2;
  if ( v6 )
  {
    *a1 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  }
  else
  {
    v10 = 0LL;
    RoGetAgileReference_0(
      0LL,
      (__int64)&winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>::value,
      v7,
      (__int64)&v10);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      v11 = v8;
      winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int_::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___(
        a1,
        &v11);
    }
    else
    {
      *a1 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
    }
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v10);
  }
  return a1;
}
