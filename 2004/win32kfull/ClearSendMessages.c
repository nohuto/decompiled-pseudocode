/*
 * XREFs of ClearSendMessages @ 0x1C008E428
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
