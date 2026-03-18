/*
 * XREFs of xxxDoScrollMenu @ 0x1C02451EC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     CalcSBStuff @ 0x1C005DF24 (CalcSBStuff.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetAppCompatFlags @ 0x1C01090E0 (GetAppCompatFlags.c)
 *     GetWndSBDisableFlags @ 0x1C014D02C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D40E8 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02445A0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244858 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C024511C (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C0245720 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // r13d
  int v15; // r12d
  __int64 v16; // r8
  char WndSBDisableFlags; // al
  __int64 v18; // rdx
  struct tagMENU *ScrollMenu; // rax
  __int64 v20; // r12
  __int64 ThreadWin32Thread; // rax
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+30h] [rbp-79h]
  unsigned __int16 v28; // [rsp+34h] [rbp-75h]
  _QWORD v29[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v30; // [rsp+48h] [rbp-61h]
  __int128 v31; // [rsp+50h] [rbp-59h] BYREF
  __int64 v32; // [rsp+60h] [rbp-49h]
  int v33[16]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v29, 0LL);
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v11 = safe_cast_fnid_to_PSBWND((__int64)a2, v8, v9, v10);
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    if ( a2 )
    {
      if ( !v11 )
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v29);
      SBCtlSetup(v11);
      v12 = *((_QWORD *)a2 + 5);
      v13 = *(_DWORD *)(v11 + 12);
      v14 = (__int16)a4;
      v15 = SWORD1(a4) - *(_DWORD *)(v12 + 92);
      v27 = (__int16)a4 - *(_DWORD *)(v12 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, v33, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v16);
      v18 = *((_QWORD *)a1 + 5);
      LOBYTE(v13) = WndSBDisableFlags;
      v14 = (__int16)a4;
      v15 = SWORD1(a4) - *(_DWORD *)(v18 + 92);
      v27 = (__int16)a4 - *(_DWORD *)(v18 + 88);
    }
    v28 = v15;
    if ( (v13 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      SmartObjStackRefBase<tagMENU>::operator=(v29, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v29) )
      {
        v20 = v30;
        if ( !v30 )
          v20 = *(_QWORD *)v29[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v31;
        *((_QWORD *)&v31 + 1) = v20;
        HMLockObject(v20);
        v22 = xxxTrackPopupMenuEx(v29, 386LL, v14, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v24, v23, v25);
        if ( v22 )
        {
          if ( (unsigned __int8)v22 == 4 )
          {
            if ( a2 )
              a4 = (unsigned __int16)v27 | (unsigned __int64)(v28 << 16);
            else
              a2 = a1;
            xxxSBTrackInit(a2, a4);
          }
          else
          {
            xxxDoScroll((struct _LARGE_STRING **)a2, a1, (unsigned __int8)v22, 0, a3);
            xxxDoScroll((struct _LARGE_STRING **)a2, a1, 8u, 0, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v29);
}
