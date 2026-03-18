/*
 * XREFs of xxxMNCompute @ 0x1C0034BC0
 * Callers:
 *     xxxMenuBarCompute @ 0x1C003812C (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C00334D0 (xxxSendUAHInitMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNIsOwnerDrawItem @ 0x1C003583C (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E320 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(__int64 ***a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, unsigned int *a7)
{
  unsigned int v7; // r14d
  __int64 v9; // rdi
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  unsigned int WindowDpiLastNotify; // ebp
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *DPIMETRICSForDpi; // rax
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  int v22; // r15d
  __int64 *v23; // rcx
  _QWORD *v24; // r14
  __int64 *v25; // rdx
  int v26; // r9d
  __int64 *v27; // rcx
  __int64 v28; // r8
  BOOL v29; // eax
  int v30; // eax
  int v31; // ecx
  __int64 *v32; // rcx
  __int64 v33; // r8
  int v34; // ecx
  __int64 *v35; // rcx
  _WORD *v36; // rax
  __int64 v37; // rcx
  int v38; // ebx
  __int64 *v39; // rdi
  unsigned int v40; // r8d
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int64 *v46; // rcx
  unsigned int v47; // ebx
  __int64 v49; // rcx
  __int64 **v50; // rax
  int v51; // ebx
  unsigned int v52; // edi
  int v53; // edx
  __int64 *v54; // rcx
  int v55; // r9d
  int v56; // eax
  __int64 *v57; // rcx
  __int64 *v58; // rcx
  __int64 *v59; // rcx
  __int64 *v60; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // r10d
  __int64 *i; // r9
  __int64 v69; // r8
  unsigned int v70; // [rsp+40h] [rbp-98h]
  unsigned int v71; // [rsp+44h] [rbp-94h]
  int v72; // [rsp+48h] [rbp-90h]
  unsigned int v73; // [rsp+4Ch] [rbp-8Ch]
  int v74; // [rsp+50h] [rbp-88h]
  int v75; // [rsp+54h] [rbp-84h]
  __int64 DCEx; // [rsp+58h] [rbp-80h]
  __int64 v77; // [rsp+60h] [rbp-78h] BYREF
  __int64 v78; // [rsp+68h] [rbp-70h]
  __int64 v79; // [rsp+70h] [rbp-68h]
  _QWORD v80[11]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v81; // [rsp+E0h] [rbp+8h]
  int v83; // [rsp+F0h] [rbp+18h]
  unsigned int v84; // [rsp+F8h] [rbp+20h]

  v84 = a4;
  v70 = 0;
  v7 = a4;
  v77 = 0LL;
  v71 = 0;
  v9 = a2;
  v78 = gptiCurrent;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a3 + 40);
    v12 = *(_DWORD *)(v11 + 288) & 0xF;
    if ( v12 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v11 + 288) >> 8) & 0x1FF;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)(v11 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
      goto LABEL_8;
    }
    if ( v12
      || (v13 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 424LL) + 284LL);
      goto LABEL_8;
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, 0LL, a4) & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v49, a2, a3) + 284);
    goto LABEL_8;
  }
  WindowDpiLastNotify = 96;
LABEL_8:
  if ( v9 != (**a1)[10] )
  {
    v50 = *a1;
    v80[1] = v9;
    v80[0] = *v50 + 10;
    HMAssignmentLock(v80);
  }
  if ( a7 )
  {
    v71 = *a7;
    v7 = v84;
  }
  if ( !*(_DWORD *)((**a1)[5] + 44) )
    return 0LL;
  v15 = **a1;
  v83 = *(_DWORD *)(v15[5] + 40) & 1;
  if ( v83 )
  {
    v71 = 0;
  }
  else if ( v9 )
  {
    v15 = **a1;
    *((_DWORD *)v15 + 16) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v15, a2, a3, a4) & 0xF) == 2
    || a3
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v16 = 65539LL;
    v17 = a3;
  }
  else
  {
    v17 = 0LL;
    v16 = 3LL;
  }
  DCEx = _GetDCEx(v17, 0LL, v16);
  v18 = DCEx;
  DPIMETRICSForDpi = (_QWORD *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v73 = 0;
  v72 = 0;
  v81 = 0;
  v79 = GreSelectFont(DCEx, *DPIMETRICSForDpi);
  if ( gihmodUserApiHook >= 0 && v9 )
    xxxSendUAHInitMenuMessage(v9, a1, DCEx);
  v20 = 0;
  v75 = 0;
  v21 = v7;
  v74 = 0;
  v22 = a5;
  *((_DWORD *)**a1 + 18) = 0;
  v23 = (__int64 *)a1[2];
  if ( !v23 )
    v23 = **a1;
  v24 = (_QWORD *)MNGetpItemFromIndex(v23, 0LL);
  v25 = **a1;
  if ( !*(_DWORD *)(v25[5] + 44) )
    goto LABEL_68;
  v26 = v83;
  while ( v24 )
  {
    v27 = (__int64 *)a1[2];
    if ( !v27 )
      v27 = **a1;
    v28 = *v24;
    if ( (*(_DWORD *)*v24 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(v27, v24) || *(_WORD *)(v78 + 632) < 0x400u) )
    {
      *(_DWORD *)(v28 + 72) = 0;
      *(_DWORD *)(*v24 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
LABEL_48:
      v34 = v83;
      goto LABEL_49;
    }
    v29 = *(_QWORD *)(v28 + 96) && v24[3];
    v75 |= v29;
    v30 = xxxMNItemSize(a1, v9, WindowDpiLastNotify, v18, v24, v26, &v77);
    v31 = v74;
    if ( v30 )
      v31 = 1;
    v74 = v31;
    v32 = (__int64 *)a1[2];
    if ( !v32 )
      v32 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v32, v24) == -1 )
      break;
    *(_QWORD *)(*v24 + 72LL) = v77;
    v34 = v83;
    if ( !v83 && (!*(_QWORD *)(*v24 + 96LL) || v24[3]) )
    {
      v35 = (__int64 *)a1[2];
      if ( !v35 )
        v35 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v35, v25, v33) )
        *(_DWORD *)(*v24 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      goto LABEL_48;
    }
LABEL_49:
    if ( v71 && *(_DWORD *)(*v24 + 76LL) < v71 )
      *(_DWORD *)(*v24 + 76LL) = v71;
    if ( !v20 )
      v70 = *(_DWORD *)(*v24 + 76LL);
    if ( !v34 )
    {
      v36 = (_WORD *)v24[3];
      if ( v36 && *v36 == 8 )
      {
        v58 = (__int64 *)a1[2];
        if ( !v58 )
          v58 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v58, v71, v33) )
          *(_DWORD *)(*v24 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
      v37 = *v24;
      if ( (*(_DWORD *)*v24 & 0x60) != 0 )
      {
LABEL_121:
        v21 += v70;
        v22 = a5;
        v70 = *(_DWORD *)(v37 + 76);
      }
      else
      {
        v38 = *(_DWORD *)(v37 + 72);
        v39 = **a1;
        if ( v22 + v38 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*((_DWORD *)v39 + 16)
                                                                                                  + a5)
          && v20 )
        {
          v37 = *v24;
          goto LABEL_121;
        }
      }
      v40 = v73;
      *(_DWORD *)(*v24 + 68LL) = v21;
      *(_DWORD *)(*v24 + 64LL) = v22;
      v41 = *v24;
      v22 += *(_DWORD *)(*v24 + 72LL);
      goto LABEL_58;
    }
    v51 = *(_DWORD *)*v24 & 0x60;
    if ( v51 || *(_DWORD *)((**a1)[5] + 44) == v20 + 1 )
    {
      v52 = v20 + 1;
      v53 = v72;
      if ( *(_DWORD *)((**a1)[5] + 44) == v20 + 1 && *(_DWORD *)(*v24 + 72LL) > v72 )
        v53 = *(_DWORD *)(*v24 + 72LL);
      xxxMNRecalcTabStrings(DCEx, (_DWORD)a1, v81, v20 + (v51 == 0), v53, v22);
      v54 = (__int64 *)a1[2];
      if ( !v54 )
        v54 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v54, v24) == -1 )
        break;
      if ( v51 )
      {
        if ( !v74 || !a2 || (v56 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
          v56 = 4;
        v21 = v84;
        v22 = v56 + v55;
        v47 = v20;
        v81 = v20;
        v72 = *(_DWORD *)(*v24 + 72LL);
        if ( *(_DWORD *)((**a1)[5] + 44) == v52 )
        {
          xxxMNRecalcTabStrings(DCEx, (_DWORD)a1, v20, v52, *(_DWORD *)(*v24 + 72LL), v22);
          v57 = (__int64 *)a1[2];
          if ( !v57 )
            v57 = **a1;
          if ( (unsigned int)MNGetpItemIndex(v57, v24) == -1 )
            goto LABEL_67;
        }
      }
      if ( *(_DWORD *)((**a1)[5] + 44) == v52 )
        *((_DWORD *)**a1 + 16) = v55;
    }
    *(_DWORD *)(*v24 + 64LL) = v22;
    *(_DWORD *)(*v24 + 68LL) = v21;
    v41 = *v24;
    v21 += *(_DWORD *)(*v24 + 76LL);
    v40 = v21;
    if ( v73 >= v21 )
      v40 = v73;
LABEL_58:
    v42 = *(_DWORD *)(v41 + 72);
    if ( v72 >= v42 )
      v42 = v72;
    v72 = v42;
    v43 = *(_DWORD *)(v41 + 76);
    v44 = v70;
    if ( v70 != v43 )
    {
      if ( v70 >= v43 )
        v43 = v70;
      v70 = v43;
      v44 = v43;
      if ( !v83 )
      {
        v71 = v43;
        v70 = v43;
      }
    }
    v45 = v44 + v21;
    v46 = (__int64 *)a1[2];
    if ( v83 )
      v45 = v40;
    ++v20;
    v73 = v45;
    if ( !v46 )
      v46 = **a1;
    v9 = a2;
    v24 = (_QWORD *)MNGetpItemFromIndex(v46, v20);
    if ( v20 >= *(_DWORD *)((**a1)[5] + 44) )
      break;
    v18 = DCEx;
  }
  v47 = v81;
LABEL_67:
  if ( !v75 || v47 )
  {
LABEL_68:
    *((_DWORD *)**a1 + 18) = 0;
LABEL_69:
    v47 = v81;
    goto LABEL_70;
  }
  v59 = **a1;
  if ( *(int *)(v59[5] + 40) >= 0 )
  {
    v60 = **a1;
    if ( (*(_DWORD *)(v59[5] + 40) & 0x4000000) != 0 )
    {
      DpiForSystem = GetDpiForSystem(v59, v25);
      v63 = (unsigned int)*(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
      if ( *((_DWORD *)v60 + 18) <= (unsigned int)v63 )
      {
        v65 = GetDpiForSystem(v63, v62);
        v64 = *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v65) + 4);
      }
      else
      {
        v64 = *((_DWORD *)**a1 + 18);
      }
      *((_DWORD *)**a1 + 18) = v64;
      *((_DWORD *)**a1 + 18) += 2;
    }
    else
    {
      v66 = GetDpiForSystem(v59, v25);
      *((_DWORD *)v60 + 18) += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v66) + 4) + 2;
    }
    goto LABEL_69;
  }
  *((_DWORD *)v59 + 18) += 2;
LABEL_70:
  if ( *((_DWORD *)**a1 + 18) )
    *((_DWORD *)**a1 + 18) += 2;
  if ( v47 )
  {
    if ( *(_DWORD *)((**a1)[5] + 44) )
    {
      if ( (**(_DWORD **)(**a1)[11] & 0x4000) != 0 )
      {
        v67 = 0;
        for ( i = (__int64 *)(**a1)[11];
              v67 < *(_DWORD *)((**a1)[5] + 44);
              *(_DWORD *)(v69 + 64) = *((_DWORD *)**a1 + 16) - *(_DWORD *)(v69 + 72) - *(_DWORD *)(v69 + 64) )
        {
          ++v67;
          v69 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFont(DCEx, v79);
  _ReleaseDC(DCEx);
  *((_DWORD *)**a1 + 17) = v73 - v84;
  if ( a7 )
    *a7 = v71;
  return *((unsigned int *)**a1 + 17);
}
