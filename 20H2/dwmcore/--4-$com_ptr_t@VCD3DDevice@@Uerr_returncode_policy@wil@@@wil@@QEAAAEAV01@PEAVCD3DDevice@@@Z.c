/*
 * XREFs of ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x18003A260
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x180037894 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ?Present@CDDASwapChain@@UEAAJII@Z @ 0x18024DC30 (-Present@CDDASwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

CD3DDevice **__fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(
        CD3DDevice **a1,
        CMILCOMBase *a2)
{
  CD3DDevice *v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILCOMBase::InternalAddRef(a2);
  if ( v2 )
    CD3DDevice::Release(v2);
  return a1;
}
