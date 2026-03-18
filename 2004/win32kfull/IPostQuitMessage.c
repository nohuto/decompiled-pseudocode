/*
 * XREFs of IPostQuitMessage @ 0x1C00C0274
 * Callers:
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BFF3C (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00C0250 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     LogQMsg @ 0x1C01D3840 (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a2;
  if ( (_DWORD)gMsgQLog )
  {
    memset(v5, 0, 0xA0uLL);
    v5[5] = 0LL;
    LODWORD(v5[3]) = 18;
    v5[4] = v3;
    LogQMsg(v5);
  }
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 480) |= 0x40000000u;
  *(_DWORD *)(a1 + 576) = v3;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
