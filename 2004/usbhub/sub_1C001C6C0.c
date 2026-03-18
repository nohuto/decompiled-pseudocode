/*
 * XREFs of sub_1C001C6C0 @ 0x1C001C6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall sub_1C001C6C0(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
