/*
 * XREFs of _xxxGetMenuBarInfo@16 @ 0xB81C8
 * Callers:
 *     _NtUserGetMenuBarInfo@16 @ 0xB7FC8 (_NtUserGetMenuBarInfo@16.c)
 * Callees:
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBE_NXZ @ 0x8F1E2 (--B-$SmartObjStackRef@UtagMENU@@@@QBE_NXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E (__EnsureDpiDepSysMetCacheForPlateau@4.c)
 */

int __fastcall xxxGetMenuBarInfo(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // edi
  int *ThreadWin32Thread; // eax
  int v8; // edi
  int *v9; // eax
  int v10; // edi
  _DWORD *v12; // edi
  int v13; // ecx
  int v14; // edx
  int WindowDpiLastNotify; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  PKTHREAD v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int WindowBordersForDpiWithCompatFlags2; // edx
  int v24; // eax
  int v25; // eax
  int DpiDependentMetric; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  int v32; // edx
  int *v33; // eax
  int v34; // eax
  int v35; // eax
  int *v36; // eax
  int v37; // eax
  int SysMenu; // eax
  _DWORD *v39; // eax
  int v40; // eax
  PKTHREAD v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int *v47; // eax
  int v48; // eax
  int v49; // eax
  _DWORD *v50; // esi
  int v51; // edx
  int v52; // eax
  int v53; // ecx
  int v54; // ecx
  int v55; // edx
  int v56; // eax
  int *v57; // eax
  int v58; // eax
  int *v59; // eax
  int v60; // [esp-4h] [ebp-3Ch]
  INT v61; // [esp+10h] [ebp-28h]
  _DWORD *v62; // [esp+10h] [ebp-28h]
  PKTHREAD CurrentThread; // [esp+18h] [ebp-20h]
  PKTHREAD v65; // [esp+18h] [ebp-20h]
  int v66; // [esp+18h] [ebp-20h]
  int v67; // [esp+18h] [ebp-20h]
  _DWORD *v68; // [esp+18h] [ebp-20h]
  int v70; // [esp+1Ch] [ebp-1Ch]
  int v71; // [esp+1Ch] [ebp-1Ch]
  int v72; // [esp+1Ch] [ebp-1Ch]
  int v73; // [esp+1Ch] [ebp-1Ch]
  int v74; // [esp+20h] [ebp-18h]
  int v75; // [esp+20h] [ebp-18h]
  int v76; // [esp+20h] [ebp-18h]
  int v77; // [esp+20h] [ebp-18h]
  int *v78; // [esp+24h] [ebp-14h] BYREF
  int v79; // [esp+28h] [ebp-10h] BYREF
  int v80; // [esp+2Ch] [ebp-Ch] BYREF
  int v81; // [esp+30h] [ebp-8h] BYREF
  _DWORD *v82; // [esp+34h] [ebp-4h]

  v4 = a4;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v80 = gSmartObjNullRef;
  v81 = *(_DWORD *)(v6 + 840);
  *(_DWORD *)(v6 + 840) = &v81;
  v82 = 0;
  v65 = KeGetCurrentThread();
  v8 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v9 = (int *)PsGetThreadWin32Thread(v65);
    if ( v9 )
      v8 = *v9;
  }
  v78 = (int *)gSmartObjNullRef;
  v79 = *(_DWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 840) = &v79;
  if ( *a4 != 32 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
LABEL_9:
    v10 = 0;
    goto LABEL_10;
  }
  a4[1] = 0;
  a4[2] = 0;
  a4[3] = 0;
  a4[4] = 0;
  v12 = a1;
  a4[7] &= 0xFFFFFFFC;
  a4[5] = 0;
  a4[6] = 0;
  v13 = a1[5];
  v66 = v13;
  v14 = *(_DWORD *)(v13 + 184) & 0xF;
  if ( v14 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v13 + 184) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v13 + 144) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    v13 = v66;
  }
  else
  {
    if ( !v14 )
    {
      v16 = *(_DWORD *)(a1[2] + 248);
      if ( v16 )
      {
        if ( (*(_BYTE *)(**(_DWORD **)(v16 + 4) + 32) & 1) != 0 )
        {
          v61 = 96;
          goto LABEL_21;
        }
      }
    }
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
  }
  v61 = WindowDpiLastNotify;
