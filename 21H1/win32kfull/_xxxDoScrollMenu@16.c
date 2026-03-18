/*
 * XREFs of _xxxDoScrollMenu@16 @ 0x1A370F
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _GetAppCompatFlags@4 @ 0xA6D98 (_GetAppCompatFlags@4.c)
 *     _GetWndSBDisableFlags@8 @ 0xC1ECC (_GetWndSBDisableFlags@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC (_safe_cast_fnid_to_PSBWND@4.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z @ 0x1A3018 (-xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z.c)
 *     _SBCtlSetup@4 @ 0x1A3664 (_SBCtlSetup@4.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 */

_DWORD *__fastcall xxxDoScrollMenu(_DWORD *a1, int *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  struct tagMENU *ScrollMenu; // eax
  int v8; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // [esp+0h] [ebp-88h]
  int v13; // [esp+0h] [ebp-88h]
  int v14; // [esp+4h] [ebp-84h]
  int v15; // [esp+4h] [ebp-84h]
  int *v17; // [esp+14h] [ebp-74h]
  int v18; // [esp+14h] [ebp-74h]
  int v19; // [esp+14h] [ebp-74h]
  _DWORD v21[2]; // [esp+28h] [ebp-60h] BYREF
  int v22; // [esp+30h] [ebp-58h]
  int v23; // [esp+34h] [ebp-54h] BYREF
  int v24; // [esp+38h] [ebp-50h]
  int v25; // [esp+3Ch] [ebp-4Ch]

  v4 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v21, 0);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v17 = (int *)safe_cast_fnid_to_PSBWND(a2);
  if ( GetAppCompatFlags(0) >= 0 )
  {
    if ( a2 )
    {
      if ( !v17 )
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v21);
      SBCtlSetup(v17);
      v5 = v17[2];
      v6 = (int)a1;
    }
    else
    {
      CalcSBStuff(a1, a3);
      LOBYTE(v5) = GetWndSBDisableFlags((int)a1, a3);
      v6 = (int)a1;
    }
    if ( (v5 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(v6, a3);
      SmartObjStackRefBase<tagMENU>::operator=(v21, (int)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==(v21, v8) )
      {
        v18 = v22;
        if ( !v22 )
          v18 = *(_DWORD *)v21[0];
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v23 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v23;
        v24 = v18;
        HMLockObject(v18);
        v19 = xxxTrackPopupMenuEx(v21, 386, (__int16)a4, SHIWORD(a4), a1, 0);
        ThreadUnlock1();
        if ( v19 )
        {
          if ( (unsigned __int8)v19 == 4 )
          {
            if ( !a2 )
              v4 = (a3 != 0) + 6;
            xxxSBTrackInit(v4, 2);
          }
          else
          {
            xxxDoScroll(a1, a2, (struct tagWND *)(unsigned __int8)v19, 0, a3, v12, v14);
            xxxDoScroll(a1, a2, (struct tagWND *)8, 0, a3, v13, v15);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v21);
}
