/*
 * XREFs of LdrShutdownProcess @ 0x18005DA50
 * Callers:
 *     RtlExitUserProcess @ 0x18005D980 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005DCB4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     SbCleanupTrace @ 0x180060134 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180060190 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _RTLP_FLS_CONTEXT *v0; // rcx
  struct _TEB *v1; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  struct _RTLP_FLS_DATA *FlsData; // rdx
  char v5; // si
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // r14
  struct _PEB *v9; // rax
  REGHANDLE v10; // rcx
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-A8h] BYREF
  int v13; // [rsp+58h] [rbp-A0h]
  __int128 v14; // [rsp+60h] [rbp-98h]
  __int128 v15; // [rsp+70h] [rbp-88h]
  __int128 v16; // [rsp+80h] [rbp-78h]
  __int64 v17; // [rsp+90h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-58h] BYREF
  int v19; // [rsp+A8h] [rbp-50h]
  __int128 v20; // [rsp+B0h] [rbp-48h]
  __int128 v21; // [rsp+C0h] [rbp-38h]
  __int128 v22; // [rsp+D0h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-18h]

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( !byte_18016A508 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6133,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v1->ClientId.UniqueProcess,
        &CommandLine);
    qword_18016A510 = (__int64)v1->ClientId.UniqueThread;
    byte_18016A508 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = (struct _RTLP_FLS_DATA *)v1->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(v0, FlsData, 1u);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v5 = 0;
      v6 = (__int64 *)qword_18016A4F8;
      while ( v6 != &qword_18016A4F0 )
      {
        v7 = (__int64)(v6 - 4);
        v6 = (__int64 *)v6[1];
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v7 + 56);
        if ( v8 && (*(_DWORD *)(v7 + 104) & 0x80000) != 0 )
        {
          v12 = 72LL;
          v13 = 1;
          v14 = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          v17 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v12, *(_QWORD *)(v7 + 136));
          if ( *(_WORD *)(v7 + 110) )
            LdrpCallTlsInitializers(0, v7);
          LdrpCallInitRoutine(v8, *(_QWORD *)(v7 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v18 = 72LL;
        v19 = 1;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v18, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v18);
      }
    }
    else
    {
      v5 = 1;
    }
    v9 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v9->ProcessHeap )
    {
      v10 = RegHandle;
      dword_1801644C0 = 0;
      RegHandle = 0LL;
      EtwNotificationUnregister(v10, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v5 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
