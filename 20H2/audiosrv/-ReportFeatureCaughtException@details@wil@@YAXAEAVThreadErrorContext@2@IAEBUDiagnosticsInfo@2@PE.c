/*
 * XREFs of ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800BA258
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x1800B8A00 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800B76F0 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x1800B8CB0 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 */

void __fastcall wil::details::ReportFeatureCaughtException(
        wil::details *this,
        struct wil::ThreadErrorContext *a2,
        const struct DiagnosticsInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v5; // edi
  void *v7; // r9
  void (*v8)(unsigned int, const struct FEATURE_ERROR *); // rax
  _BYTE v9[144]; // [rsp+20h] [rbp-248h] BYREF
  struct DiagnosticsInfo v10[50]; // [rsp+B0h] [rbp-1B8h] BYREF

  v5 = (unsigned int)a2;
  memset_0(v9, 0, sizeof(v9));
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(this, (struct wil::FailureInfo *)v9, a3) )
  {
    wil::details::StagingFailureInformation::StagingFailureInformation(v10, (const struct wil::FailureInfo *)v9, a3, v7);
    v8 = g_wil_details_internalRecordFeatureError;
    if ( g_wil_details_internalRecordFeatureError || (v8 = g_wil_details_apiRecordFeatureError) != 0LL )
      ((void (__fastcall *)(_QWORD, struct DiagnosticsInfo *))v8)(v5, v10);
  }
}
