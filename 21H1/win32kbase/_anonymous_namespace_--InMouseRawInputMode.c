/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C0062758
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0062854 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsSpatialDelegationEnabledForThread @ 0x1C0062830 (IsSpatialDelegationEnabledForThread.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v10; // eax
  bool v11; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( qword_1C0257EC0 )
        v10 = qword_1C0257EC0(v6);
      else
        v10 = 0;
      if ( !v10 )
        return v5;
      v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 832LL) + 100LL) & 0x100) == 0;
      goto LABEL_14;
    }
    if ( a3 == 1 )
    {
      if ( qword_1C0257EC0 )
        v8 = qword_1C0257EC0(v6);
      else
        v8 = 0;
      if ( !v8 )
        return v5;
      v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 832LL) + 100LL) & 2) == 0;
LABEL_14:
      if ( !v11 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  }
  return 0;
}
