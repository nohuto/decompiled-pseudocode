/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x180021788
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18007F334 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800225BC (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x180023EE4 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(CD3DDevice *this)
{
  CD2DContext::DestroyDeviceResources((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyDeviceResources((CD3DDevice *)((char *)this + 1104));
  CD3DDevice::Trim(this);
}
