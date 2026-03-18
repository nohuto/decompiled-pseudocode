/*
 * XREFs of NtReplyWaitReceivePort @ 0x1405F2B10
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1405F29B0 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1, _QWORD *a2, __m256i *a3, unsigned __int64 a4)
{
  return NtReplyWaitReceivePortEx(a1, a2, a3, a4, 0LL);
}
