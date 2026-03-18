/*
 * XREFs of _xxxMNKeyDown@12 @ 0x198B89
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     __GetSubMenu@8 @ 0x8F1F4 (__GetSubMenu@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?GetMenuInheritedContextHelpId@@YGKABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1965EF (-GetMenuInheritedContextHelpId@@YGKABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 *     _LockPopupMenu@12 @ 0x197533 (_LockPopupMenu@12.c)
 *     _MNGetpItem@8 @ 0x1975F9 (_MNGetpItem@8.c)
 *     _UnlockPopupMenu@8 @ 0x197868 (_UnlockPopupMenu@8.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNSetCapture@8 @ 0x19A754 (_xxxMNSetCapture@8.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 *     _xxxSendHelpMessage@20 @ 0x1ACB94 (_xxxSendHelpMessage@20.c)
 *     _MNFindItemInColumn@16 @ 0x1ACBF1 (_MNFindItemInColumn@16.c)
 *     _MNFindNextValidItem@16 @ 0x1ACCB8 (_MNFindNextValidItem@16.c)
 */

_DWORD *__fastcall xxxMNKeyDown(int **a1, int *a2, unsigned int a3)
{
  int *v4; // esi
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // esi
  PKTHREAD v9; // eax
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v18; // esi
  int v19; // edi
  int MenuInheritedContextHelpId; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  PKTHREAD v25; // eax
  int v26; // eax
  int *v27; // eax
  bool v28; // zf
  int *v29; // eax
  int **SubMenu; // eax
  PKTHREAD v31; // eax
  int v32; // eax
  int v33; // eax
  PKTHREAD v34; // eax
  int v35; // eax
  PKTHREAD v36; // eax
  int v37; // eax
  _DWORD *v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int *v43; // eax
  int *v44; // edx
  int *v45; // eax
  int *v46; // eax
  int v47; // edi
  int ValidItem; // [esp-4h] [ebp-9Ch]
  int v50; // [esp+0h] [ebp-98h]
  int v51; // [esp+4h] [ebp-94h]
  int v52; // [esp+10h] [ebp-88h]
  int v54; // [esp+14h] [ebp-84h]
  int v55; // [esp+18h] [ebp-80h]
  int v56; // [esp+18h] [ebp-80h]
  _DWORD *v57; // [esp+18h] [ebp-80h]
  int v58; // [esp+1Ch] [ebp-7Ch]
  int v59; // [esp+20h] [ebp-78h] BYREF
  int v60; // [esp+24h] [ebp-74h]
  int v61; // [esp+28h] [ebp-70h]
  unsigned int v62; // [esp+2Ch] [ebp-6Ch]
  _DWORD v63[2]; // [esp+30h] [ebp-68h] BYREF
  int *v64; // [esp+38h] [ebp-60h] BYREF
  int v65; // [esp+3Ch] [ebp-5Ch]
  unsigned int v66; // [esp+40h] [ebp-58h]
  int v67; // [esp+44h] [ebp-54h]
  int *v68; // [esp+48h] [ebp-50h]
  _DWORD v69[2]; // [esp+4Ch] [ebp-4Ch] BYREF
  _DWORD v70[2]; // [esp+54h] [ebp-44h] BYREF
  _DWORD v71[2]; // [esp+5Ch] [ebp-3Ch] BYREF
  int v72; // [esp+64h] [ebp-34h] BYREF
  int v73; // [esp+68h] [ebp-30h] BYREF
  _DWORD *v74; // [esp+6Ch] [ebp-2Ch]
  _DWORD v75[3]; // [esp+70h] [ebp-28h] BYREF
  _DWORD v76[7]; // [esp+7Ch] [ebp-1Ch] BYREF

  v58 = 0;
  v59 = 0;
  v4 = a2;
  v68 = a2;
  v60 = 0;
  v61 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v63, 0);
  v5 = v4[1];
  v6 = a3;
  v62 = a3;
  if ( (v5 & 8) != 0 && a3 != 112 )
  {
    if ( (v5 & 0x80u) != 0 && a3 == 27 )
      v4[1] = v5 | 0x2000;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
  }
  if ( a3 > 0x26 )
  {
    if ( a3 == 39 )
      goto LABEL_12;
    if ( a3 != 40 )
    {
      if ( a3 == 112 )
      {
        v13 = MNGetpItem((int)a1, *(_DWORD *)(**a1 + 40));
        v14 = v13;
        if ( !*(_DWORD *)(**a1 + 4) || !v13 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
        v15 = *(_DWORD *)(**a1 + 4);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v59 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v59;
        v60 = v15;
        HMLockObject(v15);
        v19 = *(_DWORD *)(*(_DWORD *)v14 + 8);
        v18 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_DWORD *)(v18 + 4), v19, **(_DWORD **)(v18 + 20), MenuInheritedContextHelpId);
        goto LABEL_52;
      }
      if ( a3 != 121 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
      goto LABEL_46;
    }
LABEL_53:
    if ( (*(_BYTE *)**a1 & 1) == 0 )
    {
      ValidItem = MNFindNextValidItem(2 * (a3 != 38) - 1, 0);
      xxxMNSelectItem(ValidItem);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
    }
    goto LABEL_109;
  }
  switch ( a3 )
  {
    case 0x26u:
      goto LABEL_53;
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 40) < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) + 24) )
      {
        v11 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 56) + 80 * *(_DWORD *)(**a1 + 40));
        v12 = *(_DWORD *)(*v11 + 4) & 3;
        if ( v11[2] && !v12 )
          goto LABEL_109;
        if ( !v12 )
        {
          xxxMNDismissWithNotify((int)v4, (int)a1, (int)v11, *(struct tagWND **)(**a1 + 40), 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
        }
      }
      goto LABEL_41;
    case 0x12u:
