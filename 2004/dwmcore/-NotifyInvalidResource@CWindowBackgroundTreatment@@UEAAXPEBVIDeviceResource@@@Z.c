/*
 * XREFs of ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801F95F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800BD8C8 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800BDA58 (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  CWindowBackgroundTreatment *v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = (CWindowBackgroundTreatment *)(this - 56);
  CWindowBackgroundTreatment::ClearRenderTargetMaps((CWindowBackgroundTreatment *)(this - 56));
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(v2);
  v4 = *(_QWORD *)(this + 80);
  if ( v4 )
  {
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 8LL) + v4 + 8;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v5 + 48LL))(v5, this & -(__int64)(v2 != 0LL));
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)(this + 80));
  }
}
