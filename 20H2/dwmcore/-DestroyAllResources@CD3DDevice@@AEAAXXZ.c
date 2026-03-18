/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800375F4
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180037080 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x1800820C0 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x180037568 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180039950 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(union _SLIST_HEADER *this)
{
  CD2DContext::DestroyDeviceResources((CD2DContext *)&this[1]);
  CD3DResourceManager::DestroyDeviceResources(this + 71);
  CD3DDevice::Trim((CD3DDevice *)this);
}
