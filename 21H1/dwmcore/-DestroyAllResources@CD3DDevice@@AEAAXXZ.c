/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800A4DC0
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800A4E80 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800A3A10 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1800A4DF4 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(CD2DResourceManager **this)
{
  CD2DContext::DestroyDeviceResources(this + 2);
  CD3DResourceManager::DestroyDeviceResources((CD3DResourceManager *)(this + 142));
  CD3DDevice::Trim((CD3DDevice *)this);
}
