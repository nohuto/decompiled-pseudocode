/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x1C015923C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, a2);
  a1[2] = 0LL;
  return a1;
}
