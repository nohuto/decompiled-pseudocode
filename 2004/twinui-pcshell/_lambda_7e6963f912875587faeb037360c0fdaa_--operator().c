/*
 * XREFs of _lambda_7e6963f912875587faeb037360c0fdaa_::operator() @ 0x1800972AC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_19a3fe0c8428e894f10a02aed0bcaaf2___::Invoke @ 0x180097620 (CAsyncCallbackWithLambda__lambda_19a3fe0c8428e894f10a02aed0bcaaf2___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x1800975C4 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x180205F58 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7e6963f912875587faeb037360c0fdaa_::operator()(CortanaAvailability *a1)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(*(_QWORD *)a1 + 332LL) )
  {
    CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard();
    *(_BYTE *)(*(_QWORD *)a1 + 333LL) = 1;
    return 0LL;
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)a1 + 332LL) = 1;
    v3 = *(_QWORD *)a1;
    for ( *(_BYTE *)(*(_QWORD *)a1 + 333LL) = 0; ; *(_BYTE *)(*(_QWORD *)a1 + 333LL) = 0 )
    {
      v4 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 333LL) )
        break;
    }
    v5 = 0;
LABEL_8:
    *(_BYTE *)(v3 + 332) = 0;
    return v5;
  }
}
