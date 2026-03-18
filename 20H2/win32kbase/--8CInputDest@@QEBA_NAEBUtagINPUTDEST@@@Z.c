/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC
 * Callers:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00293D8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033488 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     HandleInputDestDestruction @ 0x1C005527C (HandleInputDestDestruction.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00A8B58 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     IsCapturedBySystem @ 0x1C00BE930 (IsCapturedBySystem.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0194FB4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0196B9C (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0197E28 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C019E340 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputDest::operator==(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // zf

  v6 = *a1;
  if ( !(_DWORD)v6 && !*(_DWORD *)a2 )
  {
    LOBYTE(v7) = 1;
    return v7;
  }
  v7 = v6 & *(_DWORD *)a2;
  if ( v7 )
  {
    LOBYTE(v6) = 1;
    if ( (v7 & 1) != 0 )
    {
      if ( a1[2] != *(_DWORD *)(a2 + 8) )
        goto LABEL_13;
      v8 = a1[3] == *(_DWORD *)(a2 + 12);
    }
    else
    {
      if ( (v7 & 2) == 0 )
      {
        if ( (v7 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
        LOBYTE(v7) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
        return v7;
      }
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
        goto LABEL_13;
      v8 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
    }
    if ( v8 )
    {
LABEL_14:
      LOBYTE(v7) = v6;
      return v7;
    }
LABEL_13:
    LOBYTE(v6) = 0;
    goto LABEL_14;
  }
  return v7;
}
