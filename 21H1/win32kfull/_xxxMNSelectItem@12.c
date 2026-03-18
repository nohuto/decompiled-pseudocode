/*
 * XREFs of _xxxMNSelectItem@12 @ 0x19A1F9
 * Callers:
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _MNSetTimerToCloseHierarchy@4 @ 0x1977B8 (_MNSetTimerToCloseHierarchy@4.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 */

int __fastcall xxxMNSelectItem(int **a1, int a2, char *a3)
{
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int *v8; // ecx
  int v9; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // ebx
  PKTHREAD v13; // eax
  int v14; // eax
  PKTHREAD v15; // eax
  int v16; // eax
  PKTHREAD v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  char *v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  PKTHREAD v28; // eax
  int v29; // eax
  PKTHREAD v30; // eax
  int v31; // eax
  PKTHREAD v32; // eax
  int v33; // eax
  _DWORD v35[3]; // [esp+Ch] [ebp-80h] BYREF
  int v36; // [esp+18h] [ebp-74h] BYREF
  int v37; // [esp+1Ch] [ebp-70h]
  int v38; // [esp+20h] [ebp-6Ch]
  _DWORD v39[3]; // [esp+24h] [ebp-68h] BYREF
  _DWORD v40[3]; // [esp+30h] [ebp-5Ch] BYREF
  _DWORD v41[3]; // [esp+3Ch] [ebp-50h] BYREF
  int v42; // [esp+48h] [ebp-44h] BYREF
  int v43; // [esp+4Ch] [ebp-40h]
  int v44; // [esp+50h] [ebp-3Ch]
  int v45; // [esp+54h] [ebp-38h] BYREF
  int v46; // [esp+58h] [ebp-34h]
  int v47; // [esp+5Ch] [ebp-30h]
  _DWORD v48[2]; // [esp+60h] [ebp-2Ch] BYREF
  int v49; // [esp+68h] [ebp-24h]
  _DWORD v50[2]; // [esp+6Ch] [ebp-20h] BYREF
  _DWORD v51[2]; // [esp+74h] [ebp-18h] BYREF
  int v52; // [esp+7Ch] [ebp-10h]
  int v53; // [esp+80h] [ebp-Ch]
  int v54; // [esp+84h] [ebp-8h]
  int v55; // [esp+88h] [ebp-4h]
  int v56; // [esp+94h] [ebp+8h]
  int v57; // [esp+94h] [ebp+8h]

  v54 = a2;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v5 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v48, 0);
  v6 = *a1;
  v49 = 0;
  if ( *(char **)(*v6 + 40) == a3 )
  {
    if ( a3 != (char *)-1 && (unsigned int)a3 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) + 24) )
      v5 = *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 56) + 80 * (_DWORD)a3;
    goto LABEL_57;
  }
  v7 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(**a1 + 16));
  v8 = *a1;
  v55 = v7;
  if ( (*(_DWORD *)*v8 & 0x1000) != 0 && !v7 )
    goto LABEL_57;
  MNAnimate(a2, 0);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_DWORD *)(**a1 + 8), 65534, 0, 1, 0);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  SmartObjStackRefBase<tagMENU>::operator=(v48, *(_DWORD *)(**a1 + 20));
  v9 = v49;
  if ( !v49 )
    v9 = *(_DWORD *)v48[0];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v42 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v42;
  v43 = v9;
  if ( v9 )
    HMLockObject(v9);
  v53 = *(_DWORD *)(**a1 + 4);
  v12 = v53;
  v13 = KeGetCurrentThread();
  v14 = W32GetThreadWin32Thread(v13);
  v45 = *(_DWORD *)(v14 + 228);
  *(_DWORD *)(v14 + 228) = &v45;
  v46 = v12;
  if ( v12 )
    HMLockObject(v12);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && *(_DWORD *)(v55 + 4) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *(_DWORD *)(v55 + 4));
    FindTimer(*(_DWORD *)(*(_DWORD *)v51[0] + 8), 0xFFFF, 0, 1, 0);
    **(_DWORD **)v51[0] &= ~0x4000u;
    if ( (**(_DWORD **)v51[0] & 0x2000) != 0 )
    {
      FindTimer(*(_DWORD *)(*(_DWORD *)v51[0] + 8), 65534, 0, 1, 0);
      **(_DWORD **)v51[0] &= ~0x2000u;
    }
    if ( *(_DWORD *)(*(_DWORD *)v51[0] + 40) != *(_DWORD *)(*(_DWORD *)v51[0] + 44) )
    {
      v40[2] = 0;
      v39[2] = 0;
      SmartObjStackRefBase<tagMENU>::Init(v41, *(_DWORD *)(*(_DWORD *)v51[0] + 20));
      v41[2] = 0;
      v55 = *(_DWORD *)(*(_DWORD *)v51[0] + 4);
      v52 = *(_DWORD *)v41[0];
      v15 = KeGetCurrentThread();
      v16 = W32GetThreadWin32Thread(v15);
      v40[0] = *(_DWORD *)(v16 + 228);
      *(_DWORD *)(v16 + 228) = v40;
      v40[1] = v52;
      if ( v52 )
        HMLockObject(v52);
      v17 = KeGetCurrentThread();
      v18 = W32GetThreadWin32Thread(v17);
      v39[0] = *(_DWORD *)(v18 + 228);
      *(_DWORD *)(v18 + 228) = v39;
      v19 = v55;
      v39[1] = v55;
      if ( v55 )
      {
        HMLockObject(v55);
        v19 = v55;
      }
      if ( *(_DWORD *)(*(_DWORD *)v51[0] + 40) != -1 )
        xxxMNInvertItem(v51, v41, *(_DWORD *)(*(_DWORD *)v51[0] + 40), v19, 0);
      *(_DWORD *)(*(_DWORD *)v51[0] + 40) = *(_DWORD *)(*(_DWORD *)v51[0] + 44);
      xxxMNInvertItem(v51, v41, *(_DWORD *)(*(_DWORD *)v51[0] + 44), v55, 1);
      ThreadUnlock1();
      ThreadUnlock1();
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v41);
    }
    *(_DWORD *)**a1 &= ~0x1000u;
    HMAssignmentLock(*(_DWORD *)(**a1 + 32) + 28, **a1);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51);
  }
  v20 = -4;
  v21 = **a1;
  if ( *(int *)(v21 + 40) >= 0 )
  {
    if ( *(_DWORD *)(v21 + 12) )
    {
      if ( (*(_BYTE *)**a1 & 1) != 0 )
        xxxMNCloseHierarchy(**a1, v54);
      else
        MNSetTimerToCloseHierarchy(a1);
    }
    goto LABEL_36;
  }
  v22 = *(_DWORD *)(v21 + 40);
  if ( v22 == -3 || v22 == -4 )
  {
    FindTimer(*(_DWORD *)(**a1 + 8), *(_DWORD *)(**a1 + 40), 0, 1, 0);
LABEL_36:
    xxxMNInvertItem(a1, v48, *(_DWORD *)(**a1 + 40), v53, 0);
  }
  v23 = a3;
  *(_DWORD *)(**a1 + 40) = a3;
  if ( a3 != (char *)-1 )
  {
    v24 = v54;
    *(_DWORD *)(v54 + 4) &= 0xFFFFAFFF;
    if ( (*(_DWORD *)(v24 + 4) & 8) != 0 )
    {
      xxxMNDoScroll((int)a1, a3, 1);
      v23 = a3;
    }
    v5 = xxxMNInvertItem(a1, v48, v23, v53, 1);
    ThreadUnlock1();
    ThreadUnlock1();
    goto LABEL_57;
  }
  if ( *(_DWORD *)(**a1 + 4) == *(_DWORD *)(**a1 + 8) )
    v20 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
  xxxWindowEvent(0x8005u, *(struct tagEVENTHOOK **)(**a1 + 8), v20, 0, 0);
  ThreadUnlock1();
  ThreadUnlock1();
  if ( *(_DWORD *)(**a1 + 16) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, 0);
    if ( (*(_BYTE *)**a1 & 2) != 0 && *(_DWORD *)(**a1 + 16) == *(_DWORD *)(**a1 + 4) )
    {
      v25 = *(_DWORD *)(**a1 + 32);
    }
    else
    {
      v26 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(**a1 + 16));
      if ( !v26 || (v25 = *(_DWORD *)(v26 + 4)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50);
        goto LABEL_57;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v50, v25);
    if ( *(_DWORD *)v50[0] && *(_DWORD *)(*(_DWORD *)v50[0] + 4) )
    {
      v27 = *(_DWORD *)(*(_DWORD *)v50[0] + 4);
      v28 = KeGetCurrentThread();
      v29 = W32GetThreadWin32Thread(v28);
      v45 = *(_DWORD *)(v29 + 228);
      *(_DWORD *)(v29 + 228) = &v45;
      v46 = v27;
      HMLockObject(v27);
      v56 = *(_DWORD *)(*(_DWORD *)v50[0] + 8);
      v30 = KeGetCurrentThread();
      v31 = W32GetThreadWin32Thread(v30);
      v36 = *(_DWORD *)(v31 + 228);
      *(_DWORD *)(v31 + 228) = &v36;
      v37 = v56;
      if ( v56 )
        HMLockObject(v56);
      v57 = *(_DWORD *)(*(_DWORD *)v50[0] + 20);
      v32 = KeGetCurrentThread();
      v33 = W32GetThreadWin32Thread(v32);
      v42 = *(_DWORD *)(v33 + 228);
      *(_DWORD *)(v33 + 228) = &v42;
      v43 = v57;
      if ( v57 )
        HMLockObject(v57);
      SmartObjStackRefBase<tagMENU>::Init(v35, *(_DWORD *)(*(_DWORD *)v50[0] + 20));
      v35[2] = 0;
      xxxSendMenuSelect(v35, *(_DWORD *)(*(_DWORD *)v50[0] + 40), v54);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v35);
      ThreadUnlock1();
      ThreadUnlock1();
      ThreadUnlock1();
    }
    goto LABEL_56;
  }
LABEL_57:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v48);
  return v5;
}
