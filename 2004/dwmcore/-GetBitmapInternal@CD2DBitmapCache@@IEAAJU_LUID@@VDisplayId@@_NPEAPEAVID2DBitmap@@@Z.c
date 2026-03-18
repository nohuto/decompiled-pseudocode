/*
 * XREFs of ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x18003E430
 * Callers:
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18001FE24 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E0A0 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E174 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E370 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18003E6BC (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180092F94 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180215B3C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternal(
        CD2DBitmapCache *a1,
        struct _LUID a2,
        int a3,
        CHAR a4,
        volatile signed __int32 **a5)
{
  volatile signed __int32 *v5; // r12
  unsigned __int64 v6; // r15
  volatile signed __int32 *v7; // rbx
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // r15
  volatile signed __int32 *v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rcx
  int updated; // eax
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  BOOL v31; // eax
  CHAR v32; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v35; // rcx
  CHAR Response[8]; // [rsp+60h] [rbp-31h] BYREF
  CRenderTargetBitmap *v37; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v38[2]; // [rsp+70h] [rbp-21h] BYREF
  char v39[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-11h]
  volatile signed __int32 **v41; // [rsp+88h] [rbp-9h]
  char v42[8]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v43; // [rsp+98h] [rbp+7h]
  int v44; // [rsp+A0h] [rbp+Fh]
  int v45; // [rsp+A4h] [rbp+13h]

  v5 = 0LL;
  Response[0] = a4;
  v6 = HIDWORD(*(unsigned __int64 *)&a2);
  v7 = 0LL;
  v37 = (CRenderTargetBitmap *)a2;
  v11 = 0;
  v41 = a5;
  v40 = 0LL;
  if ( !*((_QWORD *)a1 + 3) )
  {
    v11 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2003292412, 0xBAu, 0LL);
    goto LABEL_9;
  }
  v12 = *((_QWORD *)a1 + 4);
  if ( v12 )
  {
    v13 = v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 8LL);
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 32LL))(v13, v42);
    if ( *v14 == a2.LowPart && v14[1] == (_DWORD)v6 )
    {
      v15 = *((_QWORD *)a1 + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) + 16LL);
      v16 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 8LL))(v15, v39);
      if ( *v16 == DisplayId::None || *v16 == a3 || a3 == DisplayId::All )
      {
        v17 = *((_QWORD *)a1 + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) + 8LL);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) || Response[0] )
        {
          v7 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
          if ( v7 )
          {
            v18 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          }
          goto LABEL_9;
        }
      }
    }
  }
  v20 = *((_QWORD *)a1 + 6);
  v21 = 0LL;
  v22 = *((_QWORD *)a1 + 7);
  if ( v20 != v22 )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)v20 + 8LL)
          + 16LL
          + *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) + 16LL) + 8LL);
      if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23) + 936) == __PAIR64__(
                                                                                                    HIDWORD(v37),
                                                                                                    a2.LowPart) )
        break;
      v20 += 8LL;
      if ( v20 == v22 )
        goto LABEL_23;
    }
    v21 = *(volatile signed __int32 **)(*(_QWORD *)v20 + 8LL);
    v37 = (CRenderTargetBitmap *)v21;
    if ( v21 )
    {
      if ( *((int *)v21 + 2) < 0 )
      {
        while ( 1 )
        {
          v29 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v30 = v29;
          if ( !v29 )
          {
            v31 = IsDebuggerPresent();
            v32 = Response[0];
            if ( v31 )
              v32 = 103;
            Response[0] = v32;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_18028970C,
            word_18028970C,
            "Function: ",
            L"CMILCOMBase::InternalAddRef",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
            25);
          if ( v30 )
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
          switch ( Response[0] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_14;
            case 'G':
            case 'g':
              goto LABEL_14;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_42;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_42;
            default:
LABEL_42:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_14:
      _InterlockedIncrement(v21 + 2);
      v21 = (volatile signed __int32 *)v37;
      v7 = v40;
      if ( v37 )
        goto LABEL_15;
    }
  }
LABEL_23:
  v37 = 0LL;
  if ( v21 )
    CRenderTargetBitmap::Release((CRenderTargetBitmap *)v21);
  v27 = CD2DBitmapCache::CreateAndCacheBitmap(a1, a2, &v37);
  v11 = v27;
  if ( v27 >= 0 )
  {
    v21 = (volatile signed __int32 *)v37;
LABEL_15:
    (***((void (__fastcall ****)(_QWORD, _DWORD *))a1 + 3))(*((_QWORD *)a1 + 3), v38);
    v44 = v38[0];
    v45 = v38[1];
    v43 = 0LL;
    updated = CD2DBitmapCache::UpdateCachedBitmap(a1);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, updated, 0xACu, 0LL);
      if ( v21 )
        CRenderTargetBitmap::Release((CRenderTargetBitmap *)v21);
    }
    else
    {
      if ( v21 )
        v5 = v21 + 20;
      v26 = v7;
      v7 = v5;
      if ( v26 )
      {
        v35 = (__int64)v26 + *(int *)(*((_QWORD *)v26 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xA5u, 0LL);
  if ( v37 )
    CRenderTargetBitmap::Release(v37);
LABEL_9:
  *v41 = v7;
  return v11;
}
