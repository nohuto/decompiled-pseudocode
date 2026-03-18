/*
 * XREFs of _xxxGetSysMenuPtr@4 @ 0x31E72
 * Callers:
 *     _xxxMNCanClose@4 @ 0x31A3A (_xxxMNCanClose@4.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxGetSysMenuOffset@4 @ 0x19E62F (_xxxGetSysMenuOffset@4.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxLoadSysDesktopMenu@8 @ 0xCC3A8 (_xxxLoadSysDesktopMenu@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __thiscall xxxGetSysMenuPtr(_DWORD *this)
{
  PKTHREAD CurrentThread; // ebx
  int v3; // esi
  int *ThreadWin32Thread; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int SysDesktopMenu; // eax
  int v9; // esi
  PKTHREAD v10; // ebx
  int v11; // edi
  int *v12; // eax
  _DWORD *v13; // ecx
  int v15; // [esp-4h] [ebp-1Ch]
  int *v16; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h] BYREF
  int v18; // [esp+14h] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v16 = (int *)gSmartObjNullRef;
  v17 = *(_DWORD *)(v3 + 840);
  *(_DWORD *)(v3 + 840) = &v17;
  v5 = this[5];
  v18 = 0;
  if ( (*(_BYTE *)(v5 + 22) & 8) != 0 )
  {
    v6 = this[22];
    if ( v6 == *v16 )
      goto LABEL_33;
    if ( v16 != (int *)gSmartObjNullRef && !--v16[1] )
    {
      if ( *((_BYTE *)v16 + 8) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v16);
    }
    if ( v6 )
    {
      v16 = *(int **)(v6 + 104);
      ++v16[1];
    }
    else
    {
      v16 = (int *)gSmartObjNullRef;
    }
    if ( !v18 )
    {
LABEL_33:
      if ( *v16 )
      {
LABEL_20:
        v9 = *v16;
        goto LABEL_21;
      }
      v15 = *(_DWORD *)(this[3] + 28);
      v18 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v15);
      if ( SmartObjStackRef<tagMENU>::operator==(&v16, v7) && (*(_BYTE *)(_gptiCurrent + 264) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu(this[3] + 28, 16);
        v18 = 0;
        SmartObjStackRefBase<tagMENU>::operator=(SysDesktopMenu);
      }
    }
  }
  else
  {
    SmartObjStackRefBase<tagMENU>::operator=(0);
  }
  v9 = v18;
  if ( !v18 )
    goto LABEL_20;
LABEL_21:
  v10 = KeGetCurrentThread();
  v11 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v12 = (int *)PsGetThreadWin32Thread(v10);
    if ( v12 )
      v11 = *v12;
  }
  if ( v16 != (int *)gSmartObjNullRef && !--v16[1] )
  {
    if ( *((_BYTE *)v16 + 8) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v16);
  }
  v13 = *(_DWORD **)(v11 + 840);
  if ( v13 )
    *(_DWORD *)(v11 + 840) = *v13;
  return v9;
}
