/*
 * XREFs of ?xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z @ 0x1A3018
 * Callers:
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 * Callees:
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     __GetSubMenu@8 @ 0x8F1F4 (__GetSubMenu@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     _LockDesktopMenu@8 @ 0xCC438 (_LockDesktopMenu@8.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(int a1, int a2)
{
  int SubMenu; // edi
  int v5; // ecx
  int v6; // ecx
  _DWORD *Menu; // eax
  _DWORD *v8; // ecx
  int v10; // [esp-4h] [ebp-28h]
  int *v11[2]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-10h]
  struct _UNICODE_STRING DestinationString; // [esp+18h] [ebp-Ch] BYREF
  int *v14; // [esp+20h] [ebp-4h]

  SubMenu = 0;
  SmartObjStackRefBase<tagMENU>::Init(v11, 0);
  v14 = (int *)(*(_DWORD *)(a1 + 12) + 4 * (a2 != 0) + 36);
  v10 = *v14;
  v12 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v11, v10);
  if ( SmartObjStackRef<tagMENU>::operator==(v11, v5) && (*(_BYTE *)(_gptiCurrent + 264) & 5) == 0 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(a2 != 0 ? 80 : 64));
    Menu = xxxClientLoadMenu(0, (ULONG_PTR)&DestinationString);
    v12 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v11, (int)Menu);
    LockDesktopMenu((int)v14, v11);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==(v11, v6) )
  {
    v8 = v12;
    if ( !v12 )
      v8 = (_DWORD *)*v11[0];
    SubMenu = _GetSubMenu(v8);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v11);
  return (struct tagMENU *)SubMenu;
}
