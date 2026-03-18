/*
 * XREFs of _xxxHandleMenuMessages@12 @ 0x195390
 * Callers:
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsPointerPrimary@8 @ 0x15BB2A (_IsPointerPrimary@8.c)
 *     ?AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z @ 0x19515D (-AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z.c)
 *     ?xxxMNRemoveMessage@@YGHII@Z @ 0x1951DC (-xxxMNRemoveMessage@@YGHII@Z.c)
 *     _GetMenuStateWindow@4 @ 0x1974A5 (_GetMenuStateWindow@4.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _LockMFMWFPWindow@8 @ 0x197508 (_LockMFMWFPWindow@8.c)
 *     _UnlockMFMWFPWindow@4 @ 0x19784F (_UnlockMFMWFPWindow@4.c)
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNButtonUp@16 @ 0x197A96 (_xxxMNButtonUp@16.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 */

int __fastcall xxxHandleMenuMessages(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // edi
  unsigned int v6; // ecx
  _DWORD *v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  PKTHREAD v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // esi
  int v35; // ecx
  int v36; // eax
  int MenuStateWindow; // eax
  int v38; // eax
  PKTHREAD v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  int v47; // ecx
  void *v48; // ecx
  PKTHREAD v49; // eax
  int v50; // eax
  int v51; // ebx
  PKTHREAD v52; // eax
  int v53; // eax
  int v54; // esi
  bool v55; // zf
  int v56; // eax
  int v57; // esi
  PKTHREAD v58; // eax
  int v59; // eax
  int v60; // esi
  void *v61; // ecx
  int v63; // [esp+14h] [ebp-54h]
  unsigned int v64; // [esp+18h] [ebp-50h]
  int v65; // [esp+18h] [ebp-50h]
  int v66; // [esp+18h] [ebp-50h]
  void *v67; // [esp+18h] [ebp-50h]
  int v68; // [esp+1Ch] [ebp-4Ch] BYREF
  int v69; // [esp+20h] [ebp-48h]
  _DWORD *v70; // [esp+24h] [ebp-44h]
  _DWORD v71[2]; // [esp+28h] [ebp-40h] BYREF
  int v72; // [esp+30h] [ebp-38h] BYREF
  int v73; // [esp+34h] [ebp-34h]
  int v74; // [esp+38h] [ebp-30h]
  int v75; // [esp+3Ch] [ebp-2Ch] BYREF
  int v76; // [esp+40h] [ebp-28h]
  int v77; // [esp+44h] [ebp-24h]
  _DWORD v78[3]; // [esp+48h] [ebp-20h] BYREF
  _DWORD v79[4]; // [esp+54h] [ebp-14h] BYREF

  v75 = 0;
  v70 = a1;
  v76 = 0;
  v77 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v4 = a3;
  if ( !*(_DWORD *)(**(_DWORD **)a3 + 20) )
    return 0;
  v6 = a1[2];
  v7 = a2;
  v69 = a1[3];
  v68 = v69;
  v8 = a1[1];
  v64 = v6;
  if ( v8 > 0x105 )
  {
    if ( v8 > 0x203 )
    {
      v41 = v8 - 516;
      if ( !v41 )
      {
LABEL_12:
        if ( (***(_BYTE ***)a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_140:
        a2[4] = -1;
        AdjustMouseCoordinates(*(_DWORD **)(**(_DWORD **)a3 + 8), (__int16 *)&v68);
        if ( xxxMNFindWindowFromPoint(v68) )
        {
          v55 = (a2[1] & 0x100) == 0;
LABEL_142:
          if ( v55 )
            xxxMNRemoveMessage((struct tagMSG *)v70[1], 0);
          return 1;
        }
LABEL_84:
        xxxMNCancel(0, 0);
        return 1;
      }
      v42 = v41 - 1;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 60;
          if ( (!v44 || v44 == 4) && IsPointerPrimary(_gptiCurrent, v6) && !xxxMNFindWindowFromPoint(v69) )
            xxxMNCancel(0, 0);
          return 0;
        }
        goto LABEL_140;
      }
      goto LABEL_96;
    }
    if ( v8 == 515 )
      goto LABEL_77;
    v28 = v8 - 262;
    if ( v28 )
    {
      v29 = v28 - 18;
      if ( !v29 )
        return 1;
      v30 = v29 - 232;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_13;
        if ( v31 != 1 )
          return 0;
        goto LABEL_97;
      }
LABEL_66:
      v32 = a2[1];
      v65 = v32;
      if ( (v32 & 0x400) != 0 && (v32 & 8) != 0 && (v32 & 0xC0) == 0 && a2[11] )
      {
        v33 = a2[9];
        v34 = a2[10];
        v35 = *(_DWORD *)(_gpsi + 1772);
        v36 = *(_DWORD *)(_gpsi + 1768);
        v79[1] = v34 - v35;
        v79[0] = v33 - v36;
        v79[2] = v36 + v33;
        v79[3] = v35 + v34;
        v7 = a2;
        if ( !PtInRect(v79, (__int16)v69, SHIWORD(v69)) )
        {
          MenuStateWindow = GetMenuStateWindow(a2);
          if ( MenuStateWindow )
          {
            a2[1] = v65 | 0x80;
            _PostMessage(MenuStateWindow, 500, 0, 0);
          }
        }
        v4 = a3;
      }
      xxxMNMouseMove(v4, v7, v69);
      return 1;
    }
    goto LABEL_75;
  }
  if ( v8 == 261 )
  {
    if ( v6 == 18 || v6 == 121 )
      return 1;
    goto LABEL_56;
  }
  if ( v8 > 0xA5 )
  {
    v19 = v8 - 166;
    if ( !v19 )
      goto LABEL_140;
    v20 = v19 - 90;
    if ( !v20 )
      goto LABEL_31;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_56;
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 != 2 )
        return 0;
