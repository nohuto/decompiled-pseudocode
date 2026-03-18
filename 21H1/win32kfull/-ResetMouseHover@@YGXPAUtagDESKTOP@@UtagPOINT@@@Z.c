/*
 * XREFs of ?ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z @ 0xC4DB2
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _TrackMouseEvent@4 @ 0x9A9BE (_TrackMouseEvent@4.c)
 * Callees:
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

void __userpurge ResetMouseHover(_DWORD *a1@<ecx>, struct tagDESKTOP *a2, struct tagPOINT a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi

  _SetSystemTimer(a1[31], xxxSystemTimerProc, 0);
  v4 = (unsigned int)gcxMouseHover >> 1;
  v5 = (unsigned int)gcyMouseHover >> 1;
  a1[27] = (char *)a2 - ((unsigned int)gcxMouseHover >> 1);
  a1[28] = a3.x - v5;
  a1[29] = (char *)a2 + v4;
  a1[30] = v5 + a3.x;
}
