/*
 * XREFs of xxxDoScrollMenu @ 0x1C024648C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0027538 (CalcSBStuff.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0108250 (GetAppCompatFlags.c)
 *     GetWndSBDisableFlags @ 0x1C014A7FC (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D4E90 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0245840 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0245AF8 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C02463BC (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // r13d
  int v12; // r12d
  __int64 v13; // r8
  char WndSBDisableFlags; // al
  __int64 v15; // rdx
  struct tagMENU *ScrollMenu; // rax
  __int64 v17; // r12
  __int64 ThreadWin32Thread; // rax
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+30h] [rbp-79h]
  unsigned __int16 v25; // [rsp+34h] [rbp-75h]
  _QWORD v26[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v27; // [rsp+48h] [rbp-61h]
  __int128 v28; // [rsp+50h] [rbp-59h] BYREF
  __int64 v29; // [rsp+60h] [rbp-49h]
  _BYTE v30[64]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
      SBCtlSetup(v8);
      v9 = *((_QWORD *)a2 + 5);
      v10 = *(_DWORD *)(v8 + 12);
      v11 = (__int16)a4;
      v12 = SWORD1(a4) - *(_DWORD *)(v9 + 92);
      v24 = (__int16)a4 - *(_DWORD *)(v9 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v30, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v13);
      v15 = *((_QWORD *)a1 + 5);
      LOBYTE(v10) = WndSBDisableFlags;
      v11 = (__int16)a4;
      v12 = SWORD1(a4) - *(_DWORD *)(v15 + 92);
      v24 = (__int16)a4 - *(_DWORD *)(v15 + 88);
    }
    v25 = v12;
    if ( (v10 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      SmartObjStackRefBase<tagMENU>::operator=(v26, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
      {
        v17 = v27;
        if ( !v27 )
          v17 = *(_QWORD *)v26[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v28 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v28;
        *((_QWORD *)&v28 + 1) = v17;
        HMLockObject(v17);
        v19 = xxxTrackPopupMenuEx(v26, 386LL, v11, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v21, v20, v22);
        if ( v19 )
        {
          if ( (unsigned __int8)v19 == 4 )
          {
            if ( a2 )
              a4 = (unsigned __int16)v24 | (unsigned __int64)(v25 << 16);
            else
              a2 = a1;
            xxxSBTrackInit(a2, a4);
          }
          else
          {
            xxxDoScroll((struct _LARGE_STRING **)a2, a1, (unsigned __int8)v19, 0, a3);
            xxxDoScroll((struct _LARGE_STRING **)a2, a1, 8u, 0, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
}