LABEL_46:
      if ( (v5 & 0x100) == 0 )
      {
        xxxMNCancel(v4, 0, 0, 0);
        if ( a3 == 18 )
          v4[1] &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
    case 0x1Bu:
      if ( (*(_BYTE *)**a1 & 1) == 0
        && **a1 != *(_DWORD *)(**a1 + 32)
        && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 32) + 4) + 20) + 23) & 0x20) == 0 )
      {
        if ( (*(_BYTE *)**a1 & 2) != 0 && *(_DWORD *)(**a1 + 16) == *(_DWORD *)(**a1 + 4) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v69, *(_DWORD *)(**a1 + 32));
          **(_DWORD **)v69[0] &= ~0x400u;
          if ( (v4[1] & 0x100) != 0 )
            xxxMNCancel(v4, 0, 0, 0);
          else
            xxxMNCloseHierarchy(*(_DWORD *)v69[0], (int)v4);
          v7 = v69;
LABEL_32:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
        }
        v8 = *(_DWORD *)(**a1 + 16);
        v9 = KeGetCurrentThread();
        v10 = W32GetThreadWin32Thread(v9);
        v59 = *(_DWORD *)(v10 + 228);
        *(_DWORD *)(v10 + 228) = &v59;
        v60 = v8;
        if ( v8 )
          HMLockObject(v8);
        xxxSendMessage(*(void **)(**a1 + 16), 0, 0);
LABEL_52:
        ThreadUnlock1();
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
      }
LABEL_41:
      xxxMNCancel(v4, 0, 0, 0);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
  }
  if ( a3 != 37 )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
LABEL_12:
  v55 = (*(_DWORD *)**a1 >> 22) & 1;
  v67 = (*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 18) >> 6) & 1;
  if ( v67 != v55 )
    v6 = 2 * (a3 == 37) + 37;
  if ( (*(_BYTE *)**a1 & 1) == 0
    && v6 == 39
    && !*(_DWORD *)(**a1 + 12)
    && (xxxMNOpenHierarchy(a1, v4) == -1 || (*(_BYTE *)**a1 & 0x20) != 0) )
  {
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
  }
  if ( *(_DWORD *)(**a1 + 12) )
  {
    v58 = 1;
    if ( v6 == 37 && (*(_BYTE *)**a1 & 1) == 0 )
    {
      xxxMNCloseHierarchy(**a1, (int)v4);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
    }
  }
  else if ( (*(_DWORD *)**a1 & 0x400) != 0 )
  {
    v58 = 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v63, **a1);
  if ( (*(_BYTE *)**a1 & 2) != 0 && **a1 == *(_DWORD *)(**a1 + 32) )
    v21 = MNFindItemInColumn(2 * (v6 != 37) - 1, 1);
  else
    v21 = MNFindItemInColumn(2 * (v6 != 37) - 1, 0);
  v22 = v21;
  v54 = v21;
  if ( v21 != -1 )
    goto LABEL_70;
  if ( (*(_BYTE *)**a1 & 2) != 0 && *(_DWORD *)(**a1 + 16) == *(_DWORD *)(**a1 + 4) )
  {
    if ( v67 != v55 )
      v6 = 2 * (v6 == 37) + 37;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v70, *(_DWORD *)(**a1 + 32));
    xxxMNKeyDown(v6);
    v7 = v70;
    goto LABEL_32;
  }
  v23 = **a1;
  if ( v23 != *(_DWORD *)(v23 + 32) )
  {
    v24 = *(_DWORD *)(v23 + 16);
    v25 = KeGetCurrentThread();
    v26 = W32GetThreadWin32Thread(v25);
    v59 = *(_DWORD *)(v26 + 228);
    *(_DWORD *)(v26 + 228) = &v59;
    v60 = v24;
    if ( v24 )
      HMLockObject(v24);
    xxxSendMessage(*(void **)(**a1 + 16), v62, 0);
    goto LABEL_52;
  }
  if ( (*(_BYTE *)v23 & 1) == 0 )
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
  v22 = -1;
