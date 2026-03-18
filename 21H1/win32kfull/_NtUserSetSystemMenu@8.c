/*
 * XREFs of _NtUserSetSystemMenu@8 @ 0xC0574
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxSetSystemMenu@8 @ 0xC0654 (_xxxSetSystemMenu@8.c)
 */

int __stdcall NtUserSetSystemMenu(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v8; // [esp+8h] [ebp-24h] BYREF
  int v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h] BYREF
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  _DWORD v14[2]; // [esp+20h] [ebp-Ch] BYREF
  int v15; // [esp+28h] [ebp-4h]
  int v16; // [esp+34h] [ebp+8h]

  v8 = 0;
  v2 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v16 = v3;
  if ( v3 )
  {
    v11 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v11;
    v12 = v3;
    HMLockObject(v3);
    SmartObjStackRefBase<tagMENU>::Init(v14, 0);
    v4 = ValidateHmenu(a2);
    v15 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v14, v4);
    if ( !SmartObjStackRef<tagMENU>::operator==(v14, v5) )
    {
      v6 = v15;
      if ( !v15 )
        v6 = *(_DWORD *)v14[0];
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v6;
      HMLockObject(v6);
      v2 = xxxSetSystemMenu(v16, v14);
      ThreadUnlock1();
    }
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v14);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
