/*
 * XREFs of ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005E6E4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060F90 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180061114 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800BDAC0 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x1800BDBD8 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATION.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x1802097DC (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 *     ?BeginInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@@Z @ 0x180274FE0 (-BeginInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulation.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CComposition::GetAttachedChannel(CComposition *this, unsigned int a2, struct CChannelContext **a3)
{
  unsigned int v3; // edi
  volatile signed __int32 *v5; // rbx
  int v7; // eax
  int v8; // esi
  BOOL v9; // eax
  char v10; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+88h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 < 0x10000
    && a2 < *((_DWORD *)this + 116)
    && (v5 = *(volatile signed __int32 **)(*((_QWORD *)this + 55) + 8LL * a2)) != 0LL )
  {
    if ( *((int *)v5 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v7 = IsKernelDebuggerPresent();
        Response = 63;
        v8 = v7;
        if ( !v7 )
        {
          v9 = IsDebuggerPresent();
          v10 = Response;
          if ( v9 )
            v10 = 103;
          LOBYTE(Response) = v10;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_18032C468,
          word_18032C468,
          "Function: ",
          L"CMILRefCountImpl::AddReference",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          23);
        if ( v8 )
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
        if ( (char)Response > 98 )
        {
          if ( (char)Response == 103 )
            break;
          if ( (char)Response == 105 )
            goto LABEL_31;
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_30;
            goto LABEL_28;
          }
LABEL_29:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_30:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
        }
        else
        {
          if ( (char)Response == 98 || (char)Response == 66 )
          {
            __debugbreak();
            break;
          }
          if ( (char)Response == 71 )
            break;
          if ( (char)Response != 73 )
          {
            if ( (char)Response != 80 )
            {
              if ( (char)Response != 84 )
                goto LABEL_30;
LABEL_28:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_30;
            }
            goto LABEL_29;
          }
LABEL_31:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedIncrement(v5 + 2);
    *a3 = (struct CChannelContext *)v5;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x819u);
  }
  return v3;
}
