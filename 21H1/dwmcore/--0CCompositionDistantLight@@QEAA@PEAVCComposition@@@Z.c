/*
 * XREFs of ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180025E94
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180026014 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionDistantLight *__fastcall CCompositionDistantLight::CCompositionDistantLight(
        CCompositionDistantLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_DWORD *)(v2 + 280) = -1082130432;
  *(_QWORD *)(v2 + 72) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionDistantLight::`vftable'{for `CPropertyChangeResource'};
  *(_DWORD *)(v2 + 268) = 1065353216;
  *(_DWORD *)(v2 + 264) = 1065353216;
  *(_DWORD *)(v2 + 260) = 1065353216;
  *(_DWORD *)(v2 + 256) = 1065353216;
  *(_DWORD *)(v2 + 284) = 1065353216;
  return (CCompositionDistantLight *)v2;
}
