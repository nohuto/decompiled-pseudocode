/*
 * XREFs of ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180096ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180011E08 (--0CWindowData@@QEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800BF26C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CWindowList::CreateWindow(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // edi
  BOOL v6; // eax
  char v7; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CWindowData *v10; // rax
  CWindowData *v11; // rdi
  __int16 Response; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = IsKernelDebuggerPresent();
      Response = 63;
      v5 = v4;
      if ( !v4 )
      {
        v6 = IsDebuggerPresent();
        v7 = Response;
        if ( v6 )
          v7 = 103;
        LOBYTE(Response) = v7;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_1800CBAFC,
        word_1800CBAFC,
        L"pwdData == nullptr",
        "Function: ",
        L"CWindowList::CreateWindow",
        ", ",
        L"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        2025);
      if ( v5 )
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
        goto LABEL_26;
      if ( (char)Response != 105 )
      {
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_23;
LABEL_21:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_23;
        }
LABEL_22:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_23;
      }
LABEL_24:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    switch ( (char)Response )
    {
      case 'G':
        goto LABEL_26;
      case 'I':
        goto LABEL_24;
      case 'P':
        goto LABEL_22;
      case 'T':
        goto LABEL_21;
    }
LABEL_23:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
LABEL_26:
  v10 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( v10 )
    v11 = CWindowData::CWindowData(v10);
  else
    v11 = 0LL;
  if ( v11 )
  {
    *((_QWORD *)v11 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v11);
    *((_QWORD *)v11 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7ECu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v3;
}
