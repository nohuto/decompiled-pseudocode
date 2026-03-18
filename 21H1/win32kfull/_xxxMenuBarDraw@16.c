/*
 * XREFs of _xxxMenuBarDraw@16 @ 0x1AA275
 * Callers:
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GetCaptionHeight@4 @ 0x8EDFE (_GetCaptionHeight@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _ThreadLockMenuNoModify@8 @ 0xB75EA (_ThreadLockMenuNoModify@8.c)
 *     _MNIsFlatMenu@0 @ 0x1846E0 (_MNIsFlatMenu@0.c)
 *     ?RecalcDCVisRgn@@YGXPAUHDC__@@@Z @ 0x1A90C1 (-RecalcDCVisRgn@@YGXPAUHDC__@@@Z.c)
 */

int __fastcall xxxMenuBarDraw(_DWORD *a1, HDC a2, int a3, int a4)
{
  int v6; // ecx
  int v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // eax
  int v11; // ecx
  int CaptionHeight; // eax
  int v13; // ecx
  unsigned int v14; // edi
  _DWORD *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // edi
  int v30; // esi
  int v32; // [esp-4h] [ebp-5Ch]
  _DWORD v33[10]; // [esp+10h] [ebp-48h] BYREF
  int v34; // [esp+38h] [ebp-20h] BYREF
  int v35; // [esp+3Ch] [ebp-1Ch]
  int v36; // [esp+40h] [ebp-18h]
  int *v37[2]; // [esp+44h] [ebp-14h] BYREF
  int v38; // [esp+4Ch] [ebp-Ch]
  int v39; // [esp+50h] [ebp-8h]
  int v40; // [esp+54h] [ebp-4h]
  BOOL v41; // [esp+60h] [ebp+8h]

  SmartObjStackRefBase<tagMENU>::Init(v37, 0);
  v32 = a1[23];
  v39 = 0;
  v38 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v37, v32);
  if ( SmartObjStackRef<tagMENU>::operator==(v37, v6) )
  {
    v7 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 8) & 0x40) != 0 && *(_DWORD *)(a1[2] + 236) == _gpqForeground
      || ((CurrentThread = KeGetCurrentThread(),
           ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread),
           *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u)
        ? (v10 = *(_DWORD *)(ThreadWin32Thread + 352))
        : (LOBYTE(v10) = 0),
          (v10 & 0x80u) != 0) )
    {
      *(_DWORD *)(*(_DWORD *)(*v37[0] + 20) + 20) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(*v37[0] + 20) + 20) |= 0x10u;
    }
    v11 = v38;
    if ( !v38 )
      v11 = *v37[0];
    ThreadLockMenuNoModify(v11, &v34);
    CaptionHeight = GetCaptionHeight(a1);
    v13 = a1[5];
    v40 = a4 + CaptionHeight;
    v14 = *(_DWORD *)(v13 + 60) + -2 * a3 - *(_DWORD *)(v13 + 52);
    if ( a1 != *(_DWORD **)(*v37[0] + 52) || !*(_DWORD *)(*v37[0] + 36) || !*(_DWORD *)(*v37[0] + 40) )
      xxxMenuBarCompute(v37, a1, a4 + CaptionHeight, a3, *(_DWORD *)(v13 + 60) + -2 * a3 - *(_DWORD *)(v13 + 52));
    if ( *(_DWORD *)(*v37[0] + 36) <= v14
      && v40 + *(_DWORD *)(*v37[0] + 40) <= *(_DWORD *)(a1[5] + 64) - *(_DWORD *)(a1[5] + 56) - a4 )
    {
      v18 = a3;
    }
    else
    {
      GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      v15 = (_DWORD *)a1[5];
      v39 = 1;
      v16 = v15[13];
      v17 = v16 + v14;
      v18 = a3;
      GreIntersectVisRect(a2, v16 + a3, v15[14], a3 + v17, v15[16] - a4);
      GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    }
    v41 = MNIsFlatMenu();
    v33[0] = v18;
    v19 = *v37[0];
    v33[1] = v40;
    v33[2] = *(_DWORD *)(v19 + 36);
    v20 = *(_DWORD *)(*v37[0] + 40);
    v21 = *(_DWORD *)(*v37[0] + 20);
    v33[3] = v20;
    if ( *(_DWORD *)(v21 + 12) )
    {
      v22 = *(_DWORD *)(*(_DWORD *)(*v37[0] + 20) + 12);
    }
    else if ( v41 )
    {
      v22 = *(_DWORD *)(_gpsi + 4412);
    }
    else
    {
      v22 = *(_DWORD *)(_gpsi + 4308);
    }
    v33[4] = v22;
    v33[5] = v18;
    v33[6] = v40 + *(_DWORD *)(*v37[0] + 40);
    v33[8] = 1;
    v33[7] = *(_DWORD *)(*v37[0] + 36);
    v23 = a1[5];
    if ( (*(_BYTE *)(v23 + 17) & 3) == 0 || (*(_BYTE *)(v23 + 12) & 8) != 0 )
      v24 = *(_DWORD *)(_gpsi + 4316);
    else
      v24 = *(_DWORD *)(_gpsi + 4352);
    v33[9] = v24;
    GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)v33, 2u, v20);
    v25 = a1[5];
    if ( (*(_BYTE *)(v25 + 17) & 3) == 0 || (*(_BYTE *)(v25 + 12) & 8) != 0 )
      v26 = *(_DWORD *)(_gpsi + 4316);
    else
      v26 = *(_DWORD *)(_gpsi + 4352);
    v27 = GreSelectBrush(a2, v26);
    v28 = v38;
    v29 = v27;
    if ( !v38 )
      v28 = *v37[0];
    xxxMenuDraw(a2, v28, 0);
    GreSelectBrush(a2, v29);
    if ( v39 )
      RecalcDCVisRgn(a2);
    v30 = *(_DWORD *)(*v37[0] + 40);
    *(_DWORD *)(*(_DWORD *)(v35 + 20) + 20) &= ~0x200u;
    v7 = v30 + 1;
    ThreadUnlock1();
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v37);
  return v7;
}
