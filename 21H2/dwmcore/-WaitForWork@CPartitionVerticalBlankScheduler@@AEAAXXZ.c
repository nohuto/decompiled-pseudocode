/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F99C
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006DBD0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030F44 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800DB984 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x1801541B8 (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180162CC8 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180162EEC (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021698C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // r14d
  char *v5; // rbx
  HANDLE v6; // rcx
  HANDLE *v7; // rsi
  int v8; // eax
  __int64 v9; // r8
  int v10; // r12d
  DWORD *v11; // rdi
  unsigned int i; // ebx
  DWORD v13; // eax
  int v14; // edx
  int v15; // ecx
  __int64 v16; // r8
  int v17; // r15d
  int v18; // r14d
  int v19; // esi
  int v20; // edi
  char v21; // bl
  int v22; // eax
  char *EventW; // rax
  char *v24; // rbx
  void *RemoteSessionOcclusionEvent; // rax
  unsigned __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rdx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // eax
  int v36; // ebx
  BOOL v37; // eax
  CHAR v38; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[4]; // [rsp+68h] [rbp+7h] BYREF
  int v42; // [rsp+6Ch] [rbp+Bh] BYREF
  unsigned __int64 v43[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v44; // [rsp+80h] [rbp+1Fh] BYREF

  v44 = 0LL;
  v4 = 4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Start,
      a3,
      1LL,
      v43);
  v5 = (char *)this + 11200;
  if ( *((_BYTE *)this + 11224) && *((_BYTE *)this + 11225) )
  {
    v26 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 11200));
    v43[0] = v26;
    if ( *((_BYTE *)this + 11226) )
    {
      if ( *((_DWORD *)this + 2804) == -1 )
      {
        *((_QWORD *)this + 1402) = 0LL;
        v27 = 0;
      }
      else
      {
        v27 = *((_DWORD *)this + 2805);
      }
      *((_QWORD *)this + 1406) = v26;
      *(_OWORD *)&v5[16 * v27 + 56] = *(_OWORD *)((char *)this + 11240);
      v28 = *((unsigned int *)this + 2804);
      v29 = *((_DWORD *)this + 2805);
      if ( (_DWORD)v28 != v29 )
      {
        v30 = *((_DWORD *)this + 2804);
        do
        {
          v31 = *(_QWORD *)&v5[16 * v30 + 56];
          if ( v31 >= *((_QWORD *)this + 1406) - 10000000LL )
            break;
          *((_QWORD *)this + 1404) += v31 - *(_QWORD *)&v5[16 * v30 + 64];
          *(_QWORD *)&v5[16 * v30 + 64] = 0LL;
          *(_QWORD *)&v5[16 * v30 + 56] = 0LL;
          v28 = (unsigned __int8)(*((_DWORD *)this + 2804) + 1);
          *((_DWORD *)this + 2804) = v28;
          v30 = v28;
          v29 = *((_DWORD *)this + 2805);
        }
        while ( (_DWORD)v28 != v29 );
      }
      v32 = *((_QWORD *)this + 1404) + *((_QWORD *)this + 2 * v29 + 1408) - *((_QWORD *)this + 2 * v29 + 1407);
      v33 = (unsigned __int8)(v29 + 1);
      *((_QWORD *)this + 1404) = v32;
      *((_DWORD *)this + 2805) = v33;
      if ( (_DWORD)v28 == v33 )
      {
        v34 = 2 * v28;
        *((_QWORD *)this + 1404) = v32 + *((_QWORD *)this + v34 + 1407) - *((_QWORD *)this + v34 + 1408);
        *(_QWORD *)&v5[8 * v34 + 64] = 0LL;
        *(_QWORD *)&v5[8 * v34 + 56] = 0LL;
        *((_DWORD *)this + 2804) = (unsigned __int8)(*((_DWORD *)this + 2804) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CPartitionVerticalBlankScheduler *)((char *)this + 11200), v43);
  }
  v6 = hObject;
  if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    if ( qword_18034B5F8 )
    {
      if ( byte_18034B60D )
      {
        RemoteSessionOcclusionEvent = (void *)DwmGetRemoteSessionOcclusionEvent();
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &hObject,
          RemoteSessionOcclusionEvent);
      }
      else
      {
        EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
        v24 = EventW;
        if ( EventW )
        {
          if ( EventW != (char *)-1LL
            && (*(int (__fastcall **)(CDisplayManager *, char *, int *))(*(_QWORD *)qword_18034B5F8 + 176LL))(
                 qword_18034B5F8,
                 EventW,
                 &dword_18034B608) >= 0 )
          {
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              &hObject,
              v24);
            v24 = 0LL;
          }
          if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v43[0] = (unsigned __int64)CloseHandle;
            CloseHandle(v24);
          }
        }
      }
      v6 = hObject;
    }
    else
    {
      v6 = 0LL;
    }
  }
  if ( v6 )
    *((_QWORD *)this + 4) = v6;
  else
    v4 = 3;
  v7 = (HANDLE *)((char *)this + 8);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, _DWORD, int *))(**((_QWORD **)this + 18) + 32LL))(
         *((_QWORD *)this + 18),
         v4,
         (char *)this + 8,
         0xFFFFFFFFLL,
         0,
         &v42);
  v10 = v42;
  if ( v8 < 0 )
    v10 = -1;
  v42 = v10;
  if ( v10 == 3 && v4 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT,
      v9,
      1LL,
      v43);
  if ( CancelWaitableTimer(*((HANDLE *)this + 3)) )
    goto LABEL_11;
  while ( 1 )
  {
    while ( 1 )
    {
      v35 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v36 = v35;
      if ( !v35 )
      {
        v37 = IsDebuggerPresent();
        v38 = Response[0];
        if ( v37 )
          v38 = 103;
        Response[0] = v38;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1802CE8C0,
        word_1802CE8C0,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::WaitForWork",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        312);
      if ( v36 )
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
      if ( Response[0] == 103 )
        goto LABEL_92;
      if ( Response[0] == 105 )
        goto LABEL_90;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_89;
        goto LABEL_87;
      }
LABEL_88:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_89:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_92;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_89;
LABEL_87:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_89;
      }
      goto LABEL_88;
    }
