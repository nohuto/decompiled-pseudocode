/*
 * XREFs of _NtUserSetMenu@12 @ 0xC097C
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxSetMenu@12 @ 0xC0AC0 (_xxxSetMenu@12.c)
 */

int __stdcall NtUserSetMenu(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+8h] [ebp-24h] BYREF
  int v12; // [esp+Ch] [ebp-20h]
  int v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h] BYREF
  int v15; // [esp+18h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-10h]
  _DWORD v17[2]; // [esp+20h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp-4h]

  v3 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v14 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v14;
      v15 = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v17, 0);
      if ( a2 )
      {
        v6 = ValidateHmenu(a2);
        v18 = 0;
        SmartObjStackRefBase<tagMENU>::operator=(v17, v6);
        if ( SmartObjStackRef<tagMENU>::operator==(v17, v7) )
        {
LABEL_13:
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v17);
          ThreadUnlock1();
          goto LABEL_14;
        }
      }
      else
      {
        v18 = 0;
        SmartObjStackRefBase<tagMENU>::operator=(v17, 0);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==(v17, v8)
        && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v17[0] + 20) + 20) & 1) != 0 )
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      else
      {
        v9 = v18;
        if ( !v18 )
          v9 = *(_DWORD *)v17[0];
        v11 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v11;
        v12 = v9;
        if ( v9 )
          HMLockObject(v9);
        v3 = xxxSetMenu(a3);
        ThreadUnlock1();
      }
      goto LABEL_13;
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v3;
}
