/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18023C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180090B3C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180090FE8 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4638 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180152A88 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018E8E0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021698C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x18021F5C4 (-scRGBTosRGB@@YAMM@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18023D0A4 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18024D420 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  int v10; // eax
  CD2DTarget *v11; // r15
  int v12; // eax
  int v13; // eax
  int v14; // esi
  BOOL v15; // eax
  CHAR v16; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v19; // r8
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v23; // rcx
  int v24; // eax
  CHAR Response[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v27[80]; // [rsp+78h] [rbp-90h] BYREF
  D3DVALUE r; // [rsp+C8h] [rbp-40h] BYREF
  float v29; // [rsp+CCh] [rbp-3Ch]
  float v30; // [rsp+D0h] [rbp-38h]
  float v31; // [rsp+D4h] [rbp-34h]
  __int128 v32; // [rsp+D8h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v33; // [rsp+E8h] [rbp-20h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 100);
  v11 = 0LL;
  if ( v10 )
    v11 = *(CD2DTarget **)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(v10 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      2,
      v12);
  }
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && (*(_BYTE *)((*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2) + 94) & 0x20) != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v14 = v13;
        if ( !v13 )
        {
          v15 = IsDebuggerPresent();
          v16 = Response[0];
          if ( v15 )
            v16 = 103;
          Response[0] = v16;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_1802CE8C0,
          word_1802CE8C0,
          L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
          "Function: ",
          L"CD2DContext::FillRectangleWithSolidColor",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
          1221);
        if ( v14 )
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
          goto LABEL_32;
        if ( Response[0] != 105 )
        {
          if ( Response[0] != 112 )
          {
            if ( Response[0] != 116 )
              goto LABEL_28;
LABEL_26:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_28;
          }
LABEL_27:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_28;
        }
LABEL_29:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( Response[0] )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_32;
        case 'G':
          goto LABEL_32;
        case 'I':
          goto LABEL_29;
        case 'P':
          goto LABEL_27;
        case 'T':
          goto LABEL_26;
      }
LABEL_28:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_32:
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v33);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v27, &v33);
    *(struct D2D_RECT_F *)&v33.m11 = *a3;
    v32 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v27, (__int64)&v33, (float *)&v32);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v19,
        *((float *)&v32 + 1),
        SBYTE8(v32),
        SBYTE12(v32));
  }
  ColorSpace = CD2DTarget::GetColorSpace(v11);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v29 = g;
    v30 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v29 = scRGBTosRGB(g);
    v30 = scRGBTosRGB(b);
  }
  v23 = *((_QWORD *)this + 45);
  v31 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v23 + 64LL))(v23, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 30) + 136LL))(
    *((_QWORD *)this + 30),
    a3,
    *((_QWORD *)this + 45));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v24 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      2,
      v24);
  }
  return 0LL;
}
