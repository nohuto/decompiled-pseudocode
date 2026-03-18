/*
 * XREFs of ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x180080BF0
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x180021A88 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?Present@CDDASwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180293E00 (-Present@CDDASwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CD3DDevice **__fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(CD3DDevice **a1, __int64 a2)
{
  CD3DDevice *v2; // rdi

  v2 = *a1;
  *a1 = (CD3DDevice *)a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  if ( v2 )
    CD3DDevice::Release(v2);
  return a1;
}
