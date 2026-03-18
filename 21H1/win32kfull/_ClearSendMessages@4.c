/*
 * XREFs of _ClearSendMessages@4 @ 0x719D2
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 */

int ClearSendMessages()
{
  return _gsmsList;
}
