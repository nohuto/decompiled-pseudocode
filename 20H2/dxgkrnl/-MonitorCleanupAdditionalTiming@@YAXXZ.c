/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F7460
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C005D06C (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00B1200;
    if ( !qword_1C00B1200 )
      break;
    qword_1C00B1200 = *(void **)qword_1C00B1200;
    operator delete[](v0);
  }
}
