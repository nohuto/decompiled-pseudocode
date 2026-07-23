/*
 * XREFs of PnpEarlyLaunchImageNotificationPostProcess @ 0x140A6C200
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 */

void __fastcall PnpEarlyLaunchImageNotificationPostProcess(__int64 a1, __int64 a2, int *a3, int *a4, __int64 a5)
{
  __int64 v7; // rdx

  PnpDiagnosticTraceObject(&KMPnPEvt_EarlyLaunch_LoadNotification_Stop, (unsigned __int16 *)(a5 + 8));
  v7 = *a3;
  if ( *((_DWORD *)PnpClassificationRank + v7) > *((_DWORD *)PnpClassificationRank + *a4) )
    *a4 = v7;
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 2));
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 14));
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 10));
}
