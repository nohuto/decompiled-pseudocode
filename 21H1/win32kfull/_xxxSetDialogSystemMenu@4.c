/*
 * XREFs of _xxxSetDialogSystemMenu@4 @ 0xC5750
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2 (-LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxLoadSysDesktopMenu@8 @ 0xCC3A8 (_xxxLoadSysDesktopMenu@8.c)
 */

BOOL __stdcall xxxSetDialogSystemMenu(int a1)
{
  int v1; // eax
  int v2; // ecx
  int SysDesktopMenu; // eax
  int v4; // ecx
  BOOL v5; // ebx
  _DWORD *v6; // ecx
  _DWORD *v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-4h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0);
  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 32);
  v9 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v8, v1);
  if ( SmartObjStackRef<tagMENU>::operator==(v8, v2) )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(*(_DWORD *)(a1 + 12) + 32, 48);
    v9 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v8, SysDesktopMenu);
  }
  LockWndMenuWorker(a1, 1u, v8);
  v5 = !SmartObjStackRef<tagMENU>::operator==(v8, v4);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6);
  return v5;
}
