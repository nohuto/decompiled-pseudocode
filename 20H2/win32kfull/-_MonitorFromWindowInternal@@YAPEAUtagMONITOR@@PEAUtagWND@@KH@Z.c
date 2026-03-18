/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768
 * Callers:
 *     SkipWindowOnMonitor @ 0x1C000F9B4 (SkipWindowOnMonitor.c)
 *     IsSmallerThanScreen @ 0x1C0018AD0 (IsSmallerThanScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00BF418 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFB60 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C0202F50 (NtUserSetWindowShowState.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  _QWORD *DispInfo; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v13; // rax
  struct tagRECT *v14; // rcx
  struct tagRECT v15; // xmm0
  struct tagRECT *Prop; // rax
  struct tagRECT v17; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = a2;
  DispInfo = (_QWORD *)GetDispInfo(a1, a2, a3, a4);
  v10 = 1LL;
  v11 = (_DWORD *)*DispInfo;
  if ( *(_DWORD *)*DispInfo == 1 && v5 )
    return *(struct tagMONITOR **)(GetDispInfo(v9, v8, v10, v11) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
    v14 = Prop;
    if ( Prop )
    {
      if ( !v4 )
        return (struct tagMONITOR *)MonitorFromRect(v14);
      v15 = *Prop;
      v13 = *((_QWORD *)a1 + 5);
      goto LABEL_8;
    }
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v9 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v13 = *((_QWORD *)a1 + 5);
      v14 = (struct tagRECT *)(v13 + 88);
      if ( !v4 )
        return (struct tagMONITOR *)MonitorFromRect(v14);
      v15 = *v14;
LABEL_8:
      v17 = v15;
      LogicalToPhysicalDPIRect(&v17, &v17, *(unsigned int *)(v13 + 288), 0LL);
      v14 = &v17;
      return (struct tagMONITOR *)MonitorFromRect(v14);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v9, v8, v10, v11) + 96);
  }
  if ( (unsigned int)(v5 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v9, v8, v10, v11) + 96);
  return 0LL;
}
