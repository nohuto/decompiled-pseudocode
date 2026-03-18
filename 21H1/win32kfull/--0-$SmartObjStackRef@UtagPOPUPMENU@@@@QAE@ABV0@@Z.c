/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@ABV0@@Z @ 0x183DA4
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_DWORD *this, int **a2)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(this, **a2);
  return this;
}
