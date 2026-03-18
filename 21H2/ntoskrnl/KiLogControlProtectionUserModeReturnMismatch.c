/*
 * XREFs of KiLogControlProtectionUserModeReturnMismatch @ 0x140569768
 * Callers:
 *     KiProcessControlProtection @ 0x140569910 (KiProcessControlProtection.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     KiShouldLogUserModeReturnMismatch @ 0x140960B34 (KiShouldLogUserModeReturnMismatch.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6BB0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 */

__int64 (__fastcall *__fastcall KiLogControlProtectionUserModeReturnMismatch(
        unsigned int a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  _KPROCESS *Process; // rsi
  int v7; // [rsp+30h] [rbp-18h]

  Process = KeGetCurrentThread()->Process;
  if ( (unsigned __int8)KiShouldLogUserModeReturnMismatch(Process, a1, *(_QWORD *)(a3 + 8)) )
    EtwTimLogControlProtectionUserModeReturnMismatch(a1, Process, a3);
  return wil_details_FeatureReporting_ReportUsageToService(
           (__int64)&Feature_CET_User_Audit_Livedump__private_reporting,
           0x178806Fu,
           0,
           0,
           (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
           0,
           v7);
}
