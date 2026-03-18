/*
 * XREFs of ?GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1AB3D1
 * Callers:
 *     _xxxGetMenuItemRect@16 @ 0x1AB926 (_xxxGetMenuItemRect@16.c)
 *     _xxxMenuItemFromPoint@16 @ 0x1ABB72 (_xxxMenuItemFromPoint@16.c)
 * Callees:
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 */

int __fastcall GetMenuPwnd(int a1, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  v3 = a1;
  if ( (*(_BYTE *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 20) & 1) != 0
    && (!a1 || (*(_WORD *)(*(_DWORD *)(a1 + 20) + 30) & 0x3FFF) != 0x29C) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0);
    v4 = *(_DWORD *)(a2 + 8);
    if ( !v4 )
      v4 = **(_DWORD **)a2;
    v5 = MNGetPopupFromMenu(v4, 0);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, v5);
    if ( *(_DWORD *)v7[0] )
      v3 = *(_DWORD *)(*(_DWORD *)v7[0] + 8);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
  }
  return v3;
}