LABEL_31:
      v23 = a2[1];
      if ( (v23 & 8) != 0 && v6 != 112 )
      {
        if ( (v23 & 0x80u) == 0 || v6 != 27 )
          return 1;
        v24 = v23 | 0x2000;
        goto LABEL_36;
      }
      a2[4] = 1;
      if ( v6 > 0x1B )
      {
        if ( v6 < 0x25 || v6 > 0x28 && v6 != 112 && v6 != 121 )
          goto LABEL_56;
      }
      else if ( v6 != 27 && v6 != 3 )
      {
        if ( v6 != 9 )
        {
          if ( v6 != 13 && v6 != 18 )
            goto LABEL_56;
          goto LABEL_51;
        }
        if ( (***(_BYTE ***)a3 & 1) != 0 && !*(_DWORD *)(**(_DWORD **)a3 + 28) )
          goto LABEL_84;
LABEL_56:
        if ( (a2[1] & 0x100) == 0 )
          xxxTranslateMessage((int)v70, 0);
        return 1;
      }
LABEL_51:
      if ( !*(_DWORD *)(**(_DWORD **)a3 + 28) )
      {
        xxxMNKeyDown(v6);
        return 1;
      }
LABEL_52:
      v25 = *(_DWORD *)(**(_DWORD **)a3 + 28);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v72 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v72;
      v73 = v25;
      HMLockObject(v25);
      xxxSendMessage(*(void **)(**(_DWORD **)a3 + 28), v64, 0);
LABEL_139:
      ThreadUnlock1();
      return 1;
    }
LABEL_75:
    if ( !*(_DWORD *)(**(_DWORD **)a3 + 28) )
    {
      xxxMNChar(v6);
      return 1;
    }
    goto LABEL_52;
  }
  if ( v8 == 165 )
  {
LABEL_96:
    if ( (***(_BYTE ***)a3 & 0x40) == 0 )
    {
      if ( (a2[1] & 8) == 0 )
      {
        if ( a1[1] == 517 && (***(_DWORD ***)a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v71, 0);
          v56 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(**(_DWORD **)a3 + 28));
          if ( v56 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v71, *(_DWORD *)(v56 + 4));
            if ( *(_DWORD *)v71[0] )
            {
              if ( *(int *)(*(_DWORD *)v71[0] + 40) >= 0 && *(_DWORD *)(*(_DWORD *)v71[0] + 4) )
              {
                v78[2] = 0;
                v57 = *(_DWORD *)(*(_DWORD *)v71[0] + 4);
                v58 = KeGetCurrentThread();
                v59 = W32GetThreadWin32Thread(v58);
                v78[0] = *(_DWORD *)(v59 + 228);
                *(_DWORD *)(v59 + 228) = v78;
                v78[1] = v57;
                HMLockObject(v57);
                v60 = 0;
                if ( *(_DWORD *)(*(_DWORD *)v71[0] + 20) )
                  v60 = **(_DWORD **)(*(_DWORD *)v71[0] + 20);
                xxxSendMessage(*(void **)(*(_DWORD *)v71[0] + 4), *(_DWORD *)(*(_DWORD *)v71[0] + 40), v60);
                ThreadUnlock1();
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v71);
        }
        return 0;
      }
      v55 = (a2[1] & 0x100) == 0;
      goto LABEL_142;
    }
    goto LABEL_97;
  }
  v9 = v8 - 160;
  if ( !v9 )
    goto LABEL_66;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_13:
    a2[4] = -1;
    AdjustMouseCoordinates(*(_DWORD **)(**(_DWORD **)a3 + 8), (__int16 *)&v68);
    v13 = v68;
    a2[2] = (__int16)v68;
    a2[3] = SHIWORD(v13);
    v69 = xxxMNFindWindowFromPoint(v13);
    v63 = IsMFMWFPWindow(v69);
    if ( v63 )
    {
      v14 = KeGetCurrentThread();
      v15 = W32GetThreadWin32Thread(v14);
      v16 = v69;
      v75 = *(_DWORD *)(v15 + 228);
      *(_DWORD *)(v15 + 228) = &v75;
      v76 = v16;
      if ( v16 )
        HMLockObject(v16);
    }
    v17 = v7[1];
    if ( (v17 & 0x400) != 0 )
    {
      v7[9] = v7[2];
      v7[10] = v7[3];
      v7[12] = 0;
      LockMFMWFPWindow(v7 + 11);
      v17 = v7[1];
    }
    if ( (v17 & 0x500) != 0 )
      v7[13] = ((v64 & 2) != 0) + 1;
    v18 = v69;
    if ( v69 )
    {
      if ( (***(_BYTE ***)a3 & 2) != 0 && v69 == -5 )
      {
        xxxMNSwitchToAlternateMenu(a3, v7);
        v18 = -1;
      }
      if ( v18 == -1 )
      {
        xxxMNButtonDown(0, 1);
        goto LABEL_135;
      }
      if ( IsMFMWFPWindow(v18) )
      {
        xxxSendMessage(v61, 0, 0);
LABEL_135:
        if ( (v7[1] & 0x100) == 0 )
          xxxMNRemoveMessage((struct tagMSG *)v70[1], (struct tagMSG *)0x204);
        goto LABEL_137;
      }
    }
    goto LABEL_133;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        goto LABEL_12;
      return 0;
    }
