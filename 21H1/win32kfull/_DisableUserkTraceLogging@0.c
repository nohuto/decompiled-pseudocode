/*
 * XREFs of _DisableUserkTraceLogging@0 @ 0xD3B7C
 * Callers:
 *     <none>
 * Callees:
 *     _TlgUnregisterAggregateProvider@4 @ 0x27A48A (_TlgUnregisterAggregateProvider@4.c)
 */

NTSTATUS __stdcall DisableUserkTraceLogging()
{
  REGHANDLE v1; // [esp-8h] [ebp-Ch]
  REGHANDLE v2; // [esp-8h] [ebp-Ch]

  v1 = qword_266298;
  dword_266280 = 0;
  qword_266298 = 0LL;
  EtwUnregister(v1);
  TlgUnregisterAggregateProvider();
  v2 = qword_268A00;
  dword_2689E8 = 0;
  qword_268A00 = 0LL;
  return EtwUnregister(v2);
}
