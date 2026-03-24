/*
 * XREFs of ?Trim@CD3DDevice@@QEAAXXZ @ 0x18002CC28
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800254D4 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18002AA04 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077330 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18023DFD8 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18023E880 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     ?SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@@Z @ 0x180251C10 (-SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18002CD1C (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x18002D018 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::Trim(CD3DDevice *this)
{
  char *v1; // rdi
  __int64 v2; // rbx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  CRenderTargetBitmap *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 512;
  v2 = 0LL;
  if ( *((_DWORD *)this + 134) )
  {
    do
    {
      v6 = *(CRenderTargetBitmap **)(*(_QWORD *)v1 + 8 * v2);
      *((_BYTE *)v6 + 176) = 0;
      CRenderTargetBitmap::Release(v6);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v1 + 6) );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v1, 8LL);
  CD2DContext::ReleaseCachedD2DTarget((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyReleasedResources((CD3DDevice *)((char *)this + 1136));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 880LL))(*((_QWORD *)this + 75));
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 73);
  v7 = 0LL;
  if ( (**v4)(v4, &GUID_6007896c_3244_4afd_bf18_a6d3beda5023, &v7) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 136LL))(v7);
  v5 = v7;
  *((_BYTE *)this + 1436) = 0;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
