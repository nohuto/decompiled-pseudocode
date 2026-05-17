/*
 * XREFs of LdrShutdownProcess @ 0x18005DAA0
 * Callers:
 *     RtlExitUserProcess @ 0x18005D9D0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     EtwEventUnregister @ 0x1800503D0 (EtwEventUnregister.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005DDC4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     SbCleanupTrace @ 0x180060244 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x1800602A0 (RtlDetectHeapLeaks.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009B94C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 */

_UNKNOWN **__fastcall LdrShutdownProcess(struct _RTLP_FLS_CONTEXT *a1)
{
  _UNKNOWN **result; // rax
  struct _TEB *v2; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  struct _RTLP_FLS_DATA *FlsData; // rdx
  char v6; // si
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64); // r14
  _UNICODE_STRING *p_CommandLine; // [rsp+30h] [rbp-C8h]
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-A8h] BYREF
  int v14; // [rsp+58h] [rbp-A0h]
  __int128 v15; // [rsp+60h] [rbp-98h]
  __int128 v16; // [rsp+70h] [rbp-88h]
  __int128 v17; // [rsp+80h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-58h] BYREF
  int v20; // [rsp+A8h] [rbp-50h]
  __int128 v21; // [rsp+B0h] [rbp-48h]
  __int128 v22; // [rsp+C0h] [rbp-38h]
  __int128 v23; // [rsp+D0h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = NtCurrentTeb();
  ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
  if ( !byte_18016C508 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      p_CommandLine = &CommandLine;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6250,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v2->ClientId.UniqueProcess);
    }
    qword_18016C510 = (__int64)v2->ClientId.UniqueThread;
    byte_18016C508 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = (struct _RTLP_FLS_DATA *)v2->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(a1, FlsData, 1u);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v6 = 0;
      v8 = (__int64 *)qword_18016C4F8;
      while ( v8 != &qword_18016C4F0 )
      {
        v9 = (__int64)(v8 - 4);
        v8 = (__int64 *)v8[1];
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 56);
        if ( v10 && (*(_DWORD *)(v9 + 104) & 0x80000) != 0 )
        {
          v13 = 72LL;
          v14 = 1;
          v15 = 0LL;
          v16 = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(v9 + 136));
          wil_details_FeatureReporting_ReportUsageToService(
            (unsigned int)&Feature_Servicing_Type1_Telemetry__private_reporting,
            37097400,
            0,
            0,
            (__int64)&Feature_Servicing_Type1_Telemetry_logged_traits,
            0,
            (char)p_CommandLine);
          if ( *(_WORD *)(v9 + 110) )
            LdrpCallTlsInitializers(0, v9);
          LdrpCallInitRoutine(v10, *(_QWORD *)(v9 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
        }
      }
      wil_details_FeatureReporting_ReportUsageToService(
        (unsigned int)&Feature_Servicing_Type1_Telemetry__private_reporting,
        37097400,
        0,
        0,
        (__int64)&Feature_Servicing_Type1_Telemetry_logged_traits,
        0,
        (char)p_CommandLine);
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v19 = 72LL;
        v20 = 1;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v19, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v19);
      }
    }
    else
    {
      v6 = 1;
    }
    if ( NtCurrentPeb()->ProcessHeap && VSMEnclaveProvidersRegistered )
    {
      v7 = qword_1801665B0;
      dword_180166590 = 0;
      qword_1801665B0 = 0LL;
      EtwEventUnregister(v7);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v6 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)SbCleanupTrace();
  }
  return result;
}
