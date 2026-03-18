/*
 * XREFs of ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024F3AC
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180250958 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800765F4 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077F3C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007802C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007ACF4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BB450 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ?ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@012AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18024FA8C (-ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@A.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18024FF5C (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180250438 (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@P.c)
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
  int v27; // eax
  int v28; // ebx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  FastRegion::Internal::CRgnData *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax
  FastRegion::Internal::CRgnData *v37; // rcx
  int v38; // r9d
  int v39; // r10d
  int v40; // eax
  int v41; // r11d
  FastRegion::Internal::CRgnData *v42; // rdx
  _DWORD *v43; // r8
  int v44; // eax
  int v45; // r9d
  int v46; // r10d
  int v47; // eax
  int v48; // r11d
  FastRegion::Internal::CRgnData *v49; // rdx
  _DWORD *v50; // r8
  int v51; // eax
  int v52; // edi
  struct ID3D11ShaderResourceView *v53; // rbx
  __int64 v54; // rdx
  int v55; // eax
  int v56; // r8d
  int v57; // eax
  FastRegion::Internal::CRgnData *v58; // rcx
  void *v60; // [rsp+28h] [rbp-D8h]
  struct ID3D11ShaderResourceView *v61; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v62; // [rsp+68h] [rbp-98h] BYREF
  struct D2D_SIZE_U v63; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v64[8]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v65; // [rsp+80h] [rbp-80h]
  int *v66; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+A8h] [rbp-58h] BYREF
  int v70; // [rsp+B0h] [rbp-50h] BYREF
  int v71; // [rsp+B4h] [rbp-4Ch]
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  int v75; // [rsp+C8h] [rbp-38h]
  int v76; // [rsp+CCh] [rbp-34h]
  __int64 v77; // [rsp+D0h] [rbp-30h] BYREF
  int v78; // [rsp+D8h] [rbp-28h]
  int v79; // [rsp+DCh] [rbp-24h]
  enum DXGI_FORMAT v80[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v81[6]; // [rsp+F8h] [rbp-8h] BYREF
  FastRegion::Internal::CRgnData *v82; // [rsp+110h] [rbp+10h] BYREF
  int v83; // [rsp+118h] [rbp+18h] BYREF
  FastRegion::Internal::CRgnData *v84; // [rsp+160h] [rbp+60h] BYREF
  int v85; // [rsp+168h] [rbp+68h] BYREF
  void *v86[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v87[10]; // [rsp+200h] [rbp+100h] BYREF
  const void *retaddr; // [rsp+298h] [rbp+198h]

  v3 = *((_QWORD *)this + 37);
  v62 = 0LL;
  v61 = 0LL;
  v7 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  (**v7)(v7, &v69);
  v8 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 37)
                                            + 8LL
                                            + *(int *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8LL) + 12LL));
  (**v8)(v8, v81);
  v80[2] = *((enum DXGI_FORMAT *)a3 + 25);
  v63 = 0LL;
  v80[0] = DXGI_FORMAT_UNKNOWN;
  v80[1] = DXGI_FORMAT_R32G32B32A32_UINT;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v86, (const struct tagRECT *)((char *)a2 + 60));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v87, (const struct tagRECT *)((char *)a3 + 60));
  v9 = *((_DWORD *)a3 + 16);
  v10 = (int *)((char *)this + 680);
  v11 = *((_DWORD *)a3 + 17);
  v12 = *((_DWORD *)a3 + 18);
  v84 = (FastRegion::Internal::CRgnData *)&v85;
  v13 = *((_DWORD *)a3 + 15);
  v85 = 0;
  *((_DWORD *)this + 170) = v13;
  *((_DWORD *)this + 171) = v9;
  *((_DWORD *)this + 172) = v11;
  *((_DWORD *)this + 173) = v12;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v61);
  AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                   this,
                                   *((struct IDXGIResource **)a3 + 1),
                                   &v63,
                                   v80,
                                   &v61);
  v16 = AppOverlayShaderResourceView;
  if ( AppOverlayShaderResourceView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, AppOverlayShaderResourceView, 0x2CBu, 0LL);
  }
  else
  {
    v17 = (_DWORD **)((char *)this + 592);
    v18 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)this + 74,
            (const struct FastRegion::Internal::CRgnData **)v86);
    if ( v18 < 0 )
      ModuleFailFastForHRESULT(v18, retaddr);
    v19 = *((_QWORD *)this + 37);
    v20 = v19 + *(int *)(*(_QWORD *)(v19 + 8) + 16LL);
    v21 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)(v20 + 8) + 48LL);
    if ( v62 )
    {
      v22 = (__int64)v62 + *(int *)(v62[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v19 = *((_QWORD *)this + 37);
    }
    v23 = (**(__int64 (__fastcall ***)(__int64, __int64 *))v19)(v19, &v77);
    v24 = v21(v20 + 8, v23, &v62);
    v16 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x2D1u, 0LL);
    }
    else if ( **v17 )
    {
      v83 = 0;
      v82 = (FastRegion::Internal::CRgnData *)&v83;
      v26 = FastRegion::CRegion::Copy(&v82, (FastRegion::Internal::CRgnData **)this + 74);
      if ( v26 < 0 )
        ModuleFailFastForHRESULT(v26, retaddr);
      v27 = FastRegion::CRegion::Subtract(&v82, (const struct FastRegion::Internal::CRgnData **)v87);
      if ( v27 < 0 )
        ModuleFailFastForHRESULT(v27, retaddr);
      FastRegion::Internal::CRgnData::BeginIterator(v82, (struct FastRegion::CRegion::Iterator *)v64);
      while ( 1 )
      {
        if ( (unsigned __int64)v66 >= v65 )
        {
          FastRegion::CRegion::FreeMemory((void **)&v82);
          goto LABEL_19;
        }
        v28 = *((_DWORD *)a2 + 19);
        v71 = *v66;
        v73 = v66[2];
        v29 = 2 * v68;
        v70 = *(_DWORD *)(v67 + 4 * v29);
        v72 = *(_DWORD *)(v67 + 4 * v29 + 4);
        v74 = *(_QWORD *)((char *)a2 + 44);
        v75 = *((_DWORD *)a2 + 13);
        v76 = *((_DWORD *)a2 + 14);
        v77 = *(_QWORD *)((char *)a2 + 28);
        v78 = *((_DWORD *)a2 + 9);
        v79 = *((_DWORD *)a2 + 10);
        v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 8LL))(v62);
        LODWORD(v60) = v28;
        v31 = CConversionSwapChain::ConvertSingleResource(
                (int)this,
                v30,
                (int)&v69,
                (int)v81,
                (int)&v77,
                v60,
                (__int64)&v74,
                (__int64)&v70);
        v16 = v31;
        if ( v31 < 0 )
          break;
        FastRegion::Internal::CRgnData::StepIterator(v32, (struct FastRegion::CRegion::Iterator *)v64);
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v32, 0LL, 0, v31, 0x2E9u, 0LL);
LABEL_17:
      FastRegion::CRegion::FreeMemory((void **)&v82);
    }
    else
    {
LABEL_19:
      if ( !*((_BYTE *)this + 696) )
        goto LABEL_51;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v82, (const struct tagRECT *)((char *)this + 680));
      v33 = FastRegion::CRegion::Subtract(&v82, (const struct FastRegion::Internal::CRgnData **)v86);
      if ( v33 < 0 )
        ModuleFailFastForHRESULT(v33, retaddr);
      FastRegion::Internal::CRgnData::BeginIterator(v82, (struct FastRegion::CRegion::Iterator *)v64);
      while ( (unsigned __int64)v66 < v65 )
      {
        v71 = *v66;
        v73 = v66[2];
        v34 = 2 * v68;
        v70 = *(_DWORD *)(v67 + 4 * v34);
        v35 = *((_DWORD *)a3 + 19);
        v72 = *(_DWORD *)(v67 + 4 * v34 + 4);
        v77 = *(_QWORD *)((char *)a3 + 44);
        v78 = *((_DWORD *)a3 + 13);
        v79 = *((_DWORD *)a3 + 14);
        v74 = *(_QWORD *)((char *)a3 + 28);
        v75 = *((_DWORD *)a3 + 9);
        v76 = *((_DWORD *)a3 + 10);
        LODWORD(v60) = v35;
        v36 = CConversionSwapChain::ConvertSingleResource(
                (int)this,
                (int)v61,
                (int)&v63,
                (int)v80,
                (int)&v74,
                v60,
                (__int64)&v77,
                (__int64)&v70);
        v16 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v37, 0LL, 0, v36, 0x300u, 0LL);
          goto LABEL_17;
        }
        FastRegion::Internal::CRgnData::StepIterator(v37, (struct FastRegion::CRegion::Iterator *)v64);
      }
      FastRegion::CRegion::FreeMemory((void **)&v82);
      if ( *((_BYTE *)this + 696) )
      {
        v38 = *((_DWORD *)this + 172);
        v39 = *v10;
        if ( *v10 >= v38 || (v40 = *((_DWORD *)this + 171), v41 = *((_DWORD *)this + 173), v40 >= v41) )
        {
          *(_DWORD *)v84 = 0;
        }
        else
        {
          v42 = v84;
          v43 = (_DWORD *)((char *)v84 + 28);
          *(_DWORD *)v84 = 2;
          *v43 = v39;
          *((_DWORD *)v42 + 3) = v40;
          v43[1] = v38;
          *((_DWORD *)v42 + 4) = (_DWORD)v43 - ((_DWORD)v42 + 12);
          *((_DWORD *)v42 + 1) = v39;
          *((_DWORD *)v42 + 2) = v38;
          *((_DWORD *)v42 + 6) = (_DWORD)v43 - ((_DWORD)v42 + 20) + 8;
          *((_DWORD *)v42 + 5) = v41;
        }
        v44 = FastRegion::CRegion::Intersect(&v84, (const struct FastRegion::Internal::CRgnData **)v86);
        if ( v44 < 0 )
          ModuleFailFastForHRESULT(v44, retaddr);
      }
      else
      {
LABEL_51:
        if ( **v17 )
        {
          v45 = *((_DWORD *)this + 172);
          v46 = *v10;
          if ( *v10 >= v45 || (v47 = *((_DWORD *)this + 171), v48 = *((_DWORD *)this + 173), v47 >= v48) )
          {
            *(_DWORD *)v84 = 0;
          }
          else
          {
            v49 = v84;
            v50 = (_DWORD *)((char *)v84 + 28);
            *(_DWORD *)v84 = 2;
            *v50 = v46;
            *((_DWORD *)v49 + 3) = v47;
            v50[1] = v45;
            *((_DWORD *)v49 + 4) = (_DWORD)v50 - ((_DWORD)v49 + 12);
            *((_DWORD *)v49 + 1) = v46;
            *((_DWORD *)v49 + 2) = v45;
            *((_DWORD *)v49 + 6) = (_DWORD)v50 - ((_DWORD)v49 + 20) + 8;
            *((_DWORD *)v49 + 5) = v48;
          }
          v51 = FastRegion::CRegion::Intersect(&v84, (const struct FastRegion::Internal::CRgnData **)this + 74);
          if ( v51 < 0 )
            ModuleFailFastForHRESULT(v51, retaddr);
        }
      }
      FastRegion::Internal::CRgnData::BeginIterator(v84, (struct FastRegion::CRegion::Iterator *)v64);
      while ( (unsigned __int64)v66 < v65 )
      {
        v52 = *((_DWORD *)a3 + 19);
        v53 = v61;
        v71 = *v66;
        v73 = v66[2];
        v54 = 2 * v68;
        v70 = *(_DWORD *)(v67 + 4 * v54);
        v72 = *(_DWORD *)(v67 + 4 * v54 + 4);
        v77 = *(_QWORD *)((char *)a3 + 44);
        v78 = *((_DWORD *)a3 + 13);
        v79 = *((_DWORD *)a3 + 14);
        v74 = *(_QWORD *)((char *)a3 + 28);
        v75 = *((_DWORD *)a3 + 9);
        v76 = *((_DWORD *)a3 + 10);
        v55 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 8LL))(v62);
        v57 = CConversionSwapChain::ConvertMultiResource(
                (int)this,
                v55,
                v56,
                (int)v81,
                (__int64)v53,
                (int)&v63,
                v80,
                (int)&v74,
                v52,
                (__int64)&v77,
                (__int64)&v70);
        v16 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v58, 0LL, 0, v57, 0x325u, 0LL);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v58, (struct FastRegion::CRegion::Iterator *)v64);
      }
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v84);
  FastRegion::CRegion::FreeMemory(v87);
  FastRegion::CRegion::FreeMemory(v86);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v61);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v62);
  return v16;
}
