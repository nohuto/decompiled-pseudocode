/*
 * XREFs of _xxxPaintMenuBar@24 @ 0xB5BC0
 * Callers:
 *     _NtUserPaintMenuBar@24 @ 0xB5B14 (_NtUserPaintMenuBar@24.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxSendUAHMenuMessage@16 @ 0xB6938 (_xxxSendUAHMenuMessage@16.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _xxxSendUAHInitMenuMessage@12 @ 0xB7560 (_xxxSendUAHInitMenuMessage@12.c)
 *     _ThreadLockMenuNoModify@8 @ 0xB75EA (_ThreadLockMenuNoModify@8.c)
 */

int __fastcall xxxPaintMenuBar(int a1, HDC a2, int a3, int a4, struct XDCOBJ *a5, char a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v16; // eax
  int v18; // [esp+10h] [ebp-28h]
  int v19; // [esp+10h] [ebp-28h]
  _DWORD v20[2]; // [esp+14h] [ebp-24h] BYREF
  _DWORD *v21; // [esp+1Ch] [ebp-1Ch]
  int v22; // [esp+20h] [ebp-18h] BYREF
  int v23; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  int v25; // [esp+2Ch] [ebp-Ch]
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]

  v6 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v20, 0);
  v21 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v20, *(_DWORD *)(a1 + 92));
  if ( !SmartObjStackRef<tagMENU>::operator==(v20, v8) )
  {
    ThreadLockMenuNoModify();
    v9 = *(_DWORD *)(*(_DWORD *)v20[0] + 20);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v9 + 20) &= ~0x10u;
    else
      *(_DWORD *)(v9 + 20) |= 0x10u;
    v18 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 60) - *(_DWORD *)(*(_DWORD *)(a1 + 20) + 52) - a3 - a4;
    v10 = *(_DWORD *)(*(_DWORD *)v20[0] + 52);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v22 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v22;
    v23 = v10;
    if ( v10 )
      HMLockObject(v10);
    if ( a1 != *(_DWORD *)(*(_DWORD *)v20[0] + 52)
      || !*(_DWORD *)(*(_DWORD *)v20[0] + 36)
      || !*(_DWORD *)(*(_DWORD *)v20[0] + 40) )
    {
      xxxMenuBarCompute(a5, a3, v18);
    }
    if ( gihmodUserApiHook >= 0 && v10 && xxxSendUAHInitMenuMessage(a2) )
    {
      v13 = v21;
      if ( !v21 )
        v13 = *(_DWORD **)v20[0];
      xxxSendUAHMenuMessage(v13, a2);
    }
    ThreadUnlock1();
    if ( v21 )
      v14 = v21;
    else
      v14 = *(_DWORD **)v20[0];
    if ( MNIsUAHMenu(v14) )
    {
      xxxMenuDraw(a2, 0);
    }
    else
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 20) + 12) )
        v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 20) + 12);
      else
        v16 = *(_DWORD *)(_gpsi + 4412);
      v19 = GreSelectBrush(a2, v16);
      NtGdiPatBlt(
        a2,
        a3,
        a5,
        *(_DWORD *)(*(_DWORD *)v20[0] + 36),
        *(_DWORD *)(*(_DWORD *)v20[0] + 40),
        (struct EXFORMOBJ *)0xF00021);
      xxxMenuDraw(a2, 0);
      GreSelectBrush(a2, v19);
    }
    v6 = *(_DWORD *)(*(_DWORD *)v20[0] + 40);
    *(_DWORD *)(*(_DWORD *)(v26 + 20) + 20) &= ~0x200u;
    ThreadUnlock1();
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v20);
  return v6;
}
