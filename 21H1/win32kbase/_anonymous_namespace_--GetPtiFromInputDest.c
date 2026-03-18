/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0
 * Callers:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0048FC8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C005D080 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C005D314 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0062758 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01C29D0 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01C42A4 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 Queue; // rcx
  __int64 v6; // rax
  int v7; // eax

  v2 = 0LL;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      v7 = *(_DWORD *)(a1 + 92);
      if ( v7 == 2 ? *(_QWORD *)(a1 + 80) : 0LL )
      {
        if ( v7 == 2 )
          v2 = *(_QWORD *)(a1 + 80);
        return *(_QWORD *)(v2 + 16);
      }
    }
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0LL);
    else
      Queue = gpqForeground;
    if ( Queue )
    {
      if ( !a2 )
        return *(_QWORD *)(Queue + 88);
      if ( a2 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(Queue);
        return v2;
      }
      v6 = *(_QWORD *)(Queue + 104);
      if ( v6 )
        return *(_QWORD *)(v6 + 16);
      else
        return *(_QWORD *)(Queue + 88);
    }
  }
  return v2;
}