LABEL_21:
  if ( a2 == -3 )
  {
    if ( (*(_BYTE *)(v13 + 23) & 0x40) != 0 )
      goto LABEL_9;
    if ( !a1[23] )
      goto LABEL_9;
    v60 = a1[23];
    v82 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(&v80, v60);
    if ( !v82 && !*(_DWORD *)v80 )
      goto LABEL_9;
    if ( a3 < 0 || (unsigned int)a3 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v80 + 20) + 24) )
      goto LABEL_9;
    v17 = v82;
    if ( !v82 )
      v17 = *(_DWORD **)v80;
    a4[5] = *v17;
    if ( *(_DWORD *)(*(_DWORD *)v80 + 36) && *(_DWORD *)(*(_DWORD *)v80 + 40) )
    {
      if ( a3 )
      {
        v28 = 80 * a3;
        v72 = a1[5];
        v29 = *(_DWORD *)(*(_DWORD *)v80 + 56);
        v62 = (_DWORD *)(*(_DWORD *)(v29 + 80 * a3 - 80) + 36);
        if ( (*(_BYTE *)(v72 + 18) & 0x40) != 0 )
        {
          v30 = *(_DWORD *)(v72 + 60) - *v62;
          a4[3] = v30;
          a4[1] = v30 - *(_DWORD *)(*(_DWORD *)(v29 + v28 - 80) + 44);
        }
        else
        {
          v31 = *v62 + *(_DWORD *)(v72 + 52);
          a4[1] = v31;
          a4[3] = v31 + *(_DWORD *)(*(_DWORD *)(v29 + v28 - 80) + 44);
        }
        v12 = a1;
        v32 = *(_DWORD *)(a1[5] + 56) + *(_DWORD *)(*(_DWORD *)(v29 + v28 - 80) + 40);
        a4[2] = v32;
        v27 = v32 + *(_DWORD *)(*(_DWORD *)(v29 + 80 * a3 - 80) + 48);
      }
      else
      {
        v18 = a1[5];
        v70 = *(_DWORD *)(v18 + 16);
        v67 = *(_DWORD *)(v18 + 20);
        v19 = KeGetCurrentThread();
        v20 = W32GetThreadWin32Thread(v19);
        if ( *(_DWORD *)(v20 + 340) <= 0x9900u )
          v22 = *(_DWORD *)(v20 + 352);
        else
          v22 = 0;
        WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v67, v70, v21, 0, v61, v22);
        v24 = a1[5];
        if ( (*(_BYTE *)(v24 + 18) & 0x40) != 0 )
        {
          a4[3] = *(_DWORD *)(v24 + 60) - WindowBordersForDpiWithCompatFlags2;
          a4[1] = a4[3] - *(_DWORD *)(*(_DWORD *)v80 + 36);
        }
        else
        {
          a4[1] = WindowBordersForDpiWithCompatFlags2 + *(_DWORD *)(v24 + 52);
          a4[3] = a4[1] + *(_DWORD *)(*(_DWORD *)v80 + 36);
        }
        a4[2] = WindowBordersForDpiWithCompatFlags2 + *(_DWORD *)(a1[5] + 56);
        v25 = a1[5];
        if ( (*(_BYTE *)(v25 + 8) & 8) != 0 )
        {
          if ( *(char *)(v25 + 16) >= 0 )
          {
            v71 = 120 * GetDpiCacheSlot(v61);
            DpiDependentMetric = *(_DWORD *)(v71 + _gpsi + 1892);
            if ( DpiDependentMetric == -1 )
            {
              _EnsureDpiDepSysMetCacheForPlateau(v61);
              DpiDependentMetric = *(_DWORD *)(v71 + _gpsi + 1892) != -1 ? *(_DWORD *)(v71 + _gpsi + 1892) : 0;
            }
          }
          else
          {
            DpiDependentMetric = GetDpiDependentMetric(22, v61);
          }
          a4[2] += DpiDependentMetric;
        }
        v27 = a4[2] + *(_DWORD *)(*(_DWORD *)v80 + 40);
      }
      a4[4] = v27;
    }
    v33 = *(int **)(v12[2] + 328);
    if ( v33 )
      v34 = *v33;
    else
      v34 = 0;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, v34);
    if ( !*v78 || (*(_BYTE *)*v78 & 2) == 0 || (*(_BYTE *)*v78 & 4) != 0 )
      goto LABEL_85;
LABEL_57:
    if ( *(_DWORD **)(*v78 + 4) == v12 )
    {
      v10 = 1;
      v35 = a4[7] | 1;
      a4[7] = v35;
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(*v78 + 32) + 40) != a3 - 1 )
          goto LABEL_10;
        v36 = v78;
        a4[7] |= 2u;
        if ( !*(_DWORD *)(*(_DWORD *)(*v36 + 32) + 12) )
        {
LABEL_63:
          v4[6] = v5;
          goto LABEL_10;
        }
        v37 = *(_DWORD *)(*v78 + 32);
LABEL_62:
        v5 = **(_DWORD **)(v37 + 12);
        goto LABEL_63;
      }
      goto LABEL_103;
    }
