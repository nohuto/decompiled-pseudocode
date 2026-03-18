/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C005FBE4
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C005CB6C (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C005FC74 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0062854 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rcx
  __int64 PendingMouseMovePoint; // rax
  __int64 v6; // xmm0_8
  const struct CInputDest *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  _BYTE v11[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( *((_DWORD *)this + 2) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint((__int64)v11, (__int64)a2);
    v6 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v9 = v6;
    v10 = PendingMouseMovePoint;
    ((void (__fastcall *)(CMouseProcessor *, const struct CInputDest *, _QWORD, __int64 *, int, _QWORD))CMouseProcessor::PostMouseMoveToInputDest)(
      this,
      a2,
      0LL,
      &v9,
      1,
      0LL);
    if ( QHelper::HasPendingMouseMove(a2, v7) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  }
}
