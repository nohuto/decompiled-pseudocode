/*
 * XREFs of _xxxSetSysMenu@4 @ 0xB9E58
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _xxxTranslateAccelerator@12 @ 0xA8452 (_xxxTranslateAccelerator@12.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     __GetSubMenu@8 @ 0x8F1F4 (__GetSubMenu@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     ?_SetCloseDefault@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xBA25A (-_SetCloseDefault@@YGXABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     __SetMenuDefaultItem@12 @ 0xC68A6 (__SetMenuDefaultItem@12.c)
 *     _IsSmallerThanScreen@8 @ 0x19E5B1 (_IsSmallerThanScreen@8.c)
 */

int __stdcall xxxSetSysMenu(_DWORD *a1)
{
  int v1; // ebx
  int SysMenuPtr; // eax
  int v3; // ecx
  _DWORD *v4; // ecx
  int SubMenu; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _BYTE *v10; // ecx
  int v11; // esi
  char v12; // al
  char v13; // dl
  int v15; // [esp+10h] [ebp-28h]
  int v16; // [esp+14h] [ebp-24h]
  int v17; // [esp+18h] [ebp-20h]
  int v18; // [esp+1Ch] [ebp-1Ch]
  _DWORD v19[2]; // [esp+20h] [ebp-18h] BYREF
  _DWORD *v20; // [esp+28h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-Ch] BYREF
  _DWORD *v22; // [esp+30h] [ebp-8h]
  int v23; // [esp+34h] [ebp-4h]

  v1 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v19, 0);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v20 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v19, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==(v19, v3) )
  {
    v4 = v20;
    if ( !v20 )
      v4 = *(_DWORD **)v19[0];
    SubMenu = _GetSubMenu(v4);
    v20 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v19, SubMenu);
    if ( !SmartObjStackRef<tagMENU>::operator==(v19, v6) )
    {
      v7 = v20;
      if ( !v20 )
        v7 = *(_DWORD **)v19[0];
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v21 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v21;
      v22 = v7;
      HMLockObject(v7);
      v10 = (_BYTE *)a1[5];
      v11 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 3;
      v18 = 61536;
      if ( (v10[23] & 0x20) != 0 )
      {
        v17 = 0;
        v15 = 3;
        v1 = 3;
        v18 = 61728;
        if ( IsTrayWindow(a1) )
          v11 = 3;
        v10 = (_BYTE *)a1[5];
      }
      else if ( (v10[22] & 2) == 0 )
      {
        v15 = 3;
      }
      if ( (v10[22] & 1) != 0 )
      {
        v12 = v10[23];
        if ( (v12 & 1) != 0 )
        {
          v17 = 0;
          v11 = 3;
          if ( (v12 & 0x40) == 0 )
            v11 = IsSmallerThanScreen(a1, 0) == 0 ? 3 : 0;
          v10 = (_BYTE *)a1[5];
          v1 = 3;
          v16 = 3;
        }
      }
      else
      {
        v16 = 3;
      }
      v13 = v10[22];
      if ( (v13 & 4) == 0 )
        v1 = 3;
      if ( (v13 & 0xC0) != 0x40 && (v10[16] & 1) == 0 || (v13 & 7) != 0 )
      {
        xxxEnableMenuItem(v1);
        xxxEnableMenuItem(v15);
        xxxEnableMenuItem(v16);
        xxxEnableMenuItem(v17);
      }
      xxxEnableMenuItem(v11);
      if ( v18 == 61536 )
        _SetCloseDefault(v19);
      else
        _SetMenuDefaultItem(0);
      ThreadUnlock1();
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v19);
  return 1;
}
