/*
 * XREFs of _xxxGetSystemMenu@8 @ 0x8EF56
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserGetSystemMenu@8 @ 0x8EEDA (_NtUserGetSystemMenu@8.c)
 * Callees:
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _xxxLoadSysMenu@4 @ 0x1D24C (_xxxLoadSysMenu@4.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBE_NXZ @ 0x8F1E2 (--B-$SmartObjStackRef@UtagMENU@@@@QBE_NXZ.c)
 *     __GetSubMenu@8 @ 0x8F1F4 (__GetSubMenu@8.c)
 *     _GetpwndNotifypMenuState@4 @ 0x8F366 (_GetpwndNotifypMenuState@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2 (-LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     ?UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z @ 0xAAF60 (-UnlockWndMenuWorker@@YGPAXPAUtagWND@@_N@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 */

int __fastcall xxxGetSystemMenu(int a1, int a2)
{
  int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  void *v8; // eax
  int v9; // eax
  _DWORD *SysMenu; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int SubMenu; // eax
  int v17; // edx
  int v18; // ecx
  int v20; // [esp-4h] [ebp-24h]
  int v21; // [esp-4h] [ebp-24h]
  int v22; // [esp-4h] [ebp-24h]
  struct tagWND *v23; // [esp+0h] [ebp-20h]
  BOOL v24[2]; // [esp+4h] [ebp-1Ch] BYREF
  _DWORD v25[2]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD v26[2]; // [esp+14h] [ebp-Ch] BYREF
  int v27; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  SmartObjStackRefBase<tagMENU>::Init(0);
  v20 = *(_DWORD *)(a1 + 88);
  v27 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v20);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v26)
      && *(_DWORD *)(*(_DWORD *)v26[0] + 52)
      && IsWindowDesktopComposed(*(_DWORD *)(*(_DWORD *)v26[0] + 52))
      && (DwmGetClassStyle(*(_DWORD *)(*(_DWORD *)v26[0] + 52)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(_DWORD *)(*(_DWORD *)v26[0] + 52));
      if ( *(_DWORD *)(*(_DWORD *)v26[0] + 52) )
        v7 = **(_DWORD **)(*(_DWORD *)v26[0] + 52);
      else
        v7 = 0;
      v21 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 52) + 76) + 4) + 8);
      v8 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v8, v7, -26, v21);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==(v26, v6)
      && *(char *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 20) >= 0
      && UnlockWndMenuWorker(v23, v24[0]) )
    {
      v9 = v27;
      if ( !v27 )
        v9 = *(_DWORD *)v26[0];
      _DestroyMenu(v9);
    }
  }
  else if ( (SmartObjStackRef<tagMENU>::operator==(v26, v5) || *(char *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 20) < 0)
         && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 22) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(0);
    SysMenu = xxxLoadSysMenu(*(_DWORD *)(a1 + 88) != 0 ? 48 : 16);
    v27 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(SysMenu);
    if ( SmartObjStackRef<tagMENU>::operator==(v26, v11) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25);
      goto LABEL_40;
    }
    LockWndMenuWorker(v26);
    v22 = *(_DWORD *)(a1 + 88);
    v27 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v22);
    v12 = (int *)GetpwndNotifypMenuState(a1);
    if ( v12 )
      v13 = *v12;
    else
      v13 = 0;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13);
    if ( *(_DWORD *)v25[0] && (**(_BYTE **)v25[0] & 8) == 0 && *(_DWORD *)(*(_DWORD *)v25[0] + 8) == a1 )
    {
      v15 = v27;
      if ( (**(_BYTE **)v25[0] & 4) != 0 )
      {
        if ( !v27 )
          v15 = *(_DWORD *)v26[0];
      }
      else if ( !v27 )
      {
        v15 = *(_DWORD *)v26[0];
      }
      HMAssignmentLock(v15, v14);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24);
  }
  if ( *(_DWORD *)(a1 + 88) )
  {
    SubMenu = _GetSubMenu();
    v27 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(SubMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v26) )
    {
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 20) |= 0x100u;
      HMAssignmentLock(v18, v17);
    }
    v3 = v26[0];
    if ( !v26[0] )
      v3 = *(_DWORD *)v25[0];
  }
LABEL_40:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v25);
  return v3;
}
