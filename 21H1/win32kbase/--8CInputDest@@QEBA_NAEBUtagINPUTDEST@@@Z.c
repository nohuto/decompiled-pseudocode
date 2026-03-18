/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8
 * Callers:
 *     IsCapturedBySystem @ 0x1C0050AD0 (IsCapturedBySystem.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C005C774 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C005D314 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     HandleInputDestDestruction @ 0x1C007166C (HandleInputDestDestruction.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019D1D4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C019EDBC (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01A0048 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C01A6440 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputDest::operator==(unsigned int *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  bool v6; // zf

  v4 = *a1;
  if ( !(_DWORD)v4 && !*(_DWORD *)a2 )
  {
    LOBYTE(v5) = 1;
    return v5;
  }
  v5 = v4 & *(_DWORD *)a2;
  if ( v5 )
  {
    LOBYTE(v4) = 1;
    if ( (v5 & 1) != 0 )
    {
      if ( a1[2] != *(_DWORD *)(a2 + 8) )
        goto LABEL_13;
      v6 = a1[3] == *(_DWORD *)(a2 + 12);
    }
    else
    {
      if ( (v5 & 2) == 0 )
      {
        if ( (v5 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
        LOBYTE(v5) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
        return v5;
      }
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
        goto LABEL_13;
      v6 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
    }
    if ( v6 )
    {
LABEL_14:
      LOBYTE(v5) = v4;
      return v5;
    }
LABEL_13:
    LOBYTE(v4) = 0;
    goto LABEL_14;
  }
  return v5;
}
