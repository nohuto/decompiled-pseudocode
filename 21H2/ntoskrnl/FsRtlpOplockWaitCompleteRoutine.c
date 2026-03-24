/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x14088C0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
