/*
 * XREFs of ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616
 * Callers:
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z @ 0x25BC6 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _SkipWindowOnMonitor@4 @ 0x92526 (_SkipWindowOnMonitor@4.c)
 *     ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7 (-FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z.c)
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _IsSmallerThanScreen@8 @ 0x19E5B1 (_IsSmallerThanScreen@8.c)
 *     __MonitorFromWindow@8 @ 0x1B6E48 (__MonitorFromWindow@8.c)
 * Callees:
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

struct tagMONITOR *__userpurge _MonitorFromWindowInternal@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        int a5)
{
  int v7; // eax
  _DWORD *Prop; // ecx
  _DWORD v11[4]; // [esp+14h] [ebp-14h] BYREF

  if ( **(_DWORD **)GetDispInfo() == 1 && a1 )
    return *(struct tagMONITOR **)(GetDispInfo() + 52);
  if ( !a2 )
  {
    if ( a1 != 1 && a1 != 2 )
      return 0;
    return *(struct tagMONITOR **)(GetDispInfo() + 52);
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 23) & 0x20) == 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(a2 + 20);
    Prop = (_DWORD *)(v7 + 52);
    goto LABEL_6;
  }
  Prop = (_DWORD *)_GetProp(1);
  if ( !Prop )
  {
    if ( (*(_WORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 56) + 20) + 30) & 0x3FFF) != 0x29D )
      goto LABEL_5;
    return *(struct tagMONITOR **)(GetDispInfo() + 52);
  }
  v7 = *(_DWORD *)(a2 + 20);
LABEL_6:
  if ( !a3 )
    return (struct tagMONITOR *)_MonitorFromRect(Prop, a1, *(_DWORD *)(v7 + 184));
  v11[0] = *Prop;
  v11[1] = Prop[1];
  v11[2] = Prop[2];
  v11[3] = Prop[3];
  LogicalToPhysicalDPIRect(v11, v11, *(_DWORD *)(v7 + 184), 0);
  return (struct tagMONITOR *)_MonitorFromRect(v11, a1, 18);
}