LABEL_77:
    a2[4] = -1;
    AdjustMouseCoordinates(*(_DWORD **)(**(_DWORD **)a3 + 8), (__int16 *)&v68);
    v38 = xxxMNFindWindowFromPoint(v68);
    v66 = v38;
    if ( v38 )
    {
      if ( (***(_BYTE ***)a3 & 2) != 0 && v38 == -5 )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v38 = -1;
        v66 = -1;
      }
      if ( v38 == -1 )
      {
        xxxMNDoubleClick(0);
        return 1;
      }
      if ( IsMFMWFPWindow(v38) )
      {
        v39 = KeGetCurrentThread();
        v40 = W32GetThreadWin32Thread(v39);
        v75 = *(_DWORD *)(v40 + 228);
        *(_DWORD *)(v40 + 228) = &v75;
        v76 = v66;
        if ( v66 )
          HMLockObject(v66);
        xxxSendMessage((void *)v66, 0, 0);
        goto LABEL_139;
      }
    }
    goto LABEL_84;
  }
LABEL_97:
  v45 = a2[1];
  if ( (v45 & 8) == 0 )
    return 1;
  if ( (v45 & 0x400) != 0 )
  {
    UnlockMFMWFPWindow(a2 + 11);
    v46 = a2[1] & 0xFFFFFF7F;
    a2[1] = v46;
    if ( (v46 & 0x2000) != 0 )
    {
      v24 = v46 & 0xFFFFDFF7;
LABEL_36:
      a2[1] = v24;
      return 1;
    }
  }
  AdjustMouseCoordinates(*(_DWORD **)(**(_DWORD **)a3 + 8), (__int16 *)&v68);
  v47 = v68;
  a2[2] = (__int16)v68;
  a2[3] = SHIWORD(v47);
  v67 = (void *)xxxMNFindWindowFromPoint(v47);
  v63 = ((int (*)(void))IsMFMWFPWindow)();
  if ( v63 )
  {
    v49 = KeGetCurrentThread();
    v50 = W32GetThreadWin32Thread(v49);
    v75 = *(_DWORD *)(v50 + 228);
    *(_DWORD *)(v50 + 228) = &v75;
    v48 = v67;
    v76 = (int)v67;
    if ( v67 )
    {
      HMLockObject(v67);
      v48 = v67;
    }
  }
  if ( (***(_BYTE ***)a3 & 2) != 0 )
  {
    if ( !v48 )
    {
LABEL_133:
      xxxMNCancel(0, 0);
      goto LABEL_137;
    }
    if ( v48 == (void *)-1 )
    {
      if ( (***(_BYTE ***)a3 & 4) != 0 && ***(char ***)a3 < 0 )
        goto LABEL_133;
LABEL_116:
      xxxMNButtonUp(0, 0);
LABEL_137:
      v54 = v63;
      goto LABEL_138;
    }
  }
  else
  {
    if ( !v48 && (***(_DWORD ***)a3 & 0x200) == 0 )
    {
      v51 = *(_DWORD *)(**(_DWORD **)a3 + 8);
      v52 = KeGetCurrentThread();
      v53 = W32GetThreadWin32Thread(v52);
      v72 = *(_DWORD *)(v53 + 228);
      *(_DWORD *)(v53 + 228) = &v72;
      v73 = v51;
      if ( v51 )
        HMLockObject(v51);
      xxxSendMessage(*(void **)(**(_DWORD **)a3 + 8), 0, 0);
      ThreadUnlock1();
      goto LABEL_137;
    }
    ***(_DWORD ***)a3 &= ~0x200u;
    if ( v48 == (void *)-1 )
      goto LABEL_116;
  }
  v54 = v63;
  if ( v63 )
    xxxSendMessage(v48, 0, v68);
  else
    v7[1] &= 0xFFFFFFB7;
LABEL_138:
  if ( v54 )
    goto LABEL_139;
  return 1;
}
