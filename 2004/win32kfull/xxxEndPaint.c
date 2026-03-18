/*
 * XREFs of xxxEndPaint @ 0x1C005D6C0
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C005D518 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C005D590 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x1C008EDF0 (NtUserBeginPaint.c)
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02365AC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00600AC (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    {
      InternalInvalidate3(a1);
      if ( !--WPP_MAIN_CB.AlignmentRequirement )
      {
        GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0LL, a1, 1026LL, 1LL);
  }
  SetOrClrWF(0LL, a1, 1025LL, 1LL);
  SetOrClrWF(0LL, a1, 1028LL, 1LL);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 296LL) )
    zzzInternalShowCaret();
  return 1LL;
}
