/*
 * XREFs of _xxxEnableMenuItem@12 @ 0xBA004
 * Callers:
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     _NtUserEnableMenuItem@12 @ 0x161379 (_NtUserEnableMenuItem@12.c)
 * Callees:
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBE_NXZ @ 0x8F1E2 (--B-$SmartObjStackRef@UtagMENU@@@@QBE_NXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     ?MenuItemState@@YGKABV?$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z @ 0xBA210 (-MenuItemState@@YGKABV-$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 */

int __fastcall xxxEnableMenuItem(int a1, int a2, int a3)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int *v11; // esi
  PKTHREAD v12; // eax
  int v13; // eax
  int v14; // ebx
  void *v15; // eax
  int v16; // ecx
  int v17; // eax
  int ClassStyle; // [esp-4h] [ebp-44h]
  int v21; // [esp+14h] [ebp-2Ch] BYREF
  int *v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h]
  _DWORD *v24; // [esp+20h] [ebp-20h] BYREF
  int v25; // [esp+24h] [ebp-1Ch] BYREF
  int *v26; // [esp+28h] [ebp-18h] BYREF
  int v27; // [esp+2Ch] [ebp-14h] BYREF
  int v28; // [esp+30h] [ebp-10h]
  _DWORD v29[3]; // [esp+34h] [ebp-Ch] BYREF

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v26 = (int *)gSmartObjNullRef;
  v27 = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = &v27;
  v28 = 0;
  v6 = KeGetCurrentThread();
  v7 = W32GetThreadWin32Thread(v6);
  v24 = (_DWORD *)gSmartObjNullRef;
  v25 = *(_DWORD *)(v7 + 840);
  *(_DWORD *)(v7 + 840) = &v25;
  v8 = v28;
  if ( !v28 )
    v8 = *v26;
  v21 = v8;
  v9 = MenuItemState(a3, 3, &v21);
  v28 = 0;
  v10 = v9;
  v23 = v9;
  SmartObjStackRefBase<tagMENU>::operator=(&v26, v21);
  if ( (*(_DWORD *)(*(_DWORD *)(**(_DWORD **)a1 + 20) + 20) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(**(_DWORD **)a1 + 52) )
    {
      if ( a3 != v10 )
      {
        v29[2] = 0;
        if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
        {
          v11 = *(int **)(**(_DWORD **)a1 + 52);
          v22 = v11;
          v12 = KeGetCurrentThread();
          v13 = W32GetThreadWin32Thread(v12);
          v29[0] = *(_DWORD *)(v13 + 228);
          *(_DWORD *)(v13 + 228) = v29;
          v29[1] = v22;
          if ( v22 )
            HMLockObject(v22);
          xxxRedrawTitle(*(struct tagVWPL ***)(**(_DWORD **)a1 + 52), 4096);
          if ( a2 == 61536 && IsWindowDesktopComposed(v11) )
          {
            DirtyVisRgnTrackers(v11);
            if ( v11 )
              v14 = *v11;
            else
              v14 = 0;
            ClassStyle = DwmGetClassStyle(v11);
            v15 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildStyleChange(v15, v14, -26, ClassStyle);
          }
          ThreadUnlock1();
          v10 = v23;
        }
      }
    }
  }
  if ( (a3 & 3) != v10 && SmartObjStackRef<tagMENU>::operator bool(&v26) )
  {
    v16 = v28;
    if ( !v28 )
      v16 = *v26;
    v17 = MNGetPopupFromMenu(v16, 0);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v24, v17);
    if ( *v24 )
      xxxMNUpdateShownMenu(1);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v24);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v26);
  return v10;
}
