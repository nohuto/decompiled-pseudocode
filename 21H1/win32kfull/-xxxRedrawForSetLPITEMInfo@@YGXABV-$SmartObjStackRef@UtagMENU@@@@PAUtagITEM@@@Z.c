/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04
 * Callers:
 *     _xxxSetMenuItemInfo@20 @ 0x1DCEA (_xxxSetMenuItemInfo@20.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 * Callees:
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 */

int __fastcall xxxRedrawForSetLPITEMInfo(_DWORD **a1, int a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  void *v10; // eax
  int ClassStyle; // [esp-4h] [ebp-1Ch]
  _DWORD *v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v13 = (_DWORD *)gSmartObjNullRef;
  v14 = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = &v14;
  v6 = a1[2];
  if ( !v6 )
    v6 = (_DWORD *)**a1;
  v7 = MNGetPopupFromMenu(v6, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7);
  v8 = 0;
  if ( !*v13 )
    goto LABEL_17;
  xxxMNUpdateShownMenu(1);
  v9 = a1[2];
  if ( !v9 )
    v9 = (_DWORD *)**a1;
  if ( MNGetpItemIndex(v9, a2) != -1 )
  {
LABEL_17:
    if ( (*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) & 0x100) != 0
      && *(_DWORD *)(*(_DWORD *)a2 + 8) == 61536
      && *(_DWORD *)(**a1 + 52)
      && IsWindowDesktopComposed(*(_DWORD *)(**a1 + 52)) )
    {
      DirtyVisRgnTrackers(*(_DWORD *)(**a1 + 52));
      if ( *(_DWORD *)(**a1 + 52) )
        v8 = **(_DWORD **)(**a1 + 52);
      ClassStyle = DwmGetClassStyle(*(_DWORD *)(**a1 + 52));
      v10 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v10, v8, -26, ClassStyle);
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v13);
}
