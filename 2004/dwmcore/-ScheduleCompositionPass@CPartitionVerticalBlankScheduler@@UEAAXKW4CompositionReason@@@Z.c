/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x1800BF270
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180059EC0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180215B3C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(
        __int64 a1,
        ULONG TolerableDelay,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  void *v8; // rcx
  int v9; // eax
  int v10; // ebp
  BOOL v11; // eax
  char v12; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  LARGE_INTEGER DueTime; // [rsp+80h] [rbp+8h] BYREF
  __int16 Response; // [rsp+88h] [rbp+10h] BYREF

  if ( TolerableDelay >= *(_DWORD *)(a1 + 11196) )
    goto LABEL_2;
  v8 = *(void **)(a1 + 24);
  DueTime.QuadPart = -10000LL * TolerableDelay;
  if ( SetWaitableTimerEx(v8, &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    goto LABEL_7;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = IsKernelDebuggerPresent();
      Response = 63;
      v10 = v9;
      if ( !v9 )
      {
        v11 = IsDebuggerPresent();
        v12 = Response;
        if ( v11 )
          v12 = 103;
        LOBYTE(Response) = v12;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_18028970C,
        word_18028970C,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        1974);
      if ( v10 )
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
        goto LABEL_32;
      if ( (char)Response == 105 )
        goto LABEL_30;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_29;
        goto LABEL_27;
      }
LABEL_28:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_29:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_32;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_29;
LABEL_27:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_30:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_32:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_7:
  *(_DWORD *)(a1 + 11196) = TolerableDelay;
LABEL_2:
  _m_prefetchw(&dword_180345750);
  v7 = a3 | dword_180345750;
  result = (unsigned int)~_InterlockedOr(&dword_180345750, a3);
  if ( ((unsigned int)result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return McTemplateU0q_EventWriteTransfer(v7, &EVTDESC_SCHEDULED_COMPOSITION_REASON, a3);
  return result;
}
