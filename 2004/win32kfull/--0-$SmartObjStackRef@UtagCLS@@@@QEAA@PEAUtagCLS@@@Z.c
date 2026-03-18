/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C0158ED4
 * Callers:
 *     xxxSetClassData @ 0x1C010CC4C (xxxSetClassData.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1, __int64 a2)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, a2);
  return a1;
}
