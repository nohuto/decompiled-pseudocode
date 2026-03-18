/*
 * XREFs of IPostQuitMessage @ 0x1C000B7A4
 * Callers:
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C000B46C (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C000B780 (_PostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     LogQMsg @ 0x1C01D2A30 (LogQMsg.c)
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
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = v3;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