LABEL_85:
    v10 = 1;
    goto LABEL_10;
  }
  if ( a2 == -1 )
  {
    if ( (*(_BYTE *)(v13 + 22) & 8) == 0 )
      goto LABEL_9;
    SysMenu = xxxGetSysMenu();
    v82 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(&v80, SysMenu);
    if ( !SmartObjStackRef<tagMENU>::operator bool(&v80)
      || a3 < 0
      || (unsigned int)a3 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v80 + 20) + 24) )
    {
      goto LABEL_9;
    }
    v39 = v82;
    if ( !v82 )
      v39 = *(_DWORD **)v80;
    a4[5] = *v39;
    if ( _HasCaptionIcon(a1) )
    {
      v40 = a1[5];
      v74 = *(_DWORD *)(v40 + 16);
      v73 = *(_DWORD *)(v40 + 20);
      v41 = KeGetCurrentThread();
      v42 = W32GetThreadWin32Thread(v41);
      if ( *(_DWORD *)(v42 + 340) <= 0x9900u )
        v44 = *(_DWORD *)(v42 + 352);
      else
        v44 = 0;
      v45 = GetWindowBordersForDpiWithCompatFlags2(v73, v74, v43, 0, v61, v44);
      v46 = a1[5];
      v75 = v45;
      if ( (*(_BYTE *)(v46 + 18) & 0x40) != 0 )
      {
        a4[3] = *(_DWORD *)(v46 + 60) - v45;
        a4[1] = a4[3] - GetDpiDependentMetric(((*(char *)(a1[5] + 16) >> 7) & 0xB) + 12, v61);
      }
      else
      {
        a4[1] = v45 + *(_DWORD *)(v46 + 52);
        a4[3] = GetDpiDependentMetric(((*(char *)(a1[5] + 16) >> 7) & 0xB) + 12, v61) + a4[1];
      }
      a4[2] = v75 + *(_DWORD *)(a1[5] + 56);
      a4[4] = GetDpiDependentMetric(((*(char *)(a1[5] + 16) >> 7) & 0xB) + 13, v61) + a4[2];
    }
    v47 = *(int **)(a1[2] + 328);
    if ( v47 )
      v48 = *v47;
    else
      v48 = 0;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, v48);
    if ( !*v78 || (*(_BYTE *)*v78 & 2) == 0 || (*(_BYTE *)*v78 & 4) == 0 )
      goto LABEL_85;
    goto LABEL_57;
  }
  if ( a2 != -4 )
    goto LABEL_9;
  _InterlockedIncrement(&glSendMessage);
  v76 = xxxSendTransformableMessageTimeout((int)a1, 0x1E1u, 0, 0, 0, 0, 0, 1u, 1);
  v49 = ValidateHmenu(v76);
  v82 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(&v80, v49);
  if ( !SmartObjStackRef<tagMENU>::operator bool(&v80)
    || a3 < 0
    || (unsigned int)a3 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v80 + 20) + 24) )
  {
    goto LABEL_9;
  }
  a4[5] = v76;
  if ( a3 )
  {
    v51 = 80 * a3;
    v77 = a1[5];
    v52 = *(_DWORD *)(*(_DWORD *)v80 + 56);
    v68 = (_DWORD *)(*(_DWORD *)(v52 + 80 * a3 - 80) + 36);
    if ( (*(_BYTE *)(v77 + 18) & 0x40) != 0 )
    {
      v53 = *(_DWORD *)(v77 + 76) - *v68;
      v4 = a4;
      a4[3] = v53;
      a4[1] = v53 - *(_DWORD *)(*(_DWORD *)(v52 + v51 - 80) + 44);
    }
    else
    {
      v54 = *v68 + *(_DWORD *)(v77 + 68);
      v12 = a1;
      a4[1] = v54;
      a4[3] = v54 + *(_DWORD *)(*(_DWORD *)(v52 + v51 - 80) + 44);
    }
    v55 = *(_DWORD *)(v12[5] + 72) + *(_DWORD *)(*(_DWORD *)(v52 + v51 - 80) + 40);
    v4[2] = v55;
    v4[4] = v55 + *(_DWORD *)(*(_DWORD *)(v52 + 80 * a3 - 80) + 48);
  }
  else
  {
    v50 = (_DWORD *)(a1[5] + 68);
    a4[1] = *v50++;
    a4[2] = *v50++;
    a4[3] = *v50;
    a4[4] = v50[1];
    v12 = a1;
    v5 = 0;
  }
  v56 = safe_cast_fnid_to_PMENUWND(v12);
  if ( !v56 )
    goto LABEL_85;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, *(_DWORD *)(v56 + 4));
  if ( !*v78 )
    goto LABEL_85;
  v57 = *(int **)(v12[2] + 328);
  if ( v57 )
    v58 = *v57;
  else
    v58 = 0;
  v10 = 1;
  if ( *(_DWORD *)(*v78 + 32) == v58 )
  {
    v35 = v4[7] | 1;
    v4[7] = v35;
    if ( a3 )
    {
      if ( a3 != *(_DWORD *)(*v78 + 40) + 1 )
        goto LABEL_10;
      v59 = v78;
      v4[7] |= 2u;
      if ( !*(_DWORD *)(*v59 + 12) )
        goto LABEL_63;
      v37 = *v78;
      goto LABEL_62;
    }
LABEL_103:
    v4[7] = v35 | 2;
  }
LABEL_10:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v78);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v80);
  return v10;
}
