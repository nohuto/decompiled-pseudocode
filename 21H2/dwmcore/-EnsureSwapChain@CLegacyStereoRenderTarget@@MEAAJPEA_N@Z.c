/*
 * XREFs of ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x1801CA040
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x18001DB98 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18001E850 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?4VILegacyStereoSwapChain@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VILegacySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VILegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801C9FA0 (--$-4VILegacyStereoSwapChain@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VILegacySwapChain@@Uerr_.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18028070C (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::EnsureSwapChain(CLegacyStereoRenderTarget *this, bool *a2)
{
  __int64 *v2; // r15
  __int64 v4; // r8
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int DXGIOutput; // edi
  unsigned int v10; // edx
  _QWORD *v11; // rbx
  CDeviceManager *v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  char v15; // al
  struct IDXGIOutput *v16; // rcx
  int Device; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  CD3DDevice *v21; // rbx
  int LegacyStereoSwapChain; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  CD3DDevice *v27; // rcx
  int v28; // r9d
  CResource *v29; // rcx
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  struct IDXGIOutput *v32; // [rsp+40h] [rbp-C0h] BYREF
  CD3DDevice *v33; // [rsp+48h] [rbp-B8h] BYREF
  CDeviceManager **v34; // [rsp+50h] [rbp-B0h]
  struct IDXGIOutputDWM *v35; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+60h] [rbp-A0h]
  _BYTE v37[28]; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+8Ch] [rbp-74h]
  int v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+DCh] [rbp-24h]

  v2 = (__int64 *)((char *)this + 176);
  *a2 = 0;
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL));
    v7 = (**v6)(v6);
    DXGIOutput = v7;
    if ( v7 >= 0 )
      return DXGIOutput;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180377E30, 3LL, v7, 0x54u);
    goto LABEL_33;
  }
  v10 = *((_DWORD *)this + 4604);
  v11 = (_QWORD *)((char *)this + 168);
  v34 = (CDeviceManager **)((char *)this + 168);
  v32 = 0LL;
  v35 = 0LL;
  v36 = 1;
  DXGIOutput = CDisplayManager::GetDXGIOutput(this, v10, &v35);
  if ( v36 )
  {
    v12 = *v34;
    *v34 = v35;
    if ( v12 )
      (*(void (__fastcall **)(CDeviceManager *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( (DXGIOutput & 0x80000000) != 0 )
  {
    v28 = DXGIOutput;
    v31 = 94;
    goto LABEL_31;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 32LL))(*v11, v37);
  DXGIOutput = v13;
  if ( v13 < 0 )
  {
    v31 = 97;
    goto LABEL_28;
  }
  v14 = v40;
  *((_DWORD *)this + 26) = v38;
  *((_DWORD *)this + 27) = v39;
  v15 = HIBYTE(v14) & 1;
  *((_BYTE *)this + 18609) = (v14 & 8) != 0;
  v16 = v32;
  *((_BYTE *)this + 18608) = v15;
  *((_BYTE *)this + 18610) = 0;
  if ( v16 )
    ((void (__fastcall *)(struct IDXGIOutput *))v16->lpVtbl->Release)(v16);
  v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*v11)(
          *v11,
          &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
          &v32);
  DXGIOutput = v13;
  if ( v13 < 0 )
  {
    v31 = 107;
LABEL_28:
    v28 = v13;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, &dword_180377E30, 3LL, v28, v31);
    goto LABEL_32;
  }
  v33 = 0LL;
  Device = CDeviceManager::GetDevice(v12, *(struct _LUID *)((char *)this + 18424), &v33);
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180377E30, 3LL, Device, 0x6Du);
    v27 = v33;
    if ( !v33 )
      goto LABEL_32;
    goto LABEL_23;
  }
  v19 = *((_QWORD *)this + 2330);
  *((_QWORD *)this + 2330) = 0LL;
  if ( v19 )
  {
    v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v33;
  LegacyStereoSwapChain = CD3DDevice::CreateLegacyStereoSwapChain(
                            v33,
                            v32,
                            (const struct D2D_SIZE_U *)this + 13,
                            (CLegacyStereoRenderTarget *)((char *)this + 112),
                            (CLegacyStereoRenderTarget *)((char *)this + 18424),
                            *((_DWORD *)this + 4605),
                            (struct ILegacyStereoSwapChain **)this + 2330);
  DXGIOutput = LegacyStereoSwapChain;
  if ( LegacyStereoSwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_180377E30, 3LL, LegacyStereoSwapChain, 0x74u);
    goto LABEL_21;
  }
  wil::com_ptr_t<ILegacySwapChain,wil::err_returncode_policy>::operator=<ILegacyStereoSwapChain,wil::err_returncode_policy,void>(
    v2,
    (__int64)this + 18640);
  v24 = COverlayContext::OnSwapChainCreated((CLegacyStereoRenderTarget *)((char *)this + 192));
  DXGIOutput = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_180377E30, 3LL, v24, 0x78u);
LABEL_21:
    if ( !v21 )
    {
LABEL_32:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_33:
      if ( DXGIOutput == -2003304306 && *((_BYTE *)this + 18610) )
        *((_BYTE *)this + 18610) = 0;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 21);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v2);
      v29 = (CResource *)*((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = 0LL;
      if ( v29 )
        CResource::InternalRelease(v29);
      *((_BYTE *)this + 18613) = 0;
      return DXGIOutput;
    }
    v27 = v21;
LABEL_23:
    CD3DDevice::Release(v27);
    goto LABEL_32;
  }
  v26 = *((_QWORD *)this + 2330);
  *((_BYTE *)this + 141) = 1;
  *((_BYTE *)this + 18612) = 1;
  *((_BYTE *)this + 18648) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  *a2 = 1;
  if ( v21 )
    CD3DDevice::Release(v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
  return DXGIOutput;
}
