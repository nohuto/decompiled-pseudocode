/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F3E90
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C005C11C (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00B0100;
    if ( !qword_1C00B0100 )
      break;
    qword_1C00B0100 = *(void **)qword_1C00B0100;
    operator delete[](v0);
  }
}
