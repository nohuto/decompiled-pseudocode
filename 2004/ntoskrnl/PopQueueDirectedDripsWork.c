/*
 * XREFs of PopQueueDirectedDripsWork @ 0x140378508
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14037843C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1403784A4 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408DFC54 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140A3C848 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C249C8);
  v2 = _InterlockedOr64(&qword_140C249C8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C249D8, 0, 0);
  return v2;
}
