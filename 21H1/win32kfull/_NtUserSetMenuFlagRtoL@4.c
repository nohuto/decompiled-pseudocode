/*
 * XREFs of _NtUserSetMenuFlagRtoL@4 @ 0x169950
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

int __stdcall NtUserSetMenuFlagRtoL(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-Ch]
  _BYTE v8[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  SmartObjStackRefBase<tagMENU>::Init(v6, 0);
  v2 = ValidateHmenu(a1);
  v7 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v6, v2);
  if ( !SmartObjStackRef<tagMENU>::operator==(v6, v3) )
  {
    v4 = v7;
    if ( !v7 )
      v4 = *(_DWORD *)v6[0];
    *(_DWORD *)(*(_DWORD *)(v4 + 20) + 20) |= 0x20u;
    v1 = 1;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return v1;
}
