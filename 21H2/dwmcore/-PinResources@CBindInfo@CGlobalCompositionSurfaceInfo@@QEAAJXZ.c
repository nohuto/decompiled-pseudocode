/*
 * XREFs of ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234
 * Callers:
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@I@Z @ 0x180005068 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@I@Z.c)
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NU_LUID@@I@Z @ 0x180248648 (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NU_LUID@@I@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180005404 (--$_Emplace_reallocate@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180008AA0 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAUIDXGIResource@@$0-0@gsl@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??0?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainRealization@@@Z @ 0x180066F50 (--0-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainReal.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800DD2C8 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180111D6E (McTemplateU0xx_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // edi
  char *v3; // r15
  struct _LUID v4; // rdx
  _QWORD *v5; // r12
  int ExistingDevice; // eax
  unsigned int v7; // ecx
  _QWORD *v8; // r14
  _QWORD *v9; // r13
  _QWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r14
  gsl::details *v14; // rcx
  CD3DDevice *v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  CD3DDevice *v18; // rcx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v22; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v23; // [rsp+50h] [rbp-18h]
  int v24; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+50h] BYREF
  CD3DDevice *v26; // [rsp+C0h] [rbp+58h] BYREF
  __int64 *v27; // [rsp+C8h] [rbp+60h] BYREF

  v1 = 0;
  if ( !((__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3) )
  {
    v1 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_180346500, 3u, -2003292412, 0x46Du, 0LL);
    return v1;
  }
  v3 = (char *)this + 120;
  if ( ((*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v4 = (struct _LUID)*((_QWORD *)this + 5);
    v26 = 0LL;
    v5 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(this, v4, &v26);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180346500, 3u, ExistingDevice, 0x447u, 0LL);
    }
    else
    {
      v8 = (_QWORD *)*((_QWORD *)this + 10);
      v9 = (_QWORD *)*((_QWORD *)this + 11);
      if ( v8 != v9 )
      {
        v10 = (_QWORD *)*((_QWORD *)&v22 + 1);
        do
        {
          wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
            &v27,
            *v8);
          v11 = *v27;
          v25 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, int *))(v11 + 144))(v27, &v25, &v24);
          v1 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0, &dword_180346500, 3u, v12, 0x451u, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v27);
            goto LABEL_32;
          }
          if ( !v24 )
          {
            if ( v10 == v5 )
            {
              std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
                &v22,
                v10,
                &v25);
              v5 = v23;
              v10 = (_QWORD *)*((_QWORD *)&v22 + 1);
            }
            else
            {
              v20 = v25;
              v25 = 0LL;
              *v10++ = v20;
              *((_QWORD *)&v22 + 1) = v10;
            }
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v27);
          ++v8;
        }
        while ( v8 != v9 );
        v13 = v22;
        if ( (_QWORD *)v22 == v10 )
          goto LABEL_30;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
          McTemplateU0xx_EventWriteTransfer(
            *(unsigned int *)(*(_QWORD *)this + 40LL),
            &Pinning_CompSurfInfoPin,
            *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
            (__int64)((__int64)v10 - v22) >> 3);
        gsl::details::extent_type<-1>::extent_type<-1>(v21, ((__int64)v10 - v13) >> 3);
        if ( v21[0] == -1LL || !v13 && v21[0] )
        {
          gsl::details::terminate(v14);
          JUMPOUT(0x1800053FALL);
        }
        v15 = v26;
        v21[1] = v13;
        v16 = CD3DDevice::PinResources(v26, v21);
        v1 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180346500, 3u, v16, 0x45Fu, 0LL);
        }
        else if ( v3 != (char *)&v22 )
        {
          std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(v3);
          v23 = 0LL;
          v22 = 0LL;
          *(_QWORD *)v3 = v13;
          *((_QWORD *)v3 + 1) = v10;
          *((_QWORD *)v3 + 2) = v5;
        }
        if ( v15 )
        {
          v18 = v15;
          goto LABEL_21;
        }
        goto LABEL_22;
      }
LABEL_30:
      v1 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180346500, 3u, -2147467259, 0x465u, 0LL);
    }
LABEL_32:
    v18 = v26;
    if ( v26 )
LABEL_21:
      CD3DDevice::Release(v18);
LABEL_22:
    std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v22);
  }
  return v1;
}
