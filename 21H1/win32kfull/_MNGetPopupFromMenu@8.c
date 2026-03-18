/*
 * XREFs of _MNGetPopupFromMenu@8 @ 0x1EC0C
 * Callers:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315 (-zzzMNFadeSelection@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1AB3D1 (-GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 */

int __fastcall MNGetPopupFromMenu(int a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // esi
  int v7; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int *v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v15 = a1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v13 = (int *)gSmartObjNullRef;
  v6 = 0;
  v14 = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = &v14;
  v7 = *(_DWORD *)(a1 + 52);
  if ( v7 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 328);
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 4) & 4) != 0 )
      {
        if ( a2 )
          *a2 = v9;
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(*(_DWORD *)v9);
        v10 = v15;
        while ( *v13 )
        {
          v11 = *v13;
          if ( *(_DWORD *)(*v13 + 20) == v10 )
          {
            if ( (*(_BYTE *)v11 & 1) == 0 )
            {
              MNAnimate(v9, 0);
              v6 = *v13;
            }
            break;
          }
          if ( !*(_DWORD *)(v11 + 12) )
            break;
          v12 = safe_cast_fnid_to_PMENUWND(*(_DWORD *)(*v13 + 12));
          if ( !v12 )
            break;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(*(_DWORD *)(v12 + 4));
        }
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v13);
  return v6;
}
