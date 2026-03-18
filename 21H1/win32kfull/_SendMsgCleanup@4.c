/*
 * XREFs of _SendMsgCleanup@4 @ 0x9A52C
 * Callers:
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 * Callees:
 *     _xxxReceiverDied@4 @ 0xCC50E (_xxxReceiverDied@4.c)
 *     ?SenderDied@@YGXPAUtagSMS@@@Z @ 0xD487A (-SenderDied@@YGXPAUtagSMS@@@Z.c)
 */

int __stdcall SendMsgCleanup(int a1)
{
  return _gsmsList;
}
