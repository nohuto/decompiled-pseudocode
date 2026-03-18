/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C005FA54
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxSendMenuSelect @ 0x1C025247C (xxxSendMenuSelect.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(__int64 a1, __int64 a2)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, **(_QWORD **)a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  return a1;
}
