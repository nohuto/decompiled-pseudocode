/*
 * XREFs of _NtUserGetQueueStatus@4 @ 0xF2B8A
 * Callers:
 *     <none>
 * Callees:
 *     __GetQueueStatus@4 @ 0x6E7E0 (__GetQueueStatus@4.c)
 */

int __stdcall NtUserGetQueueStatus(__int16 a1)
{
  int QueueStatus; // esi

  EnterSharedCrit(0, 1);
  QueueStatus = _GetQueueStatus(a1);
  UserSessionSwitchLeaveCrit();
  return QueueStatus;
}
