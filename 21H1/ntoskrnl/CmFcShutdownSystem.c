/*
 * XREFs of CmFcShutdownSystem @ 0x1408667F0
 * Callers:
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C3850 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x1408792B4 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C01988);
  }
}
