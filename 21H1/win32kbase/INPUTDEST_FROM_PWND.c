/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C005C7C0
 * Callers:
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C005D290 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0188F88 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0199C60 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01C287C (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01C29D0 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  memset(a1, 0, 0x70uLL);
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
    a1[27] = *(_DWORD *)(*(_QWORD *)(v4 + 416) + 1088LL);
  }
  return a1;
}
