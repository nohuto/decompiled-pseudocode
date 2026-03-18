/*
 * XREFs of _NtUserCheckMenuItem@12 @ 0xB9D04
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __CheckMenuItem@12 @ 0xB9DA2 (__CheckMenuItem@12.c)
 */

int __stdcall NtUserCheckMenuItem(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  _DWORD v7[3]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v8[8]; // [esp+10h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  SmartObjStackRefBase<tagMENU>::Init(v7, 0);
  v7[2] = 0;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x3EC);
LABEL_6:
    v5 = -1;
    goto LABEL_5;
  }
  v3 = ValidateHmenu(a1);
  SmartObjStackRefBase<tagMENU>::operator=(v7, v3);
  if ( SmartObjStackRef<tagMENU>::operator==(v7, v4)
    || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v7[0] + 20) + 20) & 0x40) != 0 )
  {
    goto LABEL_6;
  }
  v5 = _CheckMenuItem(a3);
LABEL_5:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v7);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return v5;
}
