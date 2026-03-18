/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180079E5C
 * Callers:
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x1800287A0 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x1800289D0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180028B90 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180077C20 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180078EE0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180213CDC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CAnimationTracking::TelFrameInfo *a2,
        struct CFrameInfo *a3)
{
  struct CFrameInfo *v3; // rdi
  struct CComposition *v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 **v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rax
  int v10; // r15d
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // esi
  BOOL v21; // eax
  char v22; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+98h] [rbp+38h] BYREF
  volatile signed __int32 *v26; // [rsp+A0h] [rbp+40h] BYREF

  v3 = a3;
  if ( !a3 )
  {
    v3 = (struct CFrameInfo *)*((_QWORD *)this + 629);
    if ( !*(_QWORD *)v3 )
      v3 = (struct CFrameInfo *)*((_QWORD *)this + 630);
  }
  v5 = g_pComposition;
  *(_BYTE *)a2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)v5 + 11) + 129LL) )
    goto LABEL_19;
  v6 = *(_QWORD *)(*((_QWORD *)this + 8) + 88LL);
  v7 = *(volatile signed __int32 ***)(v6 + 8);
  if ( v7 == *(volatile signed __int32 ***)(v6 + 16) )
    goto LABEL_19;
  v8 = *v7;
  v26 = 0LL;
  v9 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v9 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v8 + 40LL))(
            v8,
            &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
            &v26);
    if ( v10 < 0 )
    {
      v11 = 0LL;
      v26 = 0LL;
      goto LABEL_10;
    }
  }
  else
  {
    v26 = v8;
    v10 = 0;
  }
  if ( *((int *)v8 + 2) >= 0 )
    goto LABEL_9;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = IsKernelDebuggerPresent();
      Response = 63;
      v20 = v19;
      if ( !v19 )
      {
        v21 = IsDebuggerPresent();
        v22 = Response;
        if ( v21 )
          v22 = 103;
        LOBYTE(Response) = v22;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_180288730,
        word_180288730,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v20 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_9;
      if ( (char)Response == 105 )
        goto LABEL_45;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_44;
        goto LABEL_42;
      }
LABEL_43:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_44:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_9;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_44;
LABEL_42:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_44;
      }
      goto LABEL_43;
    }
LABEL_45:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_9:
  _InterlockedIncrement(v8 + 2);
  v11 = v26;
LABEL_10:
  v12 = 0LL;
  if ( v10 >= 0 )
    v12 = v11;
  if ( v11 )
  {
    v13 = (__int64)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v12 )
  {
    v14 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 120LL))(v12);
    v15 = v14;
    if ( v14 )
    {
      v16 = v14 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v17 = v15 + *(int *)(*(_QWORD *)(v15 + 8) + 12LL) + 8LL;
      if ( !*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17) + 608) )
        *(_BYTE *)a2 = 1;
      v18 = v15 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
LABEL_19:
  *((_QWORD *)a2 + 1) = *(_QWORD *)v3;
  *((_QWORD *)a2 + 2) = 10000000 * (*((_QWORD *)v3 + 36) / g_qpcFrequency.QuadPart)
                      + (unsigned __int64)(10000000 * (*((_QWORD *)v3 + 36) % g_qpcFrequency.QuadPart))
                      / g_qpcFrequency.QuadPart;
}
