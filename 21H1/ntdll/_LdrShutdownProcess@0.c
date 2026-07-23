/*
 * XREFs of _LdrShutdownProcess@0 @ 0x4B2DD6A0
 * Callers:
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 * Callees:
 *     ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z @ 0x4B2B4739 (-RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _SbCleanupTrace@0 @ 0x4B2DD868 (_SbCleanupTrace@0.c)
 *     _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0 (_RtlDetectHeapLeaks@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _TraceLoggingUnregister_EtwEventUnregister@4 @ 0x4B330EB8 (_TraceLoggingUnregister_EtwEventUnregister@4.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // edi
  _PEB *ProcessEnvironmentBlock; // ebx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ecx
  wchar_t *Buffer; // eax
  _RTL_USER_PROCESS_PARAMETERS *v4; // ecx
  PVOID *FlsData; // edx
  int *v6; // edi
  int *v7; // edx
  int v8; // edi
  struct _PEB *v9; // eax
  void (__thiscall *v10)(_DWORD); // ecx
  struct _RTLP_FLS_DATA *v11; // [esp+0h] [ebp-88h]
  unsigned int v12; // [esp+4h] [ebp-84h]
  int v13[9]; // [esp+10h] [ebp-78h] BYREF
  int v14[9]; // [esp+34h] [ebp-54h] BYREF
  int v15; // [esp+58h] [ebp-30h] BYREF
  wchar_t *v16; // [esp+5Ch] [ebp-2Ch]
  int v17; // [esp+60h] [ebp-28h]
  int *v18; // [esp+64h] [ebp-24h]
  int *v19; // [esp+68h] [ebp-20h]
  char v20; // [esp+6Fh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_4B3A5DA8 )
  {
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    v15 = *(_DWORD *)&ProcessParameters->CommandLine.Length;
    Buffer = ProcessParameters->CommandLine.Buffer;
    v16 = Buffer;
    v4 = ProcessEnvironmentBlock->ProcessParameters;
    if ( (v4->Flags & 1) == 0 )
      v16 = (wchar_t *)((char *)Buffer + (_DWORD)v4);
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        6133,
        "LdrShutdownProcess",
        2,
        "Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &v15);
    dword_4B3A5DAC = (int)v0->ClientId.UniqueThread;
    byte_4B3A5DA8 = 1;
    if ( g_ShimsEnabled )
    {
      v10 = (void (__thiscall *)(_DWORD))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                 g_pfnSE_ProcessDying,
                                                                 32 - (MEMORY[0x7FFE0330] & 0x1F)));
      v10(v10);
    }
    FlsData = (PVOID *)v0->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(FlsData, (struct _RTLP_FLS_CONTEXT *)1, v11, v12);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v20 = 0;
      v6 = (int *)dword_4B3A5DA0;
      while ( v6 != &dword_4B3A5D9C )
      {
        v7 = v6 - 4;
        v18 = v7;
        v6 = (int *)v6[1];
        v19 = v6;
        v17 = v7[7];
        if ( v17 && (v7[13] & 0x80000) != 0 )
        {
          v14[0] = 36;
          v14[1] = 1;
          memset(&v14[2], 0, 0x1Cu);
          RtlActivateActivationContextUnsafeFast(v14, v7[18]);
          ms_exc.registration.TryLevel = 0;
          v8 = (int)v18;
          if ( *((_WORD *)v18 + 29) )
            LdrpCallTlsInitializers(0, (int)v18);
          LdrpCallInitRoutine(v17, *(_DWORD *)(v8 + 24), 0, 1);
          ms_exc.registration.TryLevel = -2;
          v6 = v19;
          RtlDeactivateActivationContextUnsafeFast(v14);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 58) )
      {
        v13[0] = 36;
        v13[1] = 1;
        memset(&v13[2], 0, 0x1Cu);
        RtlActivateActivationContextUnsafeFast(v13, *(_DWORD *)(LdrpImageEntry + 72));
        ms_exc.registration.TryLevel = 1;
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        ms_exc.registration.TryLevel = -2;
        RtlDeactivateActivationContextUnsafeFast(v13);
      }
    }
    else
    {
      v20 = 1;
    }
    v9 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v9->ProcessHeap )
    {
      TraceLoggingUnregister_EtwEventUnregister();
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v20 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
