/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C005CE5C
 * Callers:
 *     TrackMouseEvent @ 0x1C005B8A0 (TrackMouseEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C006024C (_SetSystemTimer.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  int v4; // edx
  int v5; // r8d
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  SetSystemTimer(*((_QWORD *)a1 + 23), 65530, *((_DWORD *)a1 + 53), (unsigned int)xxxSystemTimerProc, 0);
  v4 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) >> 1;
  v5 = HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1;
  *((_DWORD *)a1 + 49) = x - (LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) >> 1);
  *((_DWORD *)a1 + 50) = y - v5;
  *((_DWORD *)a1 + 51) = v4 + x;
  *((_DWORD *)a1 + 52) = v5 + y;
}
