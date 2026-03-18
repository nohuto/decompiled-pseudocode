/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x1800D64D8
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005D908 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802004C0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAX.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x180056EAC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources(
        struct IDeviceResourceNotify *a1)
{
  (****((void (__fastcall *****)(_QWORD))a1 + 1))(**((_QWORD **)a1 + 1));
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)a1 + 1) + 8LL))(**((_QWORD **)a1 + 1));
}
