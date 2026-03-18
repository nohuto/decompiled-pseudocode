/*
 * XREFs of ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x180211514
 * Callers:
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18020CE80 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180026014 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionEnvironmentLight *__fastcall CCompositionEnvironmentLight::CCompositionEnvironmentLight(
        CCompositionEnvironmentLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 1);
  *(_DWORD *)(v2 + 248) = 1065353216;
  *(_QWORD *)(v2 + 72) = &CCompositionEnvironmentLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionEnvironmentLight::`vftable'{for `CPropertyChangeResource'};
  *(_OWORD *)(v2 + 252) = xmmword_180306320;
  *(_OWORD *)(v2 + 268) = xmmword_180306330;
  *(_OWORD *)(v2 + 284) = xmmword_180306340;
  *(_OWORD *)(v2 + 300) = xmmword_180306350;
  *(_OWORD *)(v2 + 316) = xmmword_180306360;
  *(_OWORD *)(v2 + 332) = xmmword_180306370;
  *(_QWORD *)(v2 + 348) = 0xBF3B531EBD893965uLL;
  *(_DWORD *)(v2 + 356) = 1059333266;
  return (CCompositionEnvironmentLight *)v2;
}
