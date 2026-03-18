/*
 * XREFs of _xxxMNMouseMove@12 @ 0x199408
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _TrackMouseEvent@4 @ 0x9A9BE (_TrackMouseEvent@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z @ 0x19699A (-MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x196F0C (-xxxMNHideNextHierarchy@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 */

_DWORD *__fastcall xxxMNMouseMove(int **a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  char v11; // al
  _DWORD *v12; // esi
  PKTHREAD v13; // eax
  int v14; // eax
  int v16; // [esp+10h] [ebp-2Ch] BYREF
  int v17; // [esp+14h] [ebp-28h]
  int v18; // [esp+18h] [ebp-24h]
  int v19; // [esp+1Ch] [ebp-20h]
  int v20; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD *v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+28h] [ebp-14h]
  int *v23[2]; // [esp+2Ch] [ebp-10h] BYREF
  char *v24; // [esp+34h] [ebp-8h] BYREF

  v24 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, **a1);
  if ( *v23[0] == *(_DWORD *)(*v23[0] + 32) && __PAIR64__(SHIWORD(a3), (__int16)a3) != *((_QWORD *)a2 + 1) )
  {
    a2[2] = (__int16)a3;
    a2[3] = SHIWORD(a3);
    v4 = (_DWORD *)xxxMNFindWindowFromPoint(v23, (int *)&v24, a3);
    if ( IsMFMWFPWindow(v4) )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v20 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v20;
      v21 = v4;
      if ( v4 )
        HMLockObject(v4);
    }
    if ( (a2[1] & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(v24);
    if ( a2[4] != 1 )
    {
LABEL_14:
      if ( v4 == (_DWORD *)-5 )
      {
        if ( (a2[1] & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v23, a2);
LABEL_18:
          xxxMNButtonDown((int *)v23, (int)a2, v24, 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
        }
      }
      else
      {
        if ( v4 == (_DWORD *)-1 )
          goto LABEL_18;
        if ( v4 )
        {
          v7 = safe_cast_fnid_to_PMENUWND(v4);
          if ( !IsWindowBeingDestroyed(v8) && v7 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v23, *(_DWORD *)(v7 + 4));
            v9 = a2[1];
            if ( (v9 & 0x100) != 0 && (v9 & 0x8000) == 0 && (**(_DWORD **)v23[0] & 0x100000) == 0 )
            {
              v16 = 0;
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v10 = *v4;
              v17 = 2;
              v18 = v10;
              TrackMouseEvent(&v16);
              **(_DWORD **)v23[0] |= 0x100000u;
              xxxSendMessage(v4, *v4, 2);
            }
            v11 = xxxSendMessage(v4, (unsigned int)v24, 0);
            if ( (v11 & 0x10) != 0 && (v11 & 3) == 0 && !xxxSendMessage(v4, 0, 0) && *(_DWORD *)(v7 + 4) == *v23[0] )
              xxxMNHideNextHierarchy((int *)v23);
          }
LABEL_35:
          ThreadUnlock1();
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
        }
      }
      if ( !*(_DWORD *)(*v23[0] + 28) )
      {
        xxxMNSelectItem(-1);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
      }
      v12 = *(_DWORD **)(*v23[0] + 28);
      v13 = KeGetCurrentThread();
      v14 = W32GetThreadWin32Thread(v13);
      v20 = *(_DWORD *)(v14 + 228);
      *(_DWORD *)(v14 + 228) = &v20;
      v21 = v12;
      if ( v12 )
        HMLockObject(v12);
      xxxSendMessage(v12, 0xFFFFFFFF, 0);
      MNSetTimerToAutoDismiss((int)a2, (unsigned int)v12);
      goto LABEL_35;
    }
    if ( v4
      && (v4 != (_DWORD *)-1
       || !*(_DWORD *)(*v23[0] + 4)
       || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*v23[0] + 4) + 20) + 23) & 0x20) == 0) )
    {
      a2[4] = -1;
      goto LABEL_14;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
}
