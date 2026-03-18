/*
 * XREFs of _xxxEndMenuLoop@8 @ 0x195235
 * Callers:
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 */

_DWORD *__stdcall xxxEndMenuLoop(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  char v9; // bl
  PKTHREAD v10; // eax
  int v11; // eax
  _DWORD v13[2]; // [esp+10h] [ebp-20h] BYREF
  _DWORD v14[3]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v15[3]; // [esp+24h] [ebp-Ch] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, a2);
  if ( (**(_BYTE **)v13[0] & 8) != 0 )
  {
    if ( ((unsigned int)&loc_80000 & **(_DWORD **)v13[0]) == 0 )
      xxxMNCancel(0, 0);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 4);
    if ( (v2 & 0x20) != 0 )
    {
      v14[2] = 0;
      v3 = *(_DWORD *)(*(_DWORD *)v13[0] + 4);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v14[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v14;
      v14[1] = v3;
      if ( v3 )
        HMLockObject(v3);
      xxxDrawMenuBarUnderlines(*(_DWORD *)(*(_DWORD *)v13[0] + 4), 0);
      ThreadUnlock1();
      v2 = *(_DWORD *)(a1 + 4);
    }
    if ( (v2 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x100) != 0 && *(_DWORD *)(*(_DWORD *)v13[0] + 4) )
  {
    v6 = *(_DWORD *)(*(_DWORD *)v13[0] + 4);
    v7 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 236);
    if ( v7 == _gpqForeground && *(_DWORD *)(v7 + 64) == v6 )
    {
      v8 = 1;
      v9 = 1;
    }
    else
    {
      v8 = 0;
      v9 = 2;
    }
    v15[2] = 0;
    if ( ((*(unsigned __int8 *)(*(_DWORD *)(v6 + 20) + 8) >> 6) & 1) != v8 )
    {
      v10 = KeGetCurrentThread();
      v11 = W32GetThreadWin32Thread(v10);
      v15[0] = *(_DWORD *)(v11 + 228);
      *(_DWORD *)(v11 + 228) = v15;
      v15[1] = v6;
      HMLockObject(v6);
      xxxDWP_DoNCActivate((struct tagVWPL **)v6, v9, 1);
      ThreadUnlock1();
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13);
}
