/*
 * XREFs of ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x18001D808 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x18001DB98 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E0D4 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18001E704 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x18001F470 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18001F4A8 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6870 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x1802800CC (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureSwapChain(CLegacyRenderTarget *this, bool *a2)
{
  struct ILegacySwapChain **v2; // rbx
  __int64 v4; // rcx
  unsigned int v6; // edi
  int (__fastcall ***v7)(_QWORD); // rcx
  unsigned int v8; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // r9d
  int v13; // eax
  CDeviceManager *v14; // rcx
  int Device; // eax
  unsigned int v16; // ecx
  CD3DDevice *v17; // rbx
  int LegacySwapChain; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  CD3DDevice *v23; // rcx
  int ConversionSwapChain; // eax
  unsigned int v25; // ecx
  int v26; // [rsp+20h] [rbp-40h]
  struct ILegacySwapChain **v27; // [rsp+30h] [rbp-30h]
  struct ILegacySwapChain **v28; // [rsp+38h] [rbp-28h]
  struct IDXGIOutput *v29; // [rsp+40h] [rbp-20h] BYREF
  CD3DDevice *v30[2]; // [rsp+48h] [rbp-18h] BYREF

  v2 = (struct ILegacySwapChain **)((char *)this + 176);
  *a2 = 0;
  v4 = *((_QWORD *)this + 22);
  v6 = 0;
  if ( !v4 )
  {
    v29 = 0LL;
    v10 = CLegacyRenderTarget::EnsureDXGIOutput(this);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180345B58, 4u, v10, 0x49Fu, 0LL);
      goto LABEL_16;
    }
    v26 = *((_DWORD *)this + 4551);
    *(_OWORD *)v30 = *(_OWORD *)((char *)this + 18180);
    CMonitorTransform::Initialize(
      (_DWORD)this + 18160,
      (_DWORD)this + 104,
      (_DWORD)this + 18164,
      v12,
      v26,
      (__int64)v30);
    v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIOutput **))this + 21))(
            *((_QWORD *)this + 21),
            &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
            &v29);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, &dword_180345B58, 4u, v13, 0x4AAu, 0LL);
      goto LABEL_16;
    }
    v30[0] = 0LL;
    Device = CDeviceManager::GetDevice(v14, *(struct _LUID *)((char *)this + 18424), v30);
    v6 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180345B58, 4u, Device, 0x4ACu, 0LL);
      v23 = v30[0];
      if ( !v30[0] )
        goto LABEL_16;
      goto LABEL_15;
    }
    if ( *((_DWORD *)this + 30) > 1u )
    {
      *((_BYTE *)this + 18610) = 0;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v2);
      v27 = v2;
      v17 = v30[0];
      ConversionSwapChain = CD3DDevice::CreateConversionSwapChain(
                              v30[0],
                              v29,
                              (const struct D2D_SIZE_U *)this + 13,
                              (CLegacyRenderTarget *)((char *)this + 112),
                              (CLegacyRenderTarget *)((char *)this + 18424),
                              *((_DWORD *)this + 4605),
                              v27);
      v6 = ConversionSwapChain;
      if ( ConversionSwapChain >= 0 )
      {
LABEL_9:
        v20 = COverlayContext::OnSwapChainCreated((CLegacyRenderTarget *)((char *)this + 192));
        v6 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_180345B58, 4u, v20, 0x4CBu, 0LL);
        }
        else
        {
          CLegacyRenderTarget::CheckForceParallelMode(this);
          if ( CComposition::GetCompositorClockBoost(*((CComposition **)this + 2)) )
          {
            LOBYTE(v22) = 1;
            (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 18) + 120LL))((char *)this + 144, v22);
          }
          *((_BYTE *)this + 141) = 1;
          *((_WORD *)this + 9306) = 1;
          *a2 = 1;
        }
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_180345B58, 4u, ConversionSwapChain, 0x4C8u, 0LL);
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v2);
      v28 = v2;
      v17 = v30[0];
      LegacySwapChain = CD3DDevice::CreateLegacySwapChain(
                          v30[0],
                          v29,
                          (const struct D2D_SIZE_U *)this + 13,
                          (CLegacyRenderTarget *)((char *)this + 112),
                          (CLegacyRenderTarget *)((char *)this + 18424),
                          *((_DWORD *)this + 4605),
                          *((_BYTE *)this + 18610),
                          v28);
      v6 = LegacySwapChain;
      if ( LegacySwapChain >= 0 )
        goto LABEL_9;
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180345B58, 4u, LegacySwapChain, 0x4BBu, 0LL);
    }
LABEL_13:
    if ( !v17 )
    {
LABEL_16:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
      if ( (v6 & 0x80000000) == 0 )
        return v6;
      if ( v6 == -2003304306 && *((_BYTE *)this + 18610) )
        *((_BYTE *)this + 18610) = 0;
LABEL_30:
      CLegacyRenderTarget::ReleaseSwapChain(this);
      return v6;
    }
    v23 = v17;
LABEL_15:
    CD3DDevice::Release(v23);
    goto LABEL_16;
  }
  v7 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v4 + 8) + 12LL) + v4 + 8);
  if ( (**v7)(v7) < 0 )
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180345B58, 4u, -2003304442, 0x497u, 0LL);
    goto LABEL_30;
  }
  return v6;
}
