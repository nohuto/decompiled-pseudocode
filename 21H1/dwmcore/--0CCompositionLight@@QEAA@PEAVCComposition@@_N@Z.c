/*
 * XREFs of ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180026014
 * Callers:
 *     ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180025E94 (--0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x180025EF4 (--0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x180025FC0 (--0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x1801BEC94 (--0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x180211514 (--0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CCompositionLight *__fastcall CCompositionLight::CCompositionLight(
        CCompositionLight *this,
        struct CComposition *a2,
        char a3)
{
  CCompositionLight *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 1;
  *(_QWORD *)((char *)this + 100) = 1LL;
  *((_QWORD *)this + 15) = (char *)this + 152;
  *((_QWORD *)this + 16) = (char *)this + 152;
  result = this;
  *((_DWORD *)this + 34) = 1;
  *(_QWORD *)((char *)this + 140) = 1LL;
  *((_BYTE *)this + 160) = 1;
  *((_BYTE *)this + 161) = a3;
  *((_BYTE *)this + 162) = 1;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 244) = 0;
  return result;
}
