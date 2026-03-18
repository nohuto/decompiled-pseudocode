/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1406E0450
 * Callers:
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x14078EE9C (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x14066D068 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, char a2)
{
  if ( a2 && !RtlTestProtectedAccess(*(_BYTE *)(a1 + 2170), 0x31u) )
    return 3221225506LL;
  else
    return 0LL;
}