LABEL_90:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_92:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_11:
  v11 = (DWORD *)&v44;
  *((_DWORD *)this + 2799) = -1;
  for ( i = 0; i < v4; ++i )
  {
    v13 = WaitForSingleObject(*v7, 0);
    v42 = v13;
    *v11 = v13;
    if ( !v13 && i == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT,
        v16,
        1LL,
        v43);
    ++v7;
    ++v11;
  }
  v17 = HIDWORD(v44);
  v18 = DWORD2(v44);
  v19 = DWORD1(v44);
  v20 = v44;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qqqqq_EventWriteTransfer(v15, v14, v10, v44, SBYTE4(v44), SBYTE8(v44), SBYTE12(v44));
  v21 = 0;
  if ( !v10 || !v20 )
    v21 = 1;
  if ( v10 == 1 || !v19 )
    v21 |= 2u;
  if ( v10 == 2 || !v18 )
    v21 |= 4u;
  if ( v10 == 3 || !v17 )
  {
    v21 |= 8u;
    CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(*((_QWORD *)this + 8) + 88LL));
  }
  v22 = dword_180347130;
  if ( (v21 & 1) != 0 )
  {
    v22 = dword_180347130 | 8;
    dword_180347130 |= 8u;
  }
  if ( (v21 & 2) != 0 )
  {
    v22 |= 0x10u;
    dword_180347130 = v22;
  }
  if ( (v21 & 4) != 0 )
  {
    v22 |= 2u;
    dword_180347130 = v22;
  }
  if ( (v21 & 8) != 0 )
    dword_180347130 = v22 | 4;
}
