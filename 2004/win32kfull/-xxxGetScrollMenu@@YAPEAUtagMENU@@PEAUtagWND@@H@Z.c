/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0245AF8
 * Callers:
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x1C005CCA8 (_GetSubMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C005CE2C (RtlInitUnicodeStringOrId.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C011EFC8 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 SubMenu; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned __int8 *Menu; // rax
  __int64 v9; // rcx
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v4 = *((_QWORD *)a1 + 3);
  SubMenu = 0LL;
  v6 = (__int64 *)(v4 + 80);
  if ( !a2 )
    v6 = (__int64 *)(v4 + 72);
  v7 = *v6;
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v12, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v12) && (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
  {
    v11 = 0LL;
    RtlInitUnicodeStringOrId(&v11, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, (void **)&v11);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v12, (__int64)Menu);
    LockDesktopMenu((__int64)v6, v12);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12) )
  {
    v9 = v13;
    if ( !v13 )
      v9 = *v12[0];
    SubMenu = GetSubMenu(v9);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v12);
  return (struct tagMENU *)SubMenu;
}
