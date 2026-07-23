/*
 * XREFs of LdrShutdownProcess @ 0x18005EFD0
 * Callers:
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     EtwEventUnregister @ 0x1800514E0 (EtwEventUnregister.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005F2B4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     SbCleanupTrace @ 0x180061734 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180061790 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDC48 (LdrpLogDbgPrint.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _RTLP_FLS_CONTEXT *v0; // rcx
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  struct _RTLP_FLS_DATA *FlsData; // rdx
  char v5; // r14
  REGHANDLE v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // r15
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+58h] [rbp-B0h]
  __int128 v13; // [rsp+60h] [rbp-A8h]
  __int128 v14; // [rsp+70h] [rbp-98h]
  __int128 v15; // [rsp+80h] [rbp-88h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  __int64 v17; // [rsp+A0h] [rbp-68h] BYREF
  int v18; // [rsp+A8h] [rbp-60h]
  __int128 v19; // [rsp+B0h] [rbp-58h]
  __int128 v20; // [rsp+C0h] [rbp-48h]
  __int128 v21; // [rsp+D0h] [rbp-38h]
  __int64 v22; // [rsp+E0h] [rbp-28h]

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( !byte_18016C508 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6137,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v1->ClientId.UniqueProcess,
        &CommandLine);
    qword_18016C510 = (__int64)v1->ClientId.UniqueThread;
    byte_18016C508 = 1;
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
      v7 = (__int64 *)qword_18016C4F8;
      while ( v7 != &qword_18016C4F0 )
      {
        v8 = (__int64)(v7 - 4);
        v7 = (__int64 *)v7[1];
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v8 + 56);
        if ( v9 && (*(_DWORD *)(v8 + 104) & 0x80000) != 0 )
        {
          v11 = 72LL;
          v12 = 1;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v11, *(_QWORD *)(v8 + 136));
          if ( *(_WORD *)(v8 + 110) && v1->ThreadLocalStoragePointer )
            LdrpCallTlsInitializers(0, v8);
          LdrpCallInitRoutine(v9, *(_QWORD *)(v8 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v1->ThreadLocalStoragePointer )
      {
        v17 = 72LL;
        v18 = 1;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v17, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v17);
      }
    }
    else
    {
      v5 = 1;
    }
    if ( NtCurrentPeb()->ProcessHeap && VSMEnclaveProvidersRegistered )
    {
      v6 = RegHandle;
      dword_180166590 = 0;
      RegHandle = 0LL;
      EtwEventUnregister(v6);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v5 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
