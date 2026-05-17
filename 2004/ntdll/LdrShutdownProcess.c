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

_UNKNOWN **__fastcall LdrShutdownProcess(
        struct _RTLP_FLS_CONTEXT *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _UNKNOWN **result; // rax
  struct _TEB *v5; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  struct _RTLP_FLS_DATA *FlsData; // rdx
  char v9; // si
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // r14
  struct _PEB *v13; // rax
  unsigned __int64 v14; // rcx
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-A8h] BYREF
  int v17; // [rsp+58h] [rbp-A0h]
  __int128 v18; // [rsp+60h] [rbp-98h]
  __int128 v19; // [rsp+70h] [rbp-88h]
  __int128 v20; // [rsp+80h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-58h] BYREF
  int v23; // [rsp+A8h] [rbp-50h]
  __int128 v24; // [rsp+B0h] [rbp-48h]
  __int128 v25; // [rsp+C0h] [rbp-38h]
  __int128 v26; // [rsp+D0h] [rbp-28h]
  __int64 v27; // [rsp+E0h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
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
        v5->ClientId.UniqueProcess,
        &CommandLine);
    qword_18016A510 = (__int64)v5->ClientId.UniqueThread;
    byte_18016A508 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = (struct _RTLP_FLS_DATA *)v5->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(a1, FlsData, 1u);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v9 = 0;
      v10 = (__int64 *)qword_18016A4F8;
      while ( v10 != &qword_18016A4F0 )
      {
        v11 = (__int64)(v10 - 4);
        v10 = (__int64 *)v10[1];
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v11 + 56);
        if ( v12 && (*(_DWORD *)(v11 + 104) & 0x80000) != 0 )
        {
          v16 = 72LL;
          v17 = 1;
          v18 = 0LL;
          v19 = 0LL;
          v20 = 0LL;
          v21 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(v11 + 136));
          if ( *(_WORD *)(v11 + 110) )
            LdrpCallTlsInitializers(0, v11);
          LdrpCallInitRoutine(v12, *(_QWORD *)(v11 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v22 = 72LL;
        v23 = 1;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v22, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v22);
      }
    }
    else
    {
      v9 = 1;
    }
    v13 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v13->ProcessHeap )
    {
      v14 = qword_1801644E0;
      dword_1801644C0 = 0;
      qword_1801644E0 = 0LL;
      EtwNotificationUnregister(v14, 0LL, a3, a4);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v9 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)SbCleanupTrace();
  }
  return result;
}
