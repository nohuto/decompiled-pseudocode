/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00311A4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsSmallerThanScreen @ 0x1C005CD40 (IsSmallerThanScreen.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     SkipWindowOnMonitor @ 0x1C00F6014 (SkipWindowOnMonitor.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01D0970 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C0203DC0 (NtUserSetWindowShowState.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  struct tagRECT *v10; // rcx
  struct tagRECT v11; // xmm0
  struct tagRECT *Prop; // rax
  struct tagRECT v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( **(_DWORD **)GetDispInfo(a1, a2) == 1 && v4 )
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (struct tagRECT *)GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
    v10 = Prop;
    if ( Prop )
    {
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v10);
      v11 = *Prop;
      v9 = *((_QWORD *)a1 + 5);
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v7 + 42) & 0x3FFF) != 0x29D )
    {
LABEL_6:
      v9 = *((_QWORD *)a1 + 5);
      v10 = (struct tagRECT *)(v9 + 88);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v10);
      v11 = *v10;
LABEL_8:
      v13 = v11;
      LogicalToPhysicalDPIRect(&v13, &v13, *(unsigned int *)(v9 + 288), 0LL);
      v10 = &v13;
      return (struct tagMONITOR *)MonitorFromRect(v10);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 96);
  }
  if ( (unsigned int)(v4 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 96);
  return 0LL;
}
