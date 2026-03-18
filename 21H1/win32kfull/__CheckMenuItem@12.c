/*
 * XREFs of __CheckMenuItem@12 @ 0xB9DA2
 * Callers:
 *     _NtUserCheckMenuItem@12 @ 0xB9D04 (_NtUserCheckMenuItem@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?MenuItemState@@YGKABV?$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z @ 0xBA210 (-MenuItemState@@YGKABV-$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z.c)
 */

int __thiscall _CheckMenuItem(void *this, int a2)
{
  int v2; // esi
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v4, (int)this);
  v4[2] = 0;
  v2 = MenuItemState(a2, 8, 0);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v4);
  return v2;
}
