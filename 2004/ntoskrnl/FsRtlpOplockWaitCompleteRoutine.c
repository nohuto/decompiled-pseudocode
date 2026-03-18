/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x140889000
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
