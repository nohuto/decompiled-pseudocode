/*
 * XREFs of _NtUserSetMenuDefaultItem@12 @ 0xE9248
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __SetMenuDefaultItem@12 @ 0xC68A6 (__SetMenuDefaultItem@12.c)
 */

int __stdcall NtUserSetMenuDefaultItem(int a1, unsigned int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int *v6; // ecx
  _DWORD v8[2]; // [esp+4h] [ebp-14h] BYREF
  int *v9; // [esp+Ch] [ebp-Ch]
  _BYTE v10[8]; // [esp+10h] [ebp-8h] BYREF

  v3 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
  SmartObjStackRefBase<tagMENU>::Init(v8, 0);
  v4 = ValidateHmenu(a1);
  v9 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v8, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==(v8, v5)
    && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v8[0] + 20) + 20) & 0x40) == 0 )
  {
    v6 = v9;
    if ( !v9 )
      v6 = *(int **)v8[0];
    v3 = _SetMenuDefaultItem(v6, a2, a3);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
  UserSessionSwitchLeaveCrit();
  return v3;
}
