/*
 * XREFs of SendMsgCleanup @ 0x1C00BE5B0
 * Callers:
 *     zzzCancelJournalling @ 0x1C004BD98 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BD330 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     xxxReceiverDied @ 0x1C00BC0A8 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x1C00BEB58 (UnlinkSendListSms.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
