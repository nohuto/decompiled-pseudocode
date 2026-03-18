/*
 * XREFs of ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802916D4
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@012AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x180291DD4 (-ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@A.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x1802922E8 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180292904 (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@P.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertDesktopAndAppPlanes(
        CConversionSwapChain *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3)
{
  __int64 v3; // r9
  void (__fastcall ***v7)(_QWORD, int *); // rcx
  void (__fastcall ***v8)(_QWORD, int *); // rcx
  int v9; // ecx
  int *v10; // rdi
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int AppOverlayShaderResourceView; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _DWORD **v17; // r15
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64, _QWORD **); // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  FastRegion::Internal::CRgnData *v31; // rcx
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // eax
  FastRegion::Internal::CRgnData *v35; // rcx
  int v36; // r9d
  int v37; // r10d
  int v38; // eax
  int v39; // r11d
  FastRegion::Internal::CRgnData *v40; // rdx
  _DWORD *v41; // r8
  int v42; // eax
  int v43; // r9d
  int v44; // r10d
  int v45; // eax
  int v46; // r11d
  FastRegion::Internal::CRgnData *v47; // rdx
  _DWORD *v48; // r8
  int v49; // eax
  int v50; // edi
  struct ID3D11ShaderResourceView *v51; // rbx
  __int64 v52; // rdx
  int v53; // eax
  int v54; // r8d
  int v55; // eax
  FastRegion::Internal::CRgnData *v56; // rcx
  void *v58; // [rsp+28h] [rbp-D8h]
  struct ID3D11ShaderResourceView *v59; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v60; // [rsp+68h] [rbp-98h] BYREF
  struct D2D_SIZE_U v61; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v62[8]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v63; // [rsp+80h] [rbp-80h]
  int *v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+A8h] [rbp-58h] BYREF
  int v68; // [rsp+B0h] [rbp-50h] BYREF
  int v69; // [rsp+B4h] [rbp-4Ch]
  int v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+BCh] [rbp-44h]
  __int64 v72; // [rsp+C0h] [rbp-40h] BYREF
  int v73; // [rsp+C8h] [rbp-38h]
  int v74; // [rsp+CCh] [rbp-34h]
  __int64 v75; // [rsp+D0h] [rbp-30h] BYREF
  int v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  enum DXGI_FORMAT v78[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v79[6]; // [rsp+F8h] [rbp-8h] BYREF
  FastRegion::Internal::CRgnData *v80; // [rsp+110h] [rbp+10h] BYREF
  int v81; // [rsp+118h] [rbp+18h] BYREF
  FastRegion::Internal::CRgnData *v82; // [rsp+160h] [rbp+60h] BYREF
  int v83; // [rsp+168h] [rbp+68h] BYREF
  void *v84[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v85[10]; // [rsp+200h] [rbp+100h] BYREF
  const void *retaddr; // [rsp+298h] [rbp+198h]

  v3 = *((_QWORD *)this + 43);
  v60 = 0LL;
  v59 = 0LL;
  v7 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  (**v7)(v7, &v67);
  v8 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 43)
                                            + 8LL
                                            + *(int *)(*(_QWORD *)(*((_QWORD *)this + 43) + 8LL) + 12LL));
  (**v8)(v8, v79);
  v78[2] = *((enum DXGI_FORMAT *)a3 + 25);
  v61 = 0LL;
  v78[0] = DXGI_FORMAT_UNKNOWN;
  v78[1] = DXGI_FORMAT_R32G32B32A32_UINT;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v84, (const struct tagRECT *)((char *)a2 + 60));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v85, (const struct tagRECT *)((char *)a3 + 60));
  v9 = *((_DWORD *)a3 + 16);
  v10 = (int *)((char *)this + 728);
  v11 = *((_DWORD *)a3 + 17);
  v12 = *((_DWORD *)a3 + 18);
  v82 = (FastRegion::Internal::CRgnData *)&v83;
  v13 = *((_DWORD *)a3 + 15);
  v83 = 0;
  *((_DWORD *)this + 182) = v13;
  *((_DWORD *)this + 183) = v9;
  *((_DWORD *)this + 184) = v11;
  *((_DWORD *)this + 185) = v12;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v59);
  AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                   this,
                                   *((struct IDXGIResource **)a3 + 1),
                                   &v61,
                                   v78,
                                   &v59);
  v16 = AppOverlayShaderResourceView;
  if ( AppOverlayShaderResourceView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, AppOverlayShaderResourceView, 0x2F0u);
  }
  else
  {
    v17 = (_DWORD **)((char *)this + 640);
    v18 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)this + 80,
            (const struct FastRegion::Internal::CRgnData **)v84);
    if ( v18 < 0 )
      ModuleFailFastForHRESULT(v18, retaddr);
    v19 = *((_QWORD *)this + 43);
    v20 = v19 + *(int *)(*(_QWORD *)(v19 + 8) + 16LL);
    v21 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)(v20 + 8) + 48LL);
    if ( v60 )
    {
      v22 = (__int64)v60 + *(int *)(v60[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v19 = *((_QWORD *)this + 43);
    }
    v23 = (**(__int64 (__fastcall ***)(__int64, __int64 *))v19)(v19, &v75);
    v24 = v21(v20 + 8, v23, &v60);
    v16 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x2F6u);
    }
    else if ( **v17 )
    {
      v81 = 0;
      v80 = (FastRegion::Internal::CRgnData *)&v81;
      v26 = FastRegion::CRegion::Copy((int **)&v80, (int **)this + 80);
      if ( v26 < 0 )
        ModuleFailFastForHRESULT(v26, retaddr);
      CRegion::Subtract(&v80, (const struct FastRegion::Internal::CRgnData **)v85);
      FastRegion::Internal::CRgnData::BeginIterator(v80, (struct FastRegion::CRegion::Iterator *)v62);
      while ( 1 )
      {
        if ( (unsigned __int64)v64 >= v63 )
        {
          FastRegion::CRegion::FreeMemory((void **)&v80);
          goto LABEL_17;
        }
        v27 = *((_DWORD *)a2 + 19);
        v69 = *v64;
        v71 = v64[2];
        v28 = 2 * v66;
        v68 = *(_DWORD *)(v65 + 4 * v28);
        v70 = *(_DWORD *)(v65 + 4 * v28 + 4);
        v72 = *(_QWORD *)((char *)a2 + 44);
        v73 = *((_DWORD *)a2 + 13);
        v74 = *((_DWORD *)a2 + 14);
        v75 = *(_QWORD *)((char *)a2 + 28);
        v76 = *((_DWORD *)a2 + 9);
        v77 = *((_DWORD *)a2 + 10);
        v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 8LL))(v60);
        LODWORD(v58) = v27;
        v30 = CConversionSwapChain::ConvertSingleResource(
                (int)this,
                v29,
                (int)&v67,
                (int)v79,
                (__int64)&v75,
                v58,
                (__int64)&v72,
                (__int64)&v68);
        v16 = v30;
        if ( v30 < 0 )
          break;
        FastRegion::Internal::CRgnData::StepIterator(v31, (struct FastRegion::CRegion::Iterator *)v62);
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v31, 0LL, 0LL, v30, 0x30Eu);
LABEL_15:
      FastRegion::CRegion::FreeMemory((void **)&v80);
    }
    else
    {
LABEL_17:
      if ( !*((_BYTE *)this + 744) )
        goto LABEL_47;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v80, (const struct tagRECT *)((char *)this + 728));
      CRegion::Subtract(&v80, (const struct FastRegion::Internal::CRgnData **)v84);
      FastRegion::Internal::CRgnData::BeginIterator(v80, (struct FastRegion::CRegion::Iterator *)v62);
      while ( (unsigned __int64)v64 < v63 )
      {
        v69 = *v64;
        v71 = v64[2];
        v32 = 2 * v66;
        v68 = *(_DWORD *)(v65 + 4 * v32);
        v33 = *((_DWORD *)a3 + 19);
        v70 = *(_DWORD *)(v65 + 4 * v32 + 4);
        v75 = *(_QWORD *)((char *)a3 + 44);
        v76 = *((_DWORD *)a3 + 13);
        v77 = *((_DWORD *)a3 + 14);
        v72 = *(_QWORD *)((char *)a3 + 28);
        v73 = *((_DWORD *)a3 + 9);
        v74 = *((_DWORD *)a3 + 10);
        LODWORD(v58) = v33;
        v34 = CConversionSwapChain::ConvertSingleResource(
                (int)this,
                (int)v59,
                (int)&v61,
                (int)v78,
                (__int64)&v72,
                v58,
                (__int64)&v75,
                (__int64)&v68);
        v16 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v35, 0LL, 0LL, v34, 0x325u);
          goto LABEL_15;
        }
        FastRegion::Internal::CRgnData::StepIterator(v35, (struct FastRegion::CRegion::Iterator *)v62);
      }
      FastRegion::CRegion::FreeMemory((void **)&v80);
      if ( *((_BYTE *)this + 744) )
      {
        v36 = *((_DWORD *)this + 184);
        v37 = *v10;
        if ( *v10 >= v36 || (v38 = *((_DWORD *)this + 183), v39 = *((_DWORD *)this + 185), v38 >= v39) )
        {
          *(_DWORD *)v82 = 0;
        }
        else
        {
          v40 = v82;
          v41 = (_DWORD *)((char *)v82 + 28);
          *(_DWORD *)v82 = 2;
          *v41 = v37;
          *((_DWORD *)v40 + 3) = v38;
          v41[1] = v36;
          *((_DWORD *)v40 + 4) = (_DWORD)v41 - ((_DWORD)v40 + 12);
          *((_DWORD *)v40 + 1) = v37;
          *((_DWORD *)v40 + 2) = v36;
          *((_DWORD *)v40 + 6) = (_DWORD)v41 - ((_DWORD)v40 + 20) + 8;
          *((_DWORD *)v40 + 5) = v39;
        }
        v42 = FastRegion::CRegion::Intersect(&v82, (const struct FastRegion::Internal::CRgnData **)v84);
        if ( v42 < 0 )
          ModuleFailFastForHRESULT(v42, retaddr);
      }
      else
      {
LABEL_47:
        if ( **v17 )
        {
          v43 = *((_DWORD *)this + 184);
          v44 = *v10;
          if ( *v10 >= v43 || (v45 = *((_DWORD *)this + 183), v46 = *((_DWORD *)this + 185), v45 >= v46) )
          {
            *(_DWORD *)v82 = 0;
          }
          else
          {
            v47 = v82;
            v48 = (_DWORD *)((char *)v82 + 28);
            *(_DWORD *)v82 = 2;
            *v48 = v44;
            *((_DWORD *)v47 + 3) = v45;
            v48[1] = v43;
            *((_DWORD *)v47 + 4) = (_DWORD)v48 - ((_DWORD)v47 + 12);
            *((_DWORD *)v47 + 1) = v44;
            *((_DWORD *)v47 + 2) = v43;
            *((_DWORD *)v47 + 6) = (_DWORD)v48 - ((_DWORD)v47 + 20) + 8;
            *((_DWORD *)v47 + 5) = v46;
          }
          v49 = FastRegion::CRegion::Intersect(&v82, (const struct FastRegion::Internal::CRgnData **)this + 80);
          if ( v49 < 0 )
            ModuleFailFastForHRESULT(v49, retaddr);
        }
      }
      FastRegion::Internal::CRgnData::BeginIterator(v82, (struct FastRegion::CRegion::Iterator *)v62);
      while ( (unsigned __int64)v64 < v63 )
      {
        v50 = *((_DWORD *)a3 + 19);
        v51 = v59;
        v69 = *v64;
        v71 = v64[2];
        v52 = 2 * v66;
        v68 = *(_DWORD *)(v65 + 4 * v52);
        v70 = *(_DWORD *)(v65 + 4 * v52 + 4);
        v75 = *(_QWORD *)((char *)a3 + 44);
        v76 = *((_DWORD *)a3 + 13);
        v77 = *((_DWORD *)a3 + 14);
        v72 = *(_QWORD *)((char *)a3 + 28);
        v73 = *((_DWORD *)a3 + 9);
        v74 = *((_DWORD *)a3 + 10);
        v53 = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 8LL))(v60);
        v55 = CConversionSwapChain::ConvertMultiResource(
                (int)this,
                v53,
                v54,
                (int)v79,
                (__int64)v51,
                (__int64)&v61,
                v78,
                (__int64)&v72,
                v50,
                (__int64)&v75,
                (__int64)&v68);
        v16 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v56, 0LL, 0LL, v55, 0x34Au);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v56, (struct FastRegion::CRegion::Iterator *)v62);
      }
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v82);
  FastRegion::CRegion::FreeMemory(v85);
  FastRegion::CRegion::FreeMemory(v84);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v59);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v60);
  return v16;
}
