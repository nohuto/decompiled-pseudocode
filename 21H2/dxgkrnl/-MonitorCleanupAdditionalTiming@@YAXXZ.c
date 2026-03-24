/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F8760
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C005DF7C (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00B3200;
    if ( !qword_1C00B3200 )
      break;
    qword_1C00B3200 = *(void **)qword_1C00B3200;
    operator delete[](v0);
  }
}
