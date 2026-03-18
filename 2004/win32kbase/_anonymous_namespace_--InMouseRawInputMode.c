/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C006DA78
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C006DB74 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsSpatialDelegationEnabledForThread @ 0x1C006DB50 (IsSpatialDelegationEnabledForThread.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v13; // eax
  bool v14; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( qword_1C0251F00 )
        v13 = qword_1C0251F00(v6);
      else
        v13 = 0;
      if ( !v13 )
        return v5;
      v14 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 832LL) + 100LL) & 0x100) == 0;
      goto LABEL_14;
    }
    if ( a3 == 1 )
    {
      if ( qword_1C0251F00 )
        v11 = qword_1C0251F00(v6);
      else
        v11 = 0;
      if ( !v11 )
        return v5;
      v14 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 832LL) + 100LL) & 2) == 0;
LABEL_14:
      if ( !v14 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  }
  return 0;
}
