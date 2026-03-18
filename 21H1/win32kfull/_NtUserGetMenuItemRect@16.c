/*
 * XREFs of _NtUserGetMenuItemRect@16 @ 0x1637F2
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxGetMenuItemRect@16 @ 0x1AB926 (_xxxGetMenuItemRect@16.c)
 */

int __stdcall NtUserGetMenuItemRect(int a1, int a2, int a3, ULONG a4)
{
  int v4; // edi
  int MenuItemRect; // ebx
  int v6; // eax
  int v7; // ecx
  void (*v8)(void); // esi
  int v9; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v11; // eax
  unsigned int v12; // esi
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  int v17; // [esp+14h] [ebp-58h] BYREF
  int v18; // [esp+18h] [ebp-54h]
  int v19; // [esp+1Ch] [ebp-50h]
  int v20; // [esp+20h] [ebp-4Ch] BYREF
  int v21; // [esp+24h] [ebp-48h]
  int v22; // [esp+28h] [ebp-44h]
  _DWORD v23[2]; // [esp+30h] [ebp-3Ch] BYREF
  int v24; // [esp+38h] [ebp-34h]
  ULONG v25; // [esp+3Ch] [ebp-30h]
  int v26; // [esp+40h] [ebp-2Ch] BYREF
  int v27; // [esp+44h] [ebp-28h]
  int v28; // [esp+48h] [ebp-24h]
  int v29; // [esp+4Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v25 = a4;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
    {
      MenuItemRect = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v4 = 0;
  }
  v20 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v20;
  v21 = v4;
  if ( v4 )
    HMLockObject(v4);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23);
  v6 = ValidateHmenu(a2);
  v24 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v23, v6);
  if ( SmartObjStackRef<tagMENU>::operator==(v23, v7) )
  {
    MenuItemRect = 0;
    v8 = (void (*)(void))ThreadUnlock1;
  }
  else
  {
    v9 = v24;
    if ( !v24 )
      v9 = *(_DWORD *)v23[0];
    v17 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v17;
    v18 = v9;
    HMLockObject(v9);
    MenuItemRect = xxxGetMenuItemRect(a3, &v26);
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
      {
        v11 = KeGetCurrentThread();
        if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 260) + 148) & 0x20) == 0 )
        {
          v12 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 184);
          if ( (((v12 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
            || ((*(_DWORD *)(*(_DWORD *)(v4 + 20) + 184) & 0xF) != 2
             || (*(_DWORD *)(*(_DWORD *)(v4 + 20) + 184) & 0x20000000) == 0
              ? (v13 = 0)
              : (v13 = 1),
                (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
              ? (v14 = 0)
              : (v14 = 1),
                v13 != v14) )
          {
            TransformRectBetweenCoordinateSpaces(&v26, &v26, 0, v4);
          }
        }
      }
    }
    ms_exc.registration.TryLevel = 0;
    v15 = (_DWORD *)_MmUserProbeAddress;
    if ( v25 < _MmUserProbeAddress )
      v15 = (_DWORD *)v25;
    *v15 = v26;
    v15[1] = v27;
    v15[2] = v28;
    v15[3] = v29;
    ms_exc.registration.TryLevel = -2;
    v8 = (void (*)(void))ThreadUnlock1;
    ThreadUnlock1();
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v23);
  v8();
LABEL_29:
  UserSessionSwitchLeaveCrit();
  return MenuItemRect;
}
