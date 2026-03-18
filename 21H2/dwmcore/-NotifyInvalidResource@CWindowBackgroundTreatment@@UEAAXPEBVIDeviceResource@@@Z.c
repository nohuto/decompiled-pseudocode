/*
 * XREFs of ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802024B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800D530C (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 */

void __fastcall CWindowBackgroundTreatment::NotifyInvalidResource(
        CWindowBackgroundTreatment *this,
        const struct IDeviceResource *a2)
{
  CWindowBackgroundTreatment *v2; // rbx

  v2 = (CWindowBackgroundTreatment *)((char *)this - 64);
  CWindowBackgroundTreatment::InvalidateBitmapRealization((CWindowBackgroundTreatment *)((char *)this - 64));
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(v2);
}
