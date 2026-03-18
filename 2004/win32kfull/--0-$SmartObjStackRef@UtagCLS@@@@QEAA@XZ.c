/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0158E58
 * Callers:
 *     _GetClassInfoEx @ 0x1C001E340 (_GetClassInfoEx.c)
 *     InternalRegisterClassEx @ 0x1C008D05C (InternalRegisterClassEx.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, 0LL);
  return a1;
}
