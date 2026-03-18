/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C011EE60
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01116BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011EF04 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 SysDesktopMenu; // rax
  _QWORD *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v6, 0LL);
  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v6, v3);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v6) )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(*(_QWORD *)(a1 + 24) + 64LL, 48LL);
    v7 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v6, SysDesktopMenu);
  }
  LockWndMenuWorker(a1, 1u, v6);
  LOBYTE(v2) = !SmartObjStackRef<tagMENU>::operator==((__int64)v6);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v6);
  return v2;
}
