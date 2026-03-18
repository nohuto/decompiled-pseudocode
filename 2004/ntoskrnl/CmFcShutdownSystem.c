/*
 * XREFs of CmFcShutdownSystem @ 0x140867B34
 * Callers:
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C3F80 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087A5A4 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C01988);
  }
}
