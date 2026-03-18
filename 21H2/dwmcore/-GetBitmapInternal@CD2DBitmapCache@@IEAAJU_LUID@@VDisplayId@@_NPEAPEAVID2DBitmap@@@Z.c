/*
 * XREFs of ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0
 * Callers:
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018F24 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800683A0 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180068450 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180068640 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 * Callees:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180065B74 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180068B30 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180069C08 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18006A054 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006CF68 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18006D09C (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18006D198 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x1800EB140 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternal(
        __int64 a1,
        struct _LUID a2,
        int a3,
        CHAR a4,
        volatile signed __int32 **a5)
{
  volatile signed __int32 *v5; // rbx
  unsigned __int64 v6; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 *v19; // r15
  volatile signed __int32 *v20; // rsi
  __int64 *v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r15d
  __int64 *v25; // rcx
  int v26; // edi
  const struct FastRegion::Internal::CRgnData *v27; // rdx
  bool v28; // r15
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // r12d
  BOOL v42; // eax
  CHAR v43; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CSecondaryD2DBitmap *v46; // rcx
  unsigned int v47; // ecx
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  CSecondaryD2DBitmap *v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  char v51[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v52[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v53[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  int v56; // [rsp+B0h] [rbp-50h]
  _DWORD v57[2]; // [rsp+B4h] [rbp-4Ch] BYREF
  _DWORD v58[13]; // [rsp+BCh] [rbp-44h] BYREF
  _QWORD v59[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v60[8]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v5 = 0LL;
  Response[0] = a4;
  v6 = HIDWORD(*(unsigned __int64 *)&a2);
  v10 = 0;
  v49 = (CSecondaryD2DBitmap *)a2;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292412, 0xBAu, 0LL);
    goto LABEL_9;
  }
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    v12 = v11 + 8 + *(int *)(*(_QWORD *)(v11 + 8) + 8LL);
    v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 32LL))(v12, v52);
    if ( *v13 == a2.LowPart && v13[1] == (_DWORD)v6 )
    {
      v14 = *(_QWORD *)(a1 + 32) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL);
      v15 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 8LL))(v14, v51);
      if ( v15 == DisplayId::None || v15 == a3 || a3 == DisplayId::All )
      {
        v16 = *(_QWORD *)(a1 + 32) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 8LL);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) || Response[0] )
        {
          v5 = *(volatile signed __int32 **)(a1 + 32);
          if ( v5 )
          {
            v17 = (char *)v5 + *(int *)(*((_QWORD *)v5 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
          }
          goto LABEL_9;
        }
      }
    }
  }
  v19 = *(__int64 **)(a1 + 48);
  v20 = 0LL;
  v21 = *(__int64 **)(a1 + 56);
  if ( v19 == v21 )
  {
LABEL_32:
    v24 = 2;
  }
  else
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(*v19 + 8) + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) + 16LL) + 8LL);
      if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22) + 896) == __PAIR64__(
                                                                                                    HIDWORD(v49),
                                                                                                    a2.LowPart) )
        break;
      if ( ++v19 == v21 )
        goto LABEL_32;
    }
    v23 = *v19;
    v24 = 2;
    v20 = *(volatile signed __int32 **)(v23 + 8);
    v49 = (CSecondaryD2DBitmap *)v20;
    if ( v20 )
    {
      if ( *((int *)v20 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v40 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v41 = v40;
          if ( !v40 )
          {
            v42 = IsDebuggerPresent();
            v43 = Response[0];
            if ( v42 )
              v43 = 103;
            Response[0] = v43;
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
          if ( v41 )
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
              goto LABEL_67;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_67;
            default:
LABEL_67:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_14:
      _InterlockedIncrement(v20 + 2);
      v20 = (volatile signed __int32 *)v49;
      if ( v49 )
        goto LABEL_15;
    }
  }
  v49 = 0LL;
  if ( v20 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v20);
  v31 = CD2DBitmapCache::CreateAndCacheBitmap((CD2DBitmapCache::CCachedBitmap ***)a1, a2, &v49);
  v10 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xA5u, 0LL);
    v46 = v49;
    if ( !v49 )
      goto LABEL_9;
LABEL_78:
    CMILRefCountBaseT<IUnknown>::InternalRelease(v46);
    goto LABEL_9;
  }
  v20 = (volatile signed __int32 *)v49;
LABEL_15:
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 24))(*(_QWORD *)(a1 + 24), &v50);
  v25 = &v55;
  v26 = 0;
  v59[0] = 0LL;
  v59[1] = v50;
  v52[0] = 0LL;
  v52[1] = 0LL;
  v54 = &v55;
  if ( (int)v50 <= 0 || SHIDWORD(v50) <= 0 )
  {
    v24 = 0;
    LODWORD(v55) = 0;
  }
  else
  {
    v56 = v50;
    v58[3] = v50;
    v55 = 2LL;
    LODWORD(v25) = (unsigned int)v60 - 60 - (unsigned int)v57;
    v57[0] = 0;
    v57[1] = (_DWORD)v25;
    v58[2] = 0;
    v58[0] = HIDWORD(v50);
    v58[1] = (unsigned int)v60 - 60 - (unsigned int)v58 + 8;
  }
  if ( !v24 || (v27 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)v20 + 33), !*(_DWORD *)v27) )
  {
    v28 = 0;
    goto LABEL_21;
  }
  v28 = FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)&v55, v27);
  if ( !v28 )
    goto LABEL_21;
  v29 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v54, (const struct CRegion *)(v20 + 66));
  if ( v29 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v29, retaddr);
  CRegion::GetBoundingRect((CRegion *)&v54, (struct MilRectU *)v52);
  LODWORD(v25) = (_DWORD)v54;
  if ( &v55 == v54 )
  {
LABEL_21:
    if ( !v28 )
      goto LABEL_22;
    goto LABEL_29;
  }
  DefaultHeap::Free(v54);
  LODWORD(v55) = 0;
  v54 = &v55;
LABEL_29:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(*(_QWORD *)(a1 + 24)) )
  {
    v30 = CSecondaryD2DBitmap::Update((CSecondaryD2DBitmap *)v20);
    v26 = v30;
    v10 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v30, 0x107u, 0LL);
      goto LABEL_76;
    }
  }
  else
  {
    v33 = CD2DBitmapCache::EnsureSysmemBitmap((CD2DBitmapCache *)a1);
    v26 = v33;
    v10 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x10Bu, 0LL);
      goto LABEL_76;
    }
    if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(*(_QWORD *)(a1 + 40) + 32LL, v59, 0LL) )
    {
      v35 = *(_QWORD *)(a1 + 40) + 32LL;
      v53[0] = 0LL;
      v53[1] = 0LL;
      if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(v35, 0LL, v53) )
      {
        v36 = CSecondarySysmemBitmap::Update(*(_QWORD *)(a1 + 40), v53, *(_QWORD *)(a1 + 24));
        v10 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x13Cu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v10, 0x10Fu, 0LL);
          v26 = v10;
          goto LABEL_76;
        }
      }
    }
    v38 = CSecondaryD2DBitmap::Update((CSecondaryD2DBitmap *)v20);
    v26 = v38;
    v10 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v38, 0x113u, 0LL);
      goto LABEL_76;
    }
    if ( *(_BYTE *)(a1 + 72) )
    {
      v39 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = 0LL;
      if ( v39 )
        CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease();
      goto LABEL_23;
    }
  }
LABEL_22:
  v10 = v26;
  if ( v26 < 0 )
  {
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v26, 0xACu, 0LL);
    if ( !v20 )
      goto LABEL_9;
    v46 = (CSecondaryD2DBitmap *)v20;
    goto LABEL_78;
  }
LABEL_23:
  if ( v20 )
    v5 = v20 + 20;
LABEL_9:
  *a5 = v5;
  return v10;
}
