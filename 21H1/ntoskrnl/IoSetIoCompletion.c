/*
 * XREFs of IoSetIoCompletion @ 0x1406DD050
 * Callers:
 *     PspSendJobNotification @ 0x1403144BC (PspSendJobNotification.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, 0LL, 0);
}
