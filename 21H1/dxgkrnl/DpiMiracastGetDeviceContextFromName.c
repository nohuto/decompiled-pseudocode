/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x1C02C989C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0053910 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0054858 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02CB028 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C00514D0 (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  String1 = 0LL;
  RtlInitUnicodeString(&String1, SourceString);
  AcquireMiniportListMutex();
  v1 = qword_1C00AFE18;
  if ( (__int64 *)qword_1C00AFE18 == &qword_1C00AFE18 )
    goto LABEL_6;
  do
  {
    v2 = v1;
    if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)(v1 + 160), 1u) )
      break;
    v1 = *(_QWORD *)v1;
  }
  while ( (__int64 *)v1 != &qword_1C00AFE18 );
  if ( (__int64 *)v1 == &qword_1C00AFE18 )
LABEL_6:
    v2 = 0LL;
  else
    DpiMiracastAddRefMiracastDeviceContext(v2, v2);
  _InterlockedExchange64(&qword_1C00AFA50, 0LL);
  KeReleaseMutex(Mutex, 0);
  return v2;
}
