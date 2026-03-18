/*
 * XREFs of _xxxMNCloseHierarchy@8 @ 0x1981C8
 * Callers:
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0 (-xxxActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D (-xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 */

_DWORD *__stdcall xxxMNCloseHierarchy(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // eax
  int v7; // esi
  PKTHREAD v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // edi
  PKTHREAD v12; // eax
  int v13; // eax
  _DWORD *v14; // esi
  PKTHREAD v15; // eax
  int v16; // eax
  PKTHREAD v17; // eax
  int v18; // eax
  int v20; // [esp+Ch] [ebp-3Ch]
  _DWORD v21[2]; // [esp+10h] [ebp-38h] BYREF
  int v22; // [esp+18h] [ebp-30h] BYREF
  int v23; // [esp+1Ch] [ebp-2Ch]
  int v24; // [esp+20h] [ebp-28h]
  int v25; // [esp+24h] [ebp-24h] BYREF
  _DWORD *v26; // [esp+28h] [ebp-20h]
  int v27; // [esp+2Ch] [ebp-1Ch]
  int v28; // [esp+30h] [ebp-18h] BYREF
  int v29; // [esp+34h] [ebp-14h]
  int v30; // [esp+38h] [ebp-10h]
  _DWORD v31[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v25 = 0;
  v26 = 0;
  v27 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, a1);
  v2 = a2;
  MNAnimate(a2, 0);
  if ( (**(_BYTE **)v21[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v21[0] & 0x4000) != 0 )
    {
      FindTimer(*(_DWORD *)(*(_DWORD *)v21[0] + 8), 0xFFFF, 0, 1, 0);
      **(_DWORD **)v21[0] &= ~0x4000u;
    }
    v3 = *(_DWORD **)(*(_DWORD *)v21[0] + 12);
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v25 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v25;
      v26 = v3;
      HMLockObject(v3);
      xxxSendMessage(v3, 0, 0);
      v6 = *(_DWORD *)(a2 + 4);
      if ( (v6 & 0x100) != 0 && (v6 & 4) != 0 && (**(_BYTE **)v21[0] & 1) == 0 )
      {
        v7 = *(_DWORD *)(*(_DWORD *)v21[0] + 8);
        v8 = KeGetCurrentThread();
        v9 = W32GetThreadWin32Thread(v8);
        v22 = *(_DWORD *)(v9 + 228);
        *(_DWORD *)(v9 + 228) = &v22;
        v23 = v7;
        HMLockObject(v7);
        xxxActivateWindow(*(void **)(*(_DWORD *)v21[0] + 8));
        ThreadUnlock1();
        v2 = a2;
      }
      xxxWindowEvent(7u, (struct tagEVENTHOOK *)v3, 0xFFFFFFFC, 0, 0);
      if ( ThreadUnlock1() )
      {
        if ( !xxxDestroyWindow((struct tagVWPL **)v3) )
        {
          v10 = (int *)safe_cast_fnid_to_PMENUWND(v3);
          if ( v10 )
            xxxMNDestroyHandler(v10);
        }
      }
      HMAssignmentUnlock(*(_DWORD *)v21[0] + 12);
      **(_DWORD **)v21[0] &= ~0x20u;
    }
    if ( (**(_BYTE **)v21[0] & 1) != 0 )
      HMAssignmentUnlock(*(_DWORD *)v21[0] + 28);
    else
      HMAssignmentLock(*(_DWORD *)(*(_DWORD *)v21[0] + 32) + 28, *(_DWORD *)v21[0]);
    if ( (*(_BYTE *)(v2 + 4) & 4) != 0 && *(_DWORD *)(*(_DWORD *)v21[0] + 40) != -1 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v21[0] + 32) + 4);
      if ( v11 )
      {
        v12 = KeGetCurrentThread();
        v13 = W32GetThreadWin32Thread(v12);
        v22 = *(_DWORD *)(v13 + 228);
        *(_DWORD *)(v13 + 228) = &v22;
        v23 = v11;
        HMLockObject(v11);
        v14 = *(_DWORD **)(*(_DWORD *)v21[0] + 8);
        v15 = KeGetCurrentThread();
        v16 = W32GetThreadWin32Thread(v15);
        v25 = *(_DWORD *)(v16 + 228);
        *(_DWORD *)(v16 + 228) = &v25;
        v26 = v14;
        HMLockObject(v14);
        v20 = *(_DWORD *)(*(_DWORD *)v21[0] + 20);
        v17 = KeGetCurrentThread();
        v18 = W32GetThreadWin32Thread(v17);
        v28 = *(_DWORD *)(v18 + 228);
        *(_DWORD *)(v18 + 228) = &v28;
        v29 = v20;
        if ( v20 )
          HMLockObject(v20);
        SmartObjStackRefBase<tagMENU>::Init(v31, *(_DWORD *)(*(_DWORD *)v21[0] + 20));
        v31[2] = 0;
        xxxSendMenuSelect(v31, *(_DWORD *)(*(_DWORD *)v21[0] + 40), a2);
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v31);
        ThreadUnlock1();
        ThreadUnlock1();
        ThreadUnlock1();
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v21);
}
