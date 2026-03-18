/*
 * XREFs of _CheckMenuItem @ 0x1C014DE4C
 * Callers:
 *     NtUserCheckMenuItem @ 0x1C014DD60 (NtUserCheckMenuItem.c)
 * Callees:
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C005CAD8 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall CheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 *v7[5]; // [rsp+30h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v7, a1);
  v7[2] = 0LL;
  v5 = MenuItemState(v7, a2, a3, 8, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v7);
  return v5;
}
