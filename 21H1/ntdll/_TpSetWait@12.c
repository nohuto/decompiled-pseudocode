/*
 * XREFs of _TpSetWait@12 @ 0x4B2B7A90
 * Callers:
 *     <none>
 * Callees:
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 */

void __cdecl TpSetWait(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout)
{
  TpSetWaitEx(Wait, Handle, Timeout, 0);
}
