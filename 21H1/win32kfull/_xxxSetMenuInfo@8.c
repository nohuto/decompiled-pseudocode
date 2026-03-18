/*
 * XREFs of _xxxSetMenuInfo@8 @ 0x1CE94
 * Callers:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     _xxxLoadSysMenu@4 @ 0x1D24C (_xxxLoadSysMenu@4.c)
 *     _NtUserThunkedMenuInfo@8 @ 0xC1340 (_NtUserThunkedMenuInfo@8.c)
 * Callees:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 */

int __fastcall xxxSetMenuInfo(_DWORD **a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // rax
  _DWORD *v10; // ecx
  int v11; // edx
  _DWORD *v12; // ecx
  int v13; // eax
  int v15; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  int v18; // [esp+10h] [ebp-30h]
  int v19; // [esp+14h] [ebp-2Ch]
  int v20; // [esp+18h] [ebp-28h]
  int v21; // [esp+1Ch] [ebp-24h]
  _DWORD *v22; // [esp+20h] [ebp-20h] BYREF
  int v23; // [esp+28h] [ebp-18h] BYREF
  int v24; // [esp+2Ch] [ebp-14h]
  int v25; // [esp+30h] [ebp-10h]
  _BYTE v26[8]; // [esp+34h] [ebp-Ch] BYREF
  int v27; // [esp+3Ch] [ebp-4h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(0);
  v19 = 0;
  v20 = 0;
  v23 = 0;
  v21 = 1;
  v24 = 0;
  v25 = 0;
  v4 = a2[1];
  if ( (v4 & 0x10) != 0 )
  {
    v19 = 1;
    *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) ^= (a2[2] ^ *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20)) & 0xFC000000;
    v4 = a2[1];
  }
  if ( (v4 & 1) != 0 )
  {
    v19 = 1;
    *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 32) = a2[3];
    v4 = a2[1];
  }
  if ( (v4 & 2) != 0 )
  {
    v20 = 1;
    *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 12) = a2[4];
    if ( (*(_BYTE *)(**a1 + 80) & 3) != 0 )
      v21 = 5;
  }
  v5 = a2[1];
  if ( (v5 & 4) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 28) = a2[5];
    v5 = a2[1];
  }
  if ( (v5 & 8) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 8) = a2[6];
    v5 = a2[1];
  }
  if ( v5 < 0 )
  {
    v18 = 0;
    v6 = a1[2];
    if ( !v6 )
      v6 = (_DWORD *)**a1;
    v7 = MNGetpItemFromIndex(v6, 0);
    v8 = v7;
    if ( *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) > HIDWORD(v7) )
    {
      HIDWORD(v9) = 0;
      do
      {
        if ( !v8 )
          break;
        if ( *(_DWORD *)(v8 + 8) )
        {
          SmartObjStackRefBase<tagMENU>::Init(*(_DWORD *)(v8 + 8));
          v27 = 0;
          v15 = *(_DWORD *)(v8 + 8);
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v23 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v23;
          v24 = v15;
          if ( v15 )
            HMLockObject(v15);
          xxxSetMenuInfo(v26, a2);
          ThreadUnlock1();
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v26);
          HIDWORD(v9) = v18;
        }
        v10 = a1[2];
        v11 = HIDWORD(v9) + 1;
        v18 = v11;
        if ( !v10 )
          v10 = (_DWORD *)**a1;
        v9 = MNGetpItemFromIndex(v10, v11);
        v8 = v9;
      }
      while ( HIDWORD(v9) < *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) );
    }
  }
  if ( v19 )
  {
    *(_DWORD *)(**a1 + 36) = 0;
    *(_DWORD *)(**a1 + 40) = 0;
  }
  else if ( !v20 )
  {
    goto LABEL_26;
  }
  v12 = a1[2];
  if ( !v12 )
    v12 = (_DWORD *)**a1;
  v13 = MNGetPopupFromMenu(v12, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13);
  if ( *v22 )
    xxxMNUpdateShownMenu(v21);
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v22);
  return 1;
}
