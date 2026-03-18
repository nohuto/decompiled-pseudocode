/*
 * XREFs of KiLogControlProtectionUserModeReturnMismatch @ 0x1403ED4C0
 * Callers:
 *     KiProcessControlProtection @ 0x14050D2F0 (KiProcessControlProtection.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C8D00 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 */

unsigned __int64 __fastcall KiLogControlProtectionUserModeReturnMismatch(__int64 a1)
{
  _KPROCESS *Process; // r10
  unsigned __int64 result; // rax
  int v3; // ett
  int v4; // [rsp+30h] [rbp-18h]

  Process = KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[2].ReadyListHead.Blink + 4);
  LODWORD(result) = HIDWORD(Process[2].ReadyListHead.Blink);
  do
  {
    v3 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[2].ReadyListHead.Blink + 1,
                             result | 0x10000,
                             result);
  }
  while ( v3 != (_DWORD)result );
  if ( (result & 0x10000) == 0 )
  {
    if ( (_DWORD)a1 == 1 || (_DWORD)a1 == 2 )
      EtwTimLogControlProtectionUserModeReturnMismatch(a1, Process);
    return (unsigned __int64)wil_details_FeatureReporting_ReportUsageToService(
                               (int)&Feature_CET_User_Audit_Livedump__private_reporting,
                               0x178806Fu,
                               0,
                               0,
                               (__int64)&Feature_PdttSupport_logged_traits,
                               0,
                               v4);
  }
  return result;
}
