/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180079DA4
 * Callers:
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x180025DA0 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18002E72C (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180031048 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180031104 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x180032FBC (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180033988 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180036FC0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800771F4 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RAT.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077330 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078248 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800791C0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?GetPresentStatistics@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1800C4868 (-GetPresentStatistics@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800D1CFC (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800E4050 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800EDBCC (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180187884 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180187BDC (-Present@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018A2B4 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018A408 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18018B484 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018E210 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180251290 (-GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  char v3; // r9
  int v4; // eax
  bool v5; // zf
  bool v7; // zf
  unsigned int v8; // ecx
  int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 v12; // rdx

  v3 = 0;
  if ( a2 > 8 )
  {
    switch ( a2 )
    {
      case 10:
        if ( a1 != -1071243253 && a1 != -2147023728 )
        {
          v10 = a1 == -2147024890;
          goto LABEL_39;
        }
        goto LABEL_40;
      case 9:
        if ( a1 != -2147024890 && a1 != -2147024809 && a1 != -2147023728 && a1 != -2147024895 )
        {
          v10 = a1 == -1071243253;
          goto LABEL_39;
        }
        goto LABEL_40;
      case 11:
        if ( a1 != -1071243253 && a1 != -2147023728 && a1 != -2147024890 )
        {
          v10 = a1 == -2147024809;
LABEL_39:
          if ( !v10 )
            return v3;
        }
LABEL_40:
        *a3 = 0;
        return 1;
    }
    if ( a2 <= 13 )
    {
      v7 = a1 == -2003292412;
      goto LABEL_25;
    }
    if ( a2 != 14 )
    {
      if ( a2 != 15 )
        return v3;
LABEL_4:
      if ( (unsigned int)(a1 + 2005270523) > 0x1B || (v4 = 134217733, !_bittest(&v4, a1 + 2005270523)) )
      {
        if ( a1 != -2003238900 )
        {
          v5 = a1 == -2005270494;
          goto LABEL_8;
        }
      }
LABEL_70:
      *a3 = -2003304307;
      return 1;
    }
    if ( a1 == -2147024882 )
    {
      *a3 = -2005532292;
      return 1;
    }
    v8 = a1 + 2005270523;
    if ( v8 > 0x1B )
      return v3;
    v9 = 134217733;
LABEL_34:
    if ( !_bittest(&v9, v8) )
      return v3;
    goto LABEL_70;
  }
  switch ( a2 )
  {
    case 8:
      if ( a1 != -2003292404
        && a1 != -2003304307
        && a1 != -2003304442
        && a1 != -2005530509
        && a1 != -2147024809
        && a1 != -2005270523
        && a1 != -2005270521
        && a1 != -2005532292
        && a1 != -2005530512
        && a1 != -1071243253 )
      {
        v10 = a1 == -2003304290;
        goto LABEL_39;
      }
      goto LABEL_40;
    case 0:
      goto LABEL_4;
    case 1:
      if ( a1 == 142213127 || a1 == -2005270491 || a1 == -2005270494 )
        goto LABEL_63;
      if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2147467259 )
        goto LABEL_70;
      v7 = a1 == -2005270496;
LABEL_25:
      if ( !v7 )
        return v3;
      goto LABEL_70;
    case 2:
      v11 = (unsigned int)(a1 + 2005270524);
      if ( (unsigned int)v11 <= 0x21 )
      {
        v12 = 0x240000001LL;
        if ( _bittest64(&v12, v11) )
          goto LABEL_63;
      }
      if ( a1 == 142213127 )
        goto LABEL_63;
      if ( a1 == -2147467259 )
        goto LABEL_70;
      v8 = a1 + 2005270526;
      if ( v8 > 0x1E )
        return v3;
      v9 = 1073741865;
      goto LABEL_34;
    case 3:
      if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 )
        goto LABEL_63;
      goto LABEL_32;
  }
  if ( a2 != 4 )
  {
    if ( a2 <= 4 )
      return v3;
    if ( a2 <= 6 )
    {
LABEL_32:
      v8 = a1 + 2005270523;
      if ( v8 > 0x1D )
        return v3;
      v9 = 671088645;
      goto LABEL_34;
    }
    if ( a1 != -2005530509 && a1 != -2147024809 && a1 != -2005270523 && a1 != -2005270521 && a1 != -2003304442 )
    {
      v10 = a1 == -2003304307;
      goto LABEL_39;
    }
    goto LABEL_40;
  }
  if ( a1 == -2147467263 || a1 == -2147024809 || a1 == -2005270526 || a1 == -2147024865 )
    goto LABEL_63;
  v5 = a1 == -2003304291;
LABEL_8:
  if ( v5 )
  {
LABEL_63:
    *a3 = -2003304442;
    return 1;
  }
  return v3;
}
