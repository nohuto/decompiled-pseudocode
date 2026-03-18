/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F8400
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C005D19C (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00B2208;
    if ( !qword_1C00B2208 )
      break;
    qword_1C00B2208 = *(void **)qword_1C00B2208;
    operator delete[](v0);
  }
}
