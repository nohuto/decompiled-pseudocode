/*
 * XREFs of ??1CHolographicInteropTexture@@MEAA@XZ @ 0x180255A34
 * Callers:
 *     ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x180255E40 (--_GCHolographicInteropTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180213CDC (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?clear@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180256F74 (-clear@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 */

void __fastcall CHolographicInteropTexture::~CHolographicInteropTexture(CHolographicInteropTexture *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v9; // eax
  int v10; // ebx
  BOOL v11; // eax
  char v12; // cl
  HANDLE v13; // rax
  HANDLE v14; // rax
  CHolographicInteropTexture *v15; // rcx
  __int16 Response; // [rsp+80h] [rbp+20h] BYREF

  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 9) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CHolographicInteropTexture::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 344;
  if ( !*((_QWORD *)this + 11) )
    goto LABEL_27;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180288730,
        word_180288730,
        L"!m_pVisualTree",
        "Function: ",
        L"CHolographicInteropTexture::~CHolographicInteropTexture",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
        39);
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
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_27;
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
        goto LABEL_27;
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
LABEL_27:
  if ( !*((_DWORD *)this + 57) )
    goto LABEL_53;
  while ( 2 )
  {
    while ( 2 )
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
        word_180288730,
        word_180288730,
        L"m_bufferCount == 0",
        "Function: ",
        L"CHolographicInteropTexture::~CHolographicInteropTexture",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
        40);
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
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          goto LABEL_53;
        if ( (char)Response != 105 )
        {
          if ( (char)Response != 112 )
          {
            if ( (char)Response == 116 )
            {
LABEL_47:
              v13 = GetCurrentThread();
              TerminateThread(v13, 0xC0000001);
            }
LABEL_49:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            continue;
          }
LABEL_48:
          v14 = GetCurrentProcess();
          TerminateProcess(v14, 0xC0000001);
          goto LABEL_49;
        }
        goto LABEL_50;
      }
      break;
    }
    if ( (char)Response != 98 && (char)Response != 66 )
    {
      if ( (char)Response == 71 )
        goto LABEL_53;
      if ( (char)Response != 73 )
      {
        if ( (char)Response != 80 )
        {
          if ( (char)Response == 84 )
            goto LABEL_47;
          goto LABEL_49;
        }
        goto LABEL_48;
      }
LABEL_50:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      continue;
    }
    break;
  }
  __debugbreak();
LABEL_53:
  FastRegion::CRegion::FreeMemory((void **)this + 40);
  detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear((char *)this + 104);
  v15 = (CHolographicInteropTexture *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v15 == (CHolographicInteropTexture *)((char *)this + 128) )
    v15 = 0LL;
  operator delete(v15);
  CResource::~CResource(this);
}
