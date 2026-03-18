/*
 * XREFs of ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x18003293C
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800320D4 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18023B8D4 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18023BBD0 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DDevice::UseSwapchainAsShaderInput(CD3DDevice *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  if ( *((int *)this + 156) >= 40960 )
    return 1;
  v2 = *((_DWORD *)this + 224);
  if ( v2 == 1297040209 )
  {
    if ( *((int *)this + 157) >= 1200 )
      return 1;
  }
  else if ( v2 == 1230128470 )
  {
    return *((_DWORD *)this + 225) == 808464439;
  }
  return v1;
}
