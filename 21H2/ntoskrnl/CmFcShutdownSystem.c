/*
 * XREFs of CmFcShutdownSystem @ 0x140911208
 * Callers:
 *     CmShutdownSystem0 @ 0x14053EBB0 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1406527A8 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140922C5C (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C063C0);
  }
}
