/*
 * XREFs of ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18020BADC
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18020BD90 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800198A8 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C9D10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1800D6E94 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800F86D8 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA?AU_LUID@@XZ @ 0x18020BD40 (-GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  CDeviceManager *v5; // rcx
  int ExistingDevice; // eax
  __int64 v7; // rcx
  unsigned int v8; // r15d
  struct CD3DDevice *v9; // r13
  __int64 v10; // r12
  unsigned int i; // r14d
  int CurrentRenderingRealization; // eax
  __int64 v13; // rcx
  struct _LUID v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _LUID v20; // [rsp+A0h] [rbp+48h] BYREF
  struct ID2DContextOwner *v21; // [rsp+A8h] [rbp+50h]
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+B0h] [rbp+58h] BYREF
  struct CD3DDevice *v23; // [rsp+B8h] [rbp+60h] BYREF

  v21 = a2;
  LOBYTE(v2) = 0;
  v4 = 0;
  v23 = 0LL;
  if ( *((int *)this + 30) < 0 )
    goto LABEL_20;
  CCompositionSurfaceBitmap::GetAdapterLuid(*(CCompositionSurfaceBitmap **)(32LL * *((unsigned int *)this + 30)
                                                                          + *((_QWORD *)this + 11)
                                                                          + 8));
  if ( !*((_BYTE *)this + 152) )
    goto LABEL_20;
  ExistingDevice = CDeviceManager::GetExistingDevice(v5, v20, &v23);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, ExistingDevice, 0x162u);
    goto LABEL_20;
  }
  if ( *((_BYTE *)this + 168) )
  {
    v8 = 6;
  }
  else
  {
    v8 = *((_DWORD *)this + 28);
    if ( !v8 )
      goto LABEL_15;
  }
  v9 = v23;
  v10 = 0LL;
  for ( i = 0; i < v8; ++i )
  {
    v2 = *(_QWORD *)(v10 + *((_QWORD *)this + 11) + 8);
    if ( !v2 )
      goto LABEL_12;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                    (CCompositionSurfaceBitmap *)(v2 + 72),
                                    (struct IBitmapRealization **)&v20);
    v4 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, CurrentRenderingRealization, 0x16Au);
      goto LABEL_18;
    }
    v22 = 0LL;
    v14 = v20;
    v2 = *(_QWORD *)(**(_QWORD **)&v20 + 48LL);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
    v15 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v21 + 40LL))(v21);
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v2)(v14, v15, &v22);
    LOBYTE(v2) = 0;
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x16Eu);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
LABEL_18:
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
      goto LABEL_20;
    }
    v18 = (**v22)(v22);
    CD3DDevice::CopySubresourceRegion(
      (__int64)v9,
      v18,
      0,
      (int *)(32LL * i + *((_QWORD *)this + 11) + 16LL),
      *((_QWORD *)this + 17),
      i,
      0,
      0,
      0);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
LABEL_12:
    v10 += 32LL;
  }
  if ( *((_BYTE *)this + 168) != (_BYTE)v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 70) + 432LL))(
      *((_QWORD *)v9 + 70),
      *((_QWORD *)this + 18));
LABEL_15:
  *((_BYTE *)this + 152) = v2;
LABEL_20:
  ReleaseInterface<CD3DDevice>(&v23);
  return v4;
}
