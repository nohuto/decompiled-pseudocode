/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1403776F8
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14037762C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140377694 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x140779328 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408DE9F4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140A3CBF0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24C28);
  v2 = _InterlockedOr64(&qword_140C24C28, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24C38, 0, 0);
  return v2;
}
