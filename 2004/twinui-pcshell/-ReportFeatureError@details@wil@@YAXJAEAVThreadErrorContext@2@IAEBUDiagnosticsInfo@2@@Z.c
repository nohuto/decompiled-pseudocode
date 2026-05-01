/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180212350
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180046658 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180212740 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180234ADC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x180239FC0 (-Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18013B8C8 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18019C494 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x180212240 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  unsigned int v5; // edi
  int v6; // esi
  void *v8; // r9
  const struct wil::FailureInfo *v9; // rdx
  void (*v10)(unsigned int, const struct FEATURE_ERROR *); // rax
  _BYTE v11[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+24h] [rbp-DCh]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+58h] [rbp-A8h]
  struct DiagnosticsInfo v15; // [rsp+A0h] [rbp-60h]
  struct DiagnosticsInfo v16[50]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = (unsigned int)a3;
  v6 = (int)this;
  if ( !wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, (int)this) )
  {
    memset_0(v11, 0, 0x90uLL);
    v14 = *(unsigned __int16 *)(a4 + 24);
    v13 = *(_QWORD *)(a4 + 8);
    v15 = *(struct DiagnosticsInfo *)a4;
    v12 = v6;
    wil::SetLastError((wil *)v11, v9);
    wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, v6);
  }
  wil::details::StagingFailureInformation::StagingFailureInformation(
    v16,
    (const struct wil::FailureInfo *)v11,
    (const struct DiagnosticsInfo *)a4,
    v8);
  v10 = g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError || (v10 = g_wil_details_apiRecordFeatureError) != 0LL )
    ((void (__fastcall *)(_QWORD, struct DiagnosticsInfo *))v10)(v5, v16);
}
