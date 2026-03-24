/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180153AB4
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180153F60 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18002340C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035198 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094910 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800B0580 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800B0C84 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180155B34 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x180156D24 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x180160388 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180161FB4 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x180162660 (--1CWatchdogTimer@@UEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021698C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  CComposition *v2; // rcx
  int v3; // eax
  int v4; // ebx
  BOOL v5; // eax
  char LowPart; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  LARGE_INTEGER *v13; // rbx
  CAnimationTracking *v14; // rcx
  char *v15; // rcx
  LARGE_INTEGER Response; // [rsp+80h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  v2 = (CComposition *)*((_QWORD *)this + 8);
  if ( !v2 )
    goto LABEL_28;
  CComposition::OnShutdown(v2);
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8)) )
    goto LABEL_28;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      LOWORD(Response.LowPart) = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        LowPart = Response.LowPart;
        if ( v5 )
          LowPart = 103;
        LOBYTE(Response.LowPart) = LowPart;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1802CE8C0,
        word_1802CE8C0,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        93);
      if ( v4 )
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
      if ( SLOBYTE(Response.QuadPart) <= 98 )
        break;
      if ( SLOBYTE(Response.QuadPart) == 103 )
        goto LABEL_27;
      if ( SLOBYTE(Response.QuadPart) != 105 )
      {
        if ( SLOBYTE(Response.QuadPart) != 112 )
        {
          if ( SLOBYTE(Response.QuadPart) != 116 )
            goto LABEL_24;
LABEL_22:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_24;
        }
LABEL_23:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_24;
      }
LABEL_25:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( SLOBYTE(Response.QuadPart) == 98 || SLOBYTE(Response.QuadPart) == 66 )
      break;
    switch ( SLOBYTE(Response.QuadPart) )
    {
      case 'G':
        goto LABEL_27;
      case 'I':
        goto LABEL_25;
      case 'P':
        goto LABEL_23;
      case 'T':
        goto LABEL_22;
    }
LABEL_24:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
LABEL_27:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_28:
  v9 = *((_QWORD *)this + 18);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 5LL);
    v10 = *((_QWORD *)this + 18);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 17);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CloseHandle(*((HANDLE *)this + 3));
  *((_QWORD *)this + 1400) = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 15856));
  QueryPerformanceCounter(&Response);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
    (CPartitionVerticalBlankScheduler *)((char *)this + 11112),
    Response.QuadPart);
  v12 = 10LL;
  v13 = (LARGE_INTEGER *)((char *)this + 5960);
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario((CPartitionVerticalBlankScheduler *)((char *)this + 5952), v13, 1, 0);
    v13 += 51;
    --v12;
  }
  while ( v12 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary((CPartitionVerticalBlankScheduler *)((char *)this + 5952));
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1259);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1255);
  `vector destructor iterator'(
    (char *)this + 5960,
    408LL,
    10LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::~TouchScenarioInfo);
  while ( 1 )
  {
    v14 = (CPartitionVerticalBlankScheduler *)((char *)this + 5376);
    if ( !*((_DWORD *)this + 1350) )
      break;
    CAnimationTracking::DeleteScenario(v14, 0);
  }
  *((_DWORD *)this + 1350) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v14, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 5376));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 5376);
  `vector destructor iterator'((char *)this + 152, 304LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  v15 = (char *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v15);
  CWatchdogTimer::~CWatchdogTimer((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
}
