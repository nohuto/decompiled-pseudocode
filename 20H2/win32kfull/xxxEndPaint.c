/*
 * XREFs of xxxEndPaint @ 0x1C00F4F60
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserBeginPaint @ 0x1C00CC350 (NtUserBeginPaint.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00F4DB0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C00F4E30 (NtUserEndPaint.c)
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023571C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     zzzInternalShowCaret @ 0x1C00D6840 (zzzInternalShowCaret.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    {
      InternalInvalidate3(a1, *(__int64 *)&WPP_MAIN_CB.DeviceQueue.Type, gRdwFlags);
      if ( !--LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, (__int64)a1, 0x402u, 1);
  }
  SetOrClrWF(0, (__int64)a1, 0x401u, 1);
  SetOrClrWF(0, (__int64)a1, 0x404u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzInternalShowCaret();
  return 1LL;
}
