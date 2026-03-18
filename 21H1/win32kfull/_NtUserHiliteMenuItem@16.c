/*
 * XREFs of _NtUserHiliteMenuItem@16 @ 0x165097
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxHiliteMenuItem@16 @ 0x1A6B5B (_xxxHiliteMenuItem@16.c)
 */

int __stdcall NtUserHiliteMenuItem(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-24h] BYREF
  int v11; // [esp+10h] [ebp-20h]
  int v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-18h] BYREF
  int v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  _DWORD v16[2]; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+2Ch] [ebp-4h]

  v4 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v13 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v13;
    v14 = v5;
    HMLockObject(v5);
    SmartObjStackRefBase<tagMENU>::Init(v16, 0);
    v17 = 0;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError((struct _NT_TIB *)0x3EC);
    }
    else
    {
      v6 = ValidateHmenu(a2);
      SmartObjStackRefBase<tagMENU>::operator=(v16, v6);
      if ( !SmartObjStackRef<tagMENU>::operator==(v16, v7)
        && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v16[0] + 20) + 20) & 0x40) == 0 )
      {
        v8 = v17;
        if ( !v17 )
          v8 = *(_DWORD *)v16[0];
        v10 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v10;
        v11 = v8;
        HMLockObject(v8);
        v4 = xxxHiliteMenuItem(a3, a4);
        ThreadUnlock1();
      }
    }
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v16);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
