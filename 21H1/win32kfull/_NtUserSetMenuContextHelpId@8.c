/*
 * XREFs of _NtUserSetMenuContextHelpId@8 @ 0x1698C1
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

int __stdcall NtUserSetMenuContextHelpId(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD v7[2]; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  _BYTE v9[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  SmartObjStackRefBase<tagMENU>::Init(v7, 0);
  v3 = ValidateHmenu(a1);
  v8 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v7, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==(v7, v4)
    && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v7[0] + 20) + 20) & 0x40) == 0 )
  {
    v5 = v8;
    if ( !v8 )
      v5 = *(_DWORD *)v7[0];
    v2 = 1;
    *(_DWORD *)(*(_DWORD *)(v5 + 20) + 28) = a2;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v7);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit();
  return v2;
}
