/*
 * XREFs of _lambda_da24f1cfb4b7f8e158997fb0a51b3ded_::operator() @ 0x1C02EBDCC
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall lambda_da24f1cfb4b7f8e158997fb0a51b3ded_::operator()(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int *v6; // rdi
  int *v7; // rbx
  int v8; // edx
  __int64 v9; // rax
  __int64 *v10; // rdx
  _DWORD v12[2]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  int v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+8Ch] [rbp+2Bh]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  __int64 v21; // [rsp+98h] [rbp+37h]

  v5 = *(_QWORD *)a1[3];
  if ( v5 && !*(_BYTE *)(v5 + 18496) )
  {
    v6 = *a1;
    v7 = a1[2];
    WdLogSingleEntry3(2LL, (unsigned int)*v7, **a1, -1071775725LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Display broker was just disabled during UpdateDisplayConfig in session 0x%I64x, override ntStatus from 0x"
                "%I64x to 0x%I64x.",
      (unsigned int)*v7,
      *v6,
      -1071775725LL,
      0LL,
      0LL);
    *v6 = -1071775725;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableRuntimeDebugBreakForIdd__private_reporting,
    0x167168Fu,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  memset(v13, 0, sizeof(v13));
  v16 = 0;
  v8 = **a1;
  v9 = *(_QWORD *)a1[1];
  v19 = 0;
  v20 = 0;
  v15 = 0;
  v14 = 0LL;
  v18 = v8;
  v10 = (__int64 *)a1[2];
  v12[0] = 30;
  v12[1] = 72;
  memset(v13, 0, sizeof(v13));
  v17 = 106;
  v21 = v9;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, *v10);
}
