/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C007C530
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C007BB68 (xxxLoadSysDesktopMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01129EC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v5, 0LL);
  v2 = 0;
  v6 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v5);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v5) )
  {
    xxxLoadSysDesktopMenu((__int64 *)(*(_QWORD *)(a1 + 24) + 64LL), 48);
    v6 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v5);
  }
  LOBYTE(v3) = 1;
  LockWndMenuWorker(a1, v3, v5);
  LOBYTE(v2) = !SmartObjStackRef<tagMENU>::operator==((__int64)v5);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v5);
  return v2;
}
