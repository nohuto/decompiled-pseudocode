/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00472D0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0049940 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006DA78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E5A8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01BCC70 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01BE528 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0071274 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // edi
  __int64 Queue; // rcx
  __int64 v8; // rax
  int v9; // eax

  v4 = 0LL;
  v5 = a2;
  if ( (_DWORD)a2 == 2 )
  {
    if ( a1 )
    {
      v9 = *(_DWORD *)(a1 + 92);
      if ( v9 == 2 ? *(_QWORD *)(a1 + 80) : 0LL )
      {
        if ( v9 == 2 )
          v4 = *(_QWORD *)(a1 + 80);
        return *(_QWORD *)(v4 + 16);
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
      if ( !v5 )
        return *(_QWORD *)(Queue + 88);
      if ( v5 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(Queue, a2, a3, a4);
        return v4;
      }
      v8 = *(_QWORD *)(Queue + 104);
      if ( v8 )
        return *(_QWORD *)(v8 + 16);
      else
        return *(_QWORD *)(Queue + 88);
    }
  }
  return v4;
}
