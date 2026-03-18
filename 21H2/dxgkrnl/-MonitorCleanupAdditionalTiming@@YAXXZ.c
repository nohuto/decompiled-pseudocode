/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C03B4AF4
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C006B194 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C0131EA0;
    if ( !qword_1C0131EA0 )
      break;
    qword_1C0131EA0 = *(void **)qword_1C0131EA0;
    operator delete[](v0);
  }
}
