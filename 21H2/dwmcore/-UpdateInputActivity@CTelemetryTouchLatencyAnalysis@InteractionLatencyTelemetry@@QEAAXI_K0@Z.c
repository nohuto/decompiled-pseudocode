/*
 * XREFs of ?UpdateInputActivity@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXI_K0@Z @ 0x180015508
 * Callers:
 *     ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x1800154C0 (-TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z.c)
 * Callees:
 *     ?Update@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEAAXI_K0@Z @ 0x18001559C (-Update@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEAAXI_K0@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateInputActivity(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-19h] BYREF
  unsigned int *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  unsigned __int64 *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  unsigned __int64 *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]

  if ( (unsigned int)dword_1803D0EB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
  {
    v19 = v8;
    v18 = &v11;
    v17 = v8;
    v16 = &v12;
    v11 = a4;
    v14 = &v10;
    v12 = a3;
    v10 = a2;
    v15 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v9, (int)&dword_18036CED5, 0, 0, 5u, &v13);
  }
  InteractionLatencyTelemetry::CMouseKeyboardInfo::Update(
    (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 6912),
    a2,
    a3,
    a4);
}
