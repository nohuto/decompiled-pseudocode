/*
 * XREFs of PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F94D8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C00F9470 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F9C84 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DCEHitTestWindow @ 0x1C01E44C4 (DCEHitTestWindow.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rsi
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  unsigned __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  if ( (v7 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v8 = 0LL;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow((struct tagWND *)a4);
  if ( TopLevelOrDpiBoundaryWindow )
    v8 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
  v10 = *a2;
  v14 = *a2;
  if ( v8 )
  {
    v11 = DCEHitTestWindow(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL, v8, &v14, a3);
    v12 = v14;
LABEL_7:
    if ( v11 )
    {
      *a1 = v12;
      return 1LL;
    }
    return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
  }
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v11 = PtInRect((_DWORD *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v10);
    goto LABEL_7;
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
}
