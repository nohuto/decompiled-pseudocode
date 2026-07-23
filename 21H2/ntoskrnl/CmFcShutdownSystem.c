/*
 * XREFs of CmFcShutdownSystem @ 0x14086B2E4
 * Callers:
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C9670 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087DC14 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C01988);
  }
}
