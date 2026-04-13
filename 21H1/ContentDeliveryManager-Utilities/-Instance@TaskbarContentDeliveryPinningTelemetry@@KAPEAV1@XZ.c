/*
 * XREFs of ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000DEA4
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E3A4 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DDA4 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     atexit @ 0x1800CB4F4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
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
    qword_180194360 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    Context = &qword_180194360;
    atexit(_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
    qword_180194368 = (__int64)TaskbarLogging::Provider();
    byte_180194370 = 0;
    dword_180194374 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180194360 + 8))(&qword_180194360);
    InitOnceComplete(&`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper, 0, &qword_180194360);
  }
  return (struct TaskbarContentDeliveryPinningTelemetry *)Context;
}
