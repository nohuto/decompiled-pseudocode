/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007A8B0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180078EE0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180078E18 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800D8A28 (-EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800DA54C (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801627A8 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180213CDC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(
        CPartitionVerticalBlankScheduler *this,
        unsigned __int8 a2,
        __int64 a3)
{
  int v3; // r13d
  DWORD v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // edi
  __int64 v9; // rcx
  volatile signed __int32 **v10; // rax
  volatile signed __int32 *v11; // r14
  __int64 v12; // rax
  int v13; // r12d
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  char v19; // al
  __int64 v20; // r8
  unsigned __int64 VSync; // rbx
  unsigned __int64 v23; // rcx
  int v24; // eax
  int v25; // r15d
  BOOL v26; // eax
  CHAR v27; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v31; // [rsp+70h] [rbp-11h] BYREF
  void *v32; // [rsp+78h] [rbp-9h] BYREF
  HANDLE Handles[3]; // [rsp+80h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+98h] [rbp+17h] BYREF

  v3 = a2;
  Handles[2] = 0LL;
  v5 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Start,
      a3,
      1u,
      &v34);
  v6 = *((_QWORD *)this + 630);
  if ( v6 && !*(_BYTE *)(v6 + 138) && *(_BYTE *)(v6 + 140) )
  {
    v7 = *(_DWORD *)(v6 + 120);
    if ( v7 + 1 <= (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 629) + 120LL) + 1) )
      v7 = *(_DWORD *)(*((_QWORD *)this + 629) + 120LL);
    v8 = v7 + 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)(*((_QWORD *)this + 8) + 88LL);
  v10 = *(volatile signed __int32 ***)(v9 + 8);
  if ( v10 == *(volatile signed __int32 ***)(v9 + 16) )
    goto LABEL_42;
  v11 = *v10;
  v12 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
      - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v31 = 0LL;
  if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v12 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
        - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v11 + 40LL))(
            v11,
            &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
            &v31);
    if ( v13 < 0 )
    {
      v14 = 0LL;
      v31 = 0LL;
      goto LABEL_16;
    }
  }
  else
  {
    v31 = v11;
    v13 = 0;
  }
  if ( *((int *)v11 + 2) >= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    while ( 1 )
    {
      v24 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v25 = v24;
      if ( !v24 )
      {
        v26 = IsDebuggerPresent();
        v27 = Response[0];
        if ( v26 )
          v27 = 103;
        Response[0] = v27;
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
      if ( v25 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
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
          Response,
          Response);
        __debugbreak();
      }
      if ( Response[0] <= 98 )
        break;
      v9 = 103LL;
      if ( Response[0] == 103 )
        goto LABEL_15;
      if ( Response[0] == 105 )
        goto LABEL_67;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_66;
        goto LABEL_64;
      }
LABEL_65:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_66:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_15;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_66;
LABEL_64:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_66;
      }
      goto LABEL_65;
    }
LABEL_67:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_15:
  _InterlockedIncrement(v11 + 2);
  v14 = v31;
LABEL_16:
  v15 = 0LL;
  if ( v13 >= 0 )
    v15 = v14;
  if ( v14 )
  {
    v16 = (__int64)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( !v15 )
  {
LABEL_42:
    v18 = -2003304307;
    goto LABEL_25;
  }
  v17 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, void **, _QWORD))(*(_QWORD *)v15 + 104LL))(
          v15,
          v8,
          &v32,
          0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    v18 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v15 + 96LL))(
            v15,
            *((_QWORD *)this + 5));
  }
  else if ( v17 != 142213121 )
  {
    Handles[0] = v32;
    Handles[1] = *((HANDLE *)this + 5);
    if ( !WaitForMultipleObjects((v3 ^ 1) + 1, Handles, 0, 0x64u) )
      byte_180344109 = 1;
  }
LABEL_25:
  if ( !*((_BYTE *)this + 5372) || (v19 = 1, v18 < 0) )
    v19 = 0;
  *((_BYTE *)this + 5373) = v19;
  if ( v18 < 0 )
  {
    if ( v18 != -2003304307 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802AA538, 2u, v18, 0x1CCu, 0LL);
  }
  else
  {
    v20 = 0LL;
    if ( v18 != 142213121 )
      goto LABEL_29;
  }
  VSync = CPartitionVerticalBlankScheduler::EstimateNextVSync(this);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
  CPartitionVerticalBlankScheduler::TraceTime(this);
  v23 = *((_QWORD *)this + 1990);
  if ( v23 >= VSync )
    VSync = *(_QWORD *)(*((_QWORD *)this + 629) + 288LL) + v23 - v23 % *(_QWORD *)(*((_QWORD *)this + 629) + 288LL);
  v5 = 1000 * (VSync - v23) / g_qpcFrequency.QuadPart + 1;
  Sleep(v5);
  v18 = 0;
  v20 = 1LL;
  *(_BYTE *)(*((_QWORD *)this + 629) + 264LL) = 1;
LABEL_29:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Stop,
      v20,
      v5);
  if ( *((_BYTE *)this + 11224) )
  {
    *(_WORD *)((char *)this + 11225) = 1;
    *((_QWORD *)this + 1406) = 0LL;
    *((_QWORD *)this + 1405) = 0LL;
    *((_QWORD *)this + 1405) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 11200));
  }
  return (unsigned int)v18;
}
