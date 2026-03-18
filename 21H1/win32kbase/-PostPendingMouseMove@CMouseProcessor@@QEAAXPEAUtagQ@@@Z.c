/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0062B4C
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     PostPendingMouseMove @ 0x1C0062B20 (PostPendingMouseMove.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0062E68 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]

  if ( (*((_DWORD *)a2 + 97) & 0x20) != 0 )
  {
    v4 = (int)qword_1C0258CE8;
    if ( qword_1C0258CE8 )
      v4 = qword_1C0258CE8();
    if ( v4 )
    {
      v5 = *((_DWORD *)a2 + 48);
      v9 = *((_QWORD *)a2 + 23);
      v10 = v5;
    }
    else
    {
      v10 = 18;
      v9 = *((_QWORD *)gpsi + 620);
    }
    v7 = v9;
    v8 = v10;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v7);
    if ( (*((_DWORD *)a2 + 97) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  }
}
