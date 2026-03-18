/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800CF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800CF21C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::NotifyInvalidResource(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 8LL));
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  return CDrawListEntry::Release(*(CDrawListEntry **)(a1 + 8));
}
