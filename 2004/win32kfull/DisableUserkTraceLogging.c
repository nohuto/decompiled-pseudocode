/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0128410
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C037CBB8 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = qword_1C032B418;
  qword_1C032B418 = 0LL;
  dword_1C032B3F8 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C0330B50;
  qword_1C0330B50 = 0LL;
  dword_1C0330B30 = 0;
  return EtwUnregister(v1);
}
