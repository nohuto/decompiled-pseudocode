/*
 * XREFs of ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801FC754
 * Callers:
 *     ?PinResources@CGlobalCompositionSurfaceInfo@@UEAAJU_LUID@@@Z @ 0x1801FCA10 (-PinResources@CGlobalCompositionSurfaceInfo@@UEAAJU_LUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18002D370 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800329A8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800CCDA0 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x1801FC3A8 (--$emplace_back@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180240ED8 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAUIDXGIResource@@$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2)
{
  unsigned int v2; // edi
  __int64 **v4; // r15
  CDeviceManager *v5; // rcx
  int ExistingDevice; // eax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  CD3DDevice *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  CD3DDevice *v18; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-20h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+A0h] [rbp+40h] BYREF
  CD3DDevice *v24; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  if ( a2 != *(_QWORD *)((char *)this + 36) || !((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3) )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180306038, 3u, -2003292412, 0x3A8u, 0LL);
    return v2;
  }
  v4 = (__int64 **)((char *)this + 80);
  if ( ((*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v21 = 0LL;
    v24 = 0LL;
    v22 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v24);
    ExistingDevice = CDeviceManager::GetExistingDevice(v5, *(struct _LUID *)((char *)this + 36), &v24);
    v2 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180306038, 3u, ExistingDevice, 0x383u, 0LL);
    }
    else
    {
      v8 = (__int64 *)*((_QWORD *)this + 6);
      v9 = (__int64 *)*((_QWORD *)this + 7);
      if ( v8 != v9 )
      {
        do
        {
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
            &v26,
            *v8);
          v25 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v26 + 128LL))(v26, &v25, &v23);
          v2 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180306038, 3u, v10, 0x38Du, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
            goto LABEL_26;
          }
          if ( !v23 )
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
              &v21,
              &v25);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
          ++v8;
        }
        while ( v8 != v9 );
        v12 = v21;
        v13 = (__int64 *)v22;
        if ( v21 == (__int64 *)v22 )
          goto LABEL_24;
        v14 = (__int64)(v22 - (_QWORD)v21) >> 3;
        if ( v14 < 0 || !v21 && v14 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v15 = v24;
        v20[0] = (__int64)(v22 - (_QWORD)v21) >> 3;
        v20[1] = v21;
        v16 = CD3DDevice::PinResources(v24, v20);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180306038, 3u, v16, 0x398u, 0LL);
        }
        else
        {
          if ( v4 != &v21 )
          {
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)v4);
            v21 = 0LL;
            v4[2] = (__int64 *)*((_QWORD *)&v22 + 1);
            v22 = 0LL;
            *v4 = v12;
            v4[1] = v13;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0x_EventWriteTransfer(
              *(unsigned int *)(*(_QWORD *)this + 40LL),
              &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
              *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
        }
        if ( v15 )
        {
          v18 = v15;
          goto LABEL_27;
        }
        goto LABEL_28;
      }
LABEL_24:
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180306038, 3u, -2147467259, 0x3A0u, 0LL);
    }
LABEL_26:
    v18 = v24;
    if ( v24 )
LABEL_27:
      CD3DDevice::Release(v18);
LABEL_28:
    std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)&v21);
  }
  return v2;
}
