/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1F8
 * Callers:
 *     RIMUnInitialize @ 0x1C004F110 (RIMUnInitialize.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_s @ 0x1C015BD8C (WPP_RECORDER_SF_s.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rdi
  int v4; // edx
  __int64 *v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  void *v8; // rsi

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      (_DWORD)a2,
      1,
      12,
      (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids,
      (__int64)"RIMDevObj leaks");
  DbgPrintGDI("%s\n", "RIMDevObj leaks");
  do
  {
    v5 = v2 - 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v4,
        1,
        13,
        (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids,
        (_BYTE)v2 - 16);
    }
    DbgPrintGDI("Leaked %p: ", v2 - 2);
    v2 = (__int64 *)*v2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 14, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids);
    }
    DbgPrintGDI("Cleaning up\n");
    if ( *((_BYTE *)v5 + 9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v8 = (void *)v5[53];
    if ( !v8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    RIMFreeSpecificDevWorker(v8, v5 + 11);
    ObfDereferenceObject(v8);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
