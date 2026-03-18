/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14037A3A8
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14037A2DC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A344 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x140789D38 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408E5A94 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140A42AE8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24AE8);
  v2 = _InterlockedOr64(&qword_140C24AE8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24AF8, 0, 0);
  return v2;
}
