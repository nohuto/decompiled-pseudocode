/*
 * XREFs of ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x18025E5EC
 * Callers:
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x180252AE8 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800EC47C (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionEnvironmentLight *__fastcall CCompositionEnvironmentLight::CCompositionEnvironmentLight(
        CCompositionEnvironmentLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 1);
  *(_DWORD *)(v2 + 256) = 1065353216;
  *(_QWORD *)(v2 + 80) = &CCompositionEnvironmentLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionEnvironmentLight::`vftable'{for `CPropertyChangeResource'};
  *(_OWORD *)(v2 + 260) = xmmword_18038CC30;
  *(_OWORD *)(v2 + 276) = xmmword_18038CC40;
  *(_OWORD *)(v2 + 292) = xmmword_18038CC50;
  *(_OWORD *)(v2 + 308) = xmmword_18038CC60;
  *(_OWORD *)(v2 + 324) = xmmword_18038CC70;
  *(_OWORD *)(v2 + 340) = xmmword_18038CC80;
  *(_QWORD *)(v2 + 356) = 0xBF3B531EBD893965uLL;
  *(_DWORD *)(v2 + 364) = 1059333266;
  return (CCompositionEnvironmentLight *)v2;
}
