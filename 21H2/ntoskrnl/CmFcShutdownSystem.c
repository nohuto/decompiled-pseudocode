/*
 * XREFs of CmFcShutdownSystem @ 0x14086B184
 * Callers:
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C9440 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087DAB4 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C01988);
  }
}
