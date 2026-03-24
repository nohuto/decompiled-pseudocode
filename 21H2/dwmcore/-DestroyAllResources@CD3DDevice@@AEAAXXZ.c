/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18002AA04
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18002A490 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077330 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x18002A978 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CD60 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(union _SLIST_HEADER *this)
{
  CD2DContext::DestroyDeviceResources((CD2DContext *)&this[1]);
  CD3DResourceManager::DestroyDeviceResources(this + 71);
  CD3DDevice::Trim((CD3DDevice *)this);
}
