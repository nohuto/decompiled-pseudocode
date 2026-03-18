/*
 * XREFs of CmFcShutdownSystem @ 0x14086D554
 * Callers:
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C7C10 (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140880114 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    TlgAggregateFlush((__int64)&dword_140C01988);
  }
}
