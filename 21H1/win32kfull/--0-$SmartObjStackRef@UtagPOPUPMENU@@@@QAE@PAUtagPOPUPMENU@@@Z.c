/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@PAUtagPOPUPMENU@@@Z @ 0xF17F6
 * Callers:
 *     _NtUserCalculatePopupWindowPosition@20 @ 0x15FC6D (_NtUserCalculatePopupWindowPosition@20.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_DWORD *this, int a2)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(this, a2);
  return this;
}