LABEL_70:
  if ( (*(_BYTE *)**a1 & 1) == 0 )
  {
    if ( v22 != -1 )
      xxxMNSelectItem(v22);
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
  }
  if ( v22 == -1 )
  {
    if ( !*(_DWORD *)(**a1 + 4) || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 4) + 20) + 22) & 8) == 0 )
      goto LABEL_113;
    v72 = 0;
    v75[0] = 0;
    v65 = 0;
    v27 = *a1;
    v66 = 0;
    v28 = (*(_BYTE *)*v27 & 4) == 0;
    v29 = *a1;
    if ( v28 )
      SubMenu = *(int ***)(*v29 + 20);
    else
      SubMenu = (int **)_GetSubMenu(*(_DWORD **)(*v29 + 20));
    if ( SubMenu )
      v64 = *SubMenu;
    else
      v64 = 0;
    v56 = *(_DWORD *)(**a1 + 4);
    v31 = KeGetCurrentThread();
    v32 = W32GetThreadWin32Thread(v31);
    v59 = *(_DWORD *)(v32 + 228);
    *(_DWORD *)(v32 + 228) = &v59;
    v60 = v56;
    if ( v56 )
      HMLockObject(v56);
    xxxSendMessage(*(void **)(**a1 + 4), v62, (int)&v64);
    ThreadUnlock1();
    v33 = HMValidateHandleNoSecure(v66, 1);
    v57 = (_DWORD *)v33;
    if ( v33 && *(_DWORD *)(v33 + 8) == _gptiCurrent && (v52 = HMValidateHandleNoRip(v65, 2)) != 0 )
    {
      v34 = KeGetCurrentThread();
      v35 = W32GetThreadWin32Thread(v34);
      v71[0] = *(_DWORD *)(v35 + 228);
      *(_DWORD *)(v35 + 228) = v71;
      v71[1] = v52;
      HMLockObject(v52);
      v36 = KeGetCurrentThread();
      v37 = W32GetThreadWin32Thread(v36);
      v73 = *(_DWORD *)(v37 + 228);
      *(_DWORD *)(v37 + 228) = &v73;
      v74 = v57;
      HMLockObject(v57);
      if ( (*(_BYTE *)(v57[5] + 23) & 0x20) != 0 )
        v58 = 1;
      xxxMNSelectItem(-1);
      v4[1] |= 2u;
      UnlockPopupMenu((int)a1, (int *)(**a1 + 24));
      *(_DWORD *)**a1 &= ~0x80u;
      v38 = (_DWORD *)v57[22];
      if ( v38 )
        _GetSubMenu(v38);
      UnlockPopupMenu((int)a1, (int *)(**a1 + 20));
      HMAssignmentLock(v40, v39);
      HMAssignmentLock(v42, v41);
      SmartObjStackRefBase<tagMENU>::Init(&v72, v50);
      v43 = *a1;
      v74 = 0;
      LockPopupMenu(a1, (int *)(*v43 + 20), &v72);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v72);
      v4 = v64;
      if ( (v64[1] & 0x100) == 0 )
      {
        v44 = v64;
        *(_DWORD *)(*(_DWORD *)(v51 + 236) + 284) &= ~0x100000u;
        xxxMNSetCapture(a1, v44);
      }
      if ( (*(_BYTE *)(v57[5] + 23) & 0x40) == 0 && *(_DWORD *)(**a1 + 20) )
      {
        if ( v57[23] == *(_DWORD *)(**a1 + 20) )
        {
          SmartObjStackRefBase<tagMENU>::Init(v75, v57[22]);
          v45 = *a1;
          v75[2] = 0;
          LockPopupMenu(a1, (int *)(*v45 + 24), v75);
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v75);
          v4[1] &= ~2u;
        }
        else
        {
          SmartObjStackRefBase<tagMENU>::Init(v76, v57[23]);
          v46 = *a1;
          v76[2] = 0;
          LockPopupMenu(a1, (int *)(*v46 + 24), v76);
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v76);
        }
      }
      ThreadUnlock1();
      ThreadUnlock1();
      *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * v4[1])) & 4;
      v47 = 0;
    }
    else
    {
LABEL_113:
      if ( !xxxMNSwitchToAlternateMenu(a1, v4) )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
      v47 = MNFindNextValidItem(2 * (v6 == 39) - 1, 0);
      if ( v47 == -1 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
    }
  }
  else
  {
    v47 = v54;
  }
  if ( *(_DWORD *)(*(_DWORD *)v63[0] + 12) )
    xxxMNCloseHierarchy(*(_DWORD *)v63[0], (int)v4);
  xxxMNSelectItem(v47);
  if ( v58 )
LABEL_109:
    xxxMNOpenHierarchy(a1, v4);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63);
}
