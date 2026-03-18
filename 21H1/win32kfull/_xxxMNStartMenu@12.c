/*
 * XREFs of _xxxMNStartMenu@12 @ 0x1849EF
 * Callers:
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _ThreadLockMenuNoModify@8 @ 0xB75EA (_ThreadLockMenuNoModify@8.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     _MNPositionSysMenu@8 @ 0xC069A (_MNPositionSysMenu@8.c)
 *     ?xxxGetInitMenuParam@@YGPAUtagMENU@@PAUtagWND@@PAH@Z @ 0x184349 (-xxxGetInitMenuParam@@YGPAUtagMENU@@PAUtagWND@@PAH@Z.c)
 *     _LockPopupMenu@12 @ 0x197533 (_LockPopupMenu@12.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 *     _xxxMNSetCapture@8 @ 0x19A754 (_xxxMNSetCapture@8.c)
 *     _xxxClientLoadOLE@0 @ 0x1A75CC (_xxxClientLoadOLE@0.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 */

BOOL __fastcall xxxMNStartMenu(int *a1, int a2, int a3)
{
  BOOL v4; // ebx
  _DWORD *v5; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // edi
  unsigned int v9; // ecx
  struct tagMENU *InitMenuParam; // eax
  int v11; // ecx
  _DWORD *SysMenu; // eax
  struct tagMENU *v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int *v16; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // eax
  int v21; // [esp+10h] [ebp-3Ch] BYREF
  int v22; // [esp+14h] [ebp-38h]
  int v23; // [esp+18h] [ebp-34h]
  _DWORD v24[3]; // [esp+1Ch] [ebp-30h] BYREF
  int v25; // [esp+28h] [ebp-24h] BYREF
  _DWORD *v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+30h] [ebp-1Ch]
  _DWORD v28[2]; // [esp+34h] [ebp-18h] BYREF
  unsigned int *v29; // [esp+3Ch] [ebp-10h]
  int v30; // [esp+40h] [ebp-Ch]
  int v31; // [esp+44h] [ebp-8h] BYREF
  _DWORD *v32; // [esp+48h] [ebp-4h]

  v30 = a2;
  v4 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v28, 0);
  v29 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( (**(_DWORD **)*a1 & 0x8000) != 0 || !*(_DWORD *)(*(_DWORD *)*a1 + 4) )
    goto LABEL_43;
  v32 = *(_DWORD **)(*(_DWORD *)*a1 + 4);
  v5 = v32;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v25 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v25;
  v26 = v5;
  if ( v5 )
    HMLockObject(v5);
  v8 = v30;
  *(_DWORD *)(v30 + 4) |= 1u;
  *(_DWORD *)(v8 + 16) = a3;
  v9 = *(_DWORD *)(v8 + 4) & 0xFFFFFFBF | ((_GetKeyState(1) & 0x8000) != 0 ? 0x40 : 0);
  *(_DWORD *)(v8 + 4) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 3)) & 8;
  xxxMNSetCapture(a1, v8);
  xxxSendMessage(v32, *v32, 2);
  if ( (**(_BYTE **)*a1 & 1) != 0 )
  {
    v31 = 0;
    InitMenuParam = xxxGetInitMenuParam(v32, &v31);
    SmartObjStackRefBase<tagMENU>::operator=(v28, (int)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==(v28, v11) )
    {
      *(_DWORD *)(v8 + 4) &= ~1u;
      xxxMNReleaseCapture(v8);
      ThreadUnlock1();
      goto LABEL_43;
    }
    LockPopupMenu(v28);
    **(_DWORD **)*a1 = (v31 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v31 )
    {
      SysMenu = xxxGetSysMenu(v32, 0);
      v29 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v28, (int)SysMenu);
      LockPopupMenu(v28);
    }
  }
  *(_DWORD *)(v8 + 4) ^= (*(_DWORD *)(v8 + 4) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_BYTE **)*a1 & 8) != 0 && (**(_BYTE **)*a1 & 4) != 0 )
      v13 = xxxGetInitMenuParam(v32, 0);
    else
      v13 = *(struct tagMENU **)(*(_DWORD *)*a1 + 20);
    v29 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v28, (int)v13);
    if ( SmartObjStackRef<tagMENU>::operator==(v28, v14) )
    {
      v15 = 0;
    }
    else
    {
      v16 = v29;
      if ( !v29 )
        v16 = *(unsigned int **)v28[0];
      v15 = *v16;
    }
    xxxSendMessage(v32, v15, 0);
  }
  if ( (**(_BYTE **)*a1 & 8) == 0 )
  {
    v17 = *a1;
    if ( (**(_BYTE **)*a1 & 4) != 0 )
    {
      v18 = *(_DWORD *)(*(_DWORD *)v17 + 20);
    }
    else
    {
      if ( (**(_BYTE **)v17 & 1) == 0 || !*(_DWORD *)(*(_DWORD *)*a1 + 20) )
        goto LABEL_28;
      ThreadLockMenuNoModify(*(_DWORD *)(*(_DWORD *)*a1 + 20), &v21);
      SmartObjStackRefBase<tagMENU>::Init(v24, *(_DWORD *)(*(_DWORD *)*a1 + 20));
      v24[2] = 0;
      xxxMNRecomputeBarIfNeeded(v32, v24);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v24);
      *(_DWORD *)(*(_DWORD *)(v22 + 20) + 20) &= ~0x200u;
      ThreadUnlock1();
      v18 = *(_DWORD *)(*(_DWORD *)*a1 + 24);
    }
    MNPositionSysMenu(v32, v18);
  }
LABEL_28:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_DWORD *)(*(_DWORD *)*a1 + 20) )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a1 + 20) + 20) + 20) & 0x40000000) != 0 )
      *(_DWORD *)(v8 + 4) |= 0x100u;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a1 + 20) + 20) + 20) & 0x20000000) != 0
      && (int)xxxClientLoadOLE() >= 0 )
    {
      *(_DWORD *)(v8 + 4) |= 0x400u;
    }
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a1 + 20) + 20) + 20) & 0x10000000) != 0 )
      *(_DWORD *)(v8 + 4) |= 0x800u;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a1 + 20) + 20) + 20) & 0x8000000) != 0 )
      *(_DWORD *)(v8 + 4) |= (unsigned int)&loc_20000;
  }
  if ( (**(_BYTE **)*a1 & 4) != 0 )
    v19 = -1;
  else
    v19 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (struct tagEVENTHOOK *)v32, v19, 0, 0);
  ThreadUnlock1();
  v4 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_43:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v28);
  return v4;
}
