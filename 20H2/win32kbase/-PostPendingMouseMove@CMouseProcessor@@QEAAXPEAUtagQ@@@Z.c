/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0030F7C
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C002EBFC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     PostPendingMouseMove @ 0x1C0030F50 (PostPendingMouseMove.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0031054 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]

  if ( (*((_DWORD *)a2 + 97) & 0x20) != 0 )
  {
    v4 = (int)qword_1C0250D28;
    if ( qword_1C0250D28 )
      v4 = qword_1C0250D28();
    if ( v4 )
    {
      v5 = *((_DWORD *)a2 + 48);
      v12 = *((_QWORD *)a2 + 23);
      v13 = v5;
    }
    else
    {
      v13 = 18;
      v12 = *((_QWORD *)gpsi + 620);
    }
    v10 = v12;
    v11 = v13;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v10);
    if ( (*((_DWORD *)a2 + 97) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  }
}
