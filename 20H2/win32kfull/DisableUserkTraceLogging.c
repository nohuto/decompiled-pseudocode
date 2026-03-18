/*
 * XREFs of DisableUserkTraceLogging @ 0x1C012A420
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C037BBB8 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = qword_1C032A418;
  qword_1C032A418 = 0LL;
  dword_1C032A3F8 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C032FB50;
  qword_1C032FB50 = 0LL;
  dword_1C032FB30 = 0;
  return EtwUnregister(v1);
}
