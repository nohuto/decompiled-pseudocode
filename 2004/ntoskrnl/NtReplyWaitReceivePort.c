/*
 * XREFs of NtReplyWaitReceivePort @ 0x140689980
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1406899A0 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1)
{
  return NtReplyWaitReceivePortEx(a1, 0LL);
}
