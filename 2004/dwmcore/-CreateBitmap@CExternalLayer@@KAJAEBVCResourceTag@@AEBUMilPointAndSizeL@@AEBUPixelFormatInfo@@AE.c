/*
 * XREFs of ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C90C
 * Callers:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1800109A0 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180010F0C (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@VDisplayId@@W4Enum@CacheMode@@PEAPEAV1@@Z @ 0x18003C728 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18019122C (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@PEAPEAV1@@Z @ 0x1801914BC (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180192788 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV-$TMilRect_@M.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x180193010 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180193558 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003CC84 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D2B4 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801558AC (McTemplateU0qqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CExternalLayer::CreateBitmap(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        struct _LUID *a4,
        int a5,
        CD3DDevice *a6)
{
  CD3DDevice *v6; // r14
  int v11; // eax
  CDeviceManager *v12; // rcx
  int ExistingDevice; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF
  int v21; // [rsp+88h] [rbp+48h] BYREF
  int v22; // [rsp+8Ch] [rbp+4Ch]

  v6 = a6;
  v20 = 0LL;
  *(_QWORD *)a6 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      *a2 + a2[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      *a2,
      a2[1],
      *(_BYTE *)a2 + *((_BYTE *)a2 + 8),
      a2[1] + *((_BYTE *)a2 + 12));
  v11 = a2[2];
  a6 = 0LL;
  v21 = v11;
  v22 = a2[3];
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&a6);
  ExistingDevice = CDeviceManager::GetExistingDevice(v12, *a4, &a6);
  v15 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ExistingDevice, 0x21u, 0LL);
  }
  else
  {
    v16 = CD3DDevice::CreateRenderTargetBitmap(a6, a1, &v21, a3, a4, a5, &v20);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x28u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qqqq_EventWriteTransfer(
          *a2 + a2[2],
          (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
          *a2,
          a2[1],
          *(_BYTE *)a2 + *((_BYTE *)a2 + 8),
          a2[1] + *((_BYTE *)a2 + 12));
      v18 = v20;
      v20 = 0LL;
      *(_QWORD *)v6 = v18;
    }
  }
  if ( a6 )
    CD3DDevice::Release(a6);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
  return v15;
}
