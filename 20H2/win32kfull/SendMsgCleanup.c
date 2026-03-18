/*
 * XREFs of SendMsgCleanup @ 0x1C007EE60
 * Callers:
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C007F3DC (xxxReceiverDied.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
