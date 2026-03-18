/*
 * XREFs of __GetSubMenu@8 @ 0x8F1F4
 * Callers:
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     ?xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z @ 0x1A3018 (-xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

int __thiscall _GetSubMenu(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  int *v6; // [esp+14h] [ebp-Ch] BYREF
  int v7; // [esp+1Ch] [ebp-4h]

  SmartObjStackRefBase<tagMENU>::Init(0);
  v7 = 0;
  SmartObjStackRefBase<tagMENU>::Init(this);
  v5[2] = 0;
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5[0] + 20) + 24);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v5);
  if ( v2 && *(_DWORD *)(this[14] + 8) )
    SmartObjStackRefBase<tagMENU>::operator=(*(_DWORD *)(this[14] + 8));
  v3 = v7;
  if ( !v7 )
    v3 = *v6;
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v6);
  return v3;
}
