/*
 * XREFs of ClearSendMessages @ 0x1C00D37C8
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
