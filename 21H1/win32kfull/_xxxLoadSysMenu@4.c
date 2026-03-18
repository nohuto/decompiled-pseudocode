/*
 * XREFs of _xxxLoadSysMenu@4 @ 0x1D24C
 * Callers:
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxLoadSysDesktopMenu@8 @ 0xCC3A8 (_xxxLoadSysDesktopMenu@8.c)
 * Callees:
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     _xxxSetMenuItemInfo@20 @ 0x1DCEA (_xxxSetMenuItemInfo@20.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

_DWORD *__fastcall xxxLoadSysMenu(int a1)
{
  _DWORD *Menu; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v7[3]; // [esp+14h] [ebp-64h] BYREF
  _DWORD *v8[2]; // [esp+20h] [ebp-58h] BYREF
  int v9; // [esp+28h] [ebp-50h]
  _DWORD v10[7]; // [esp+2Ch] [ebp-4Ch] BYREF
  _DWORD v11[12]; // [esp+48h] [ebp-30h] BYREF

  memset(&v10[3], 0, 16);
  memset(v11, 0, sizeof(v11));
  v7[2] = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeStringOrId(&DestinationString, (PCWSTR)(unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0, (ULONG_PTR)&DestinationString);
  if ( !Menu )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v7[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v7;
  v7[1] = Menu;
  HMLockObject(Menu);
  v10[0] = 28;
  v10[1] = -2147483632;
  v10[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(Menu);
  v9 = 0;
  xxxSetMenuInfo(v8, v10);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
  v11[0] = 48;
  v11[1] = 128;
  v11[11] = 8;
  SmartObjStackRefBase<tagMENU>::Init(Menu);
  v9 = 0;
  xxxSetMenuItemInfo(0, v11, 0);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
  if ( a1 != 48 )
  {
    v11[11] = 11;
    SmartObjStackRefBase<tagMENU>::Init(Menu);
    v9 = 0;
    xxxSetMenuItemInfo(0, v11, 0);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
    v11[11] = 10;
    SmartObjStackRefBase<tagMENU>::Init(Menu);
    v9 = 0;
    xxxSetMenuItemInfo(0, v11, 0);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
    v11[11] = 9;
    SmartObjStackRefBase<tagMENU>::Init(Menu);
    v9 = 0;
    xxxSetMenuItemInfo(0, v11, 0);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
  }
  if ( ThreadUnlock1() && (*(_BYTE *)(_HMPheFromObject(Menu) + 13) & 1) == 0 )
    return Menu;
  else
    return 0;
}
