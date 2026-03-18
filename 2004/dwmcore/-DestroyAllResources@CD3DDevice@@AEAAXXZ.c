/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800AFF84
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180063270 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1800AFEF8 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800B1840 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(union _SLIST_HEADER *this)
{
  CD2DContext::DestroyDeviceResources((CD2DContext *)&this[1]);
  CD3DResourceManager::DestroyDeviceResources(this + 71);
  CD3DDevice::Trim((CD3DDevice *)this);
}
