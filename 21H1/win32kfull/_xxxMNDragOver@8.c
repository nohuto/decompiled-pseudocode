/*
 * XREFs of _xxxMNDragOver@8 @ 0x1A7669
 * Callers:
 *     _NtUserMNDragOver@8 @ 0x1662FB (_NtUserMNDragOver@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _GetMenuStateWindow@4 @ 0x1974A5 (_GetMenuStateWindow@4.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 */

int __fastcall xxxMNDragOver(unsigned __int16 *a1, _DWORD *a2)
{
  int v2; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *MenuStateWindow; // [esp+Ch] [ebp-1Ch]
  _DWORD v17[2]; // [esp+14h] [ebp-14h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v2 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v4 = *(_DWORD *)(_gptiCurrent + 328);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( (v5 & 0x400) != 0 )
    {
      v6 = *(_DWORD **)(_gptiCurrent + 328);
      *(_DWORD *)(v4 + 4) = v5 | 0x8000;
      MenuStateWindow = (_DWORD *)GetMenuStateWindow(v6);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v4 + 28);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v18 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v18;
        v19 = MenuStateWindow;
        HMLockObject(MenuStateWindow);
        xxxCallHandleMenuMessages((int *)v4, MenuStateWindow, 160, 0, *a1 | (a1[2] << 16));
        ThreadUnlock1();
        if ( IsMFMWFPWindow(*(void **)(v4 + 56)) )
        {
          v10 = safe_cast_fnid_to_PMENUWND(v9);
          if ( v10 )
          {
            v11 = *(_DWORD *)(v10 + 4);
            if ( v11 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, v11);
              if ( *(_DWORD *)(*(_DWORD *)v17[0] + 20) )
                v12 = **(_DWORD **)(*(_DWORD *)v17[0] + 20);
              else
                v12 = 0;
              a2[1] = v12;
              a2[2] = *(_DWORD *)(v4 + 60);
              if ( *(_DWORD *)(*(_DWORD *)v17[0] + 4) )
                v2 = **(_DWORD **)(*(_DWORD *)v17[0] + 4);
              a2[3] = v2;
              v13 = *(_DWORD *)(v4 + 64);
              *a2 = v13;
              if ( (v13 & 2) != 0 )
                ++a2[2];
              v2 = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal(v4, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17);
  return v2;
}
