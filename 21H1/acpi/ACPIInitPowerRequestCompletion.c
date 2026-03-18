/*
 * XREFs of ACPIInitPowerRequestCompletion @ 0x1C002D0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInitPowerRequestCompletion(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
