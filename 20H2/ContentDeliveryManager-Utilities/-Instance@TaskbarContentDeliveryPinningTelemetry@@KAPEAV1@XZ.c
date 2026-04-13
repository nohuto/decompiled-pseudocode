/*
 * XREFs of ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000DD54
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E254 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DC54 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     atexit @ 0x1800CD704 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

struct TaskbarContentDeliveryPinningTelemetry *TaskbarContentDeliveryPinningTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    qword_180199370 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    Context = &qword_180199370;
    atexit(_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
    qword_180199378 = (__int64)TaskbarLogging::Provider();
    byte_180199380 = 0;
    dword_180199384 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180199370 + 8))(&qword_180199370);
    InitOnceComplete(&`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper, 0, &qword_180199370);
  }
  return (struct TaskbarContentDeliveryPinningTelemetry *)Context;
}
