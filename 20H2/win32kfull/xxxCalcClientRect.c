/*
 * XREFs of xxxCalcClientRect @ 0x1C004BFD0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxUpdateClientRect @ 0x1C023EFD0 (xxxUpdateClientRect.c)
 *     xxxRedrawHungWindow @ 0x1C0240E74 (xxxRedrawHungWindow.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C003812C (xxxMenuBarCompute.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00B2E4C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     GetCaptionHeight @ 0x1C0109718 (GetCaptionHeight.c)
 */

_QWORD *__fastcall xxxCalcClientRect(_QWORD *a1, _DWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  int v12; // r14d
  char v13; // dl
  int v14; // esi
  int v15; // r15d
  _DWORD *v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r14d
  int v22; // esi
  int v23; // r15d
  _DWORD *v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r12
  int v30; // r15d
  unsigned int WindowBordersWithDpiAwareness; // eax
  int v32; // r14d
  signed int v33; // ebx
  signed int v34; // r15d
  int v35; // esi
  __int64 *v36; // rbx
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _KTHREAD *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 *v45; // rax
  _QWORD *result; // rax
  __int64 v47; // rcx
  int v48; // r15d
  __int64 v49; // rdx
  int v50; // ecx
  unsigned int v51; // eax
  int v52; // esi
  int v53; // edx
  __int64 v54; // rax
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r12d
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v65; // rcx
  __int64 CurrentThreadProcess; // rax
  BOOL v67; // ecx
  __int64 v68; // rcx
  void *v69; // rax
  BOOL v70; // ecx
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rax
  int v74; // ebx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int128 v77; // [rsp+30h] [rbp-40h]
  __int64 **v79; // [rsp+40h] [rbp-30h] BYREF
  __int64 v80; // [rsp+48h] [rbp-28h] BYREF
  __int64 v81; // [rsp+50h] [rbp-20h]
  __int128 v82; // [rsp+58h] [rbp-18h] BYREF
  __int64 v83; // [rsp+68h] [rbp-8h]
  char v84; // [rsp+B0h] [rbp+40h]
  unsigned int v86; // [rsp+C8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v65),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v79 = (__int64 **)gSmartObjNullRef;
  v80 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v80;
  v11 = a1[5];
  v81 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  v12 = *(_DWORD *)(v11 + 28);
  v13 = *(_BYTE *)(v11 + 16);
  v14 = *(_DWORD *)(v11 + 24);
  v15 = *(_DWORD *)(v11 + 232);
  *(_BYTE *)(v11 + 16) = v13 & 0xF0;
  v84 = v13 & 0xF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_8;
  v16 = (_DWORD *)a1[5];
  v17 = v16[7];
  v18 = v16[6];
  v19 = v16[58];
  if ( v12 != v17 )
    goto LABEL_79;
  if ( v14 == v18 && v15 == v19 )
    goto LABEL_8;
  if ( v12 != v17 )
  {
LABEL_79:
    v67 = ((v17 ^ v12) & 0xB1CF0000) != 0;
    goto LABEL_82;
  }
  if ( v14 != v18 )
  {
    v67 = ((v18 ^ v14) & 0x4E27A9) != 0;
    goto LABEL_82;
  }
  if ( ((v19 ^ v15) & 0x2E00300) != 0 )
  {
    v67 = 1;
LABEL_82:
    if ( v67 )
    {
      DirtyVisRgnTrackers(a1);
      v69 = (void *)ReferenceDwmApiPort(v68);
      DwmAsyncChildStyleChange(v69);
    }
  }
LABEL_8:
  v20 = a1[5];
  v21 = *(_DWORD *)(v20 + 28);
  v22 = *(_DWORD *)(v20 + 24);
  v23 = *(_DWORD *)(v20 + 232);
  *(_BYTE *)(v20 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_12;
  v24 = (_DWORD *)a1[5];
  v25 = v24[7];
  v26 = v24[6];
  v27 = v24[58];
  if ( v21 != v25 )
    goto LABEL_87;
  if ( v22 == v26 && v23 == v27 )
    goto LABEL_12;
  if ( v21 == v25 )
  {
    if ( v22 == v26 )
    {
      if ( ((v27 ^ v23) & 0x2E00300) == 0 )
        goto LABEL_12;
      v70 = 1;
    }
    else
    {
      v70 = ((v26 ^ v22) & 0x4E27A9) != 0;
    }
  }
  else
  {
LABEL_87:
    v70 = ((v25 ^ v21) & 0xB1CF0000) != 0;
  }
  if ( v70 )
  {
    DirtyVisRgnTrackers(a1);
    v72 = (void *)ReferenceDwmApiPort(v71);
    DwmAsyncChildStyleChange(v72);
  }
LABEL_12:
  v28 = a1[5];
  if ( (*(_BYTE *)(v28 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v29 = HIDWORD(*(_QWORD *)a2);
    v30 = HIDWORD(*(_QWORD *)a2);
    v77 = *(_OWORD *)a2;
    if ( (*(_BYTE *)(v28 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1LL, a1, 8LL, 1LL);
      v30 = GetCaptionHeight(a1) + v29;
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
    v32 = v77 + WindowBordersWithDpiAwareness;
    v33 = DWORD2(v77) - WindowBordersWithDpiAwareness;
    v86 = WindowBordersWithDpiAwareness;
    v34 = v30 + WindowBordersWithDpiAwareness;
    v35 = HIDWORD(v77) - WindowBordersWithDpiAwareness;
    LODWORD(v77) = v77 + WindowBordersWithDpiAwareness;
    DWORD2(v77) -= WindowBordersWithDpiAwareness;
    DWORD1(v77) = v34;
    HIDWORD(v77) -= WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0xC0) != 0x40 )
    {
      v36 = (__int64 *)a1[21];
      v81 = 0LL;
      if ( (v36 == *v79
         || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v79), !v36)
           ? (v79 = (__int64 **)gSmartObjNullRef)
           : (__int64 **)(v79 = (__int64 **)v36[19], ++*((_DWORD *)v79 + 2)),
             !v81))
        && !*v79
        || (SetOrClrWF(1LL, a1, 1LL, 1LL), a3) )
      {
        v33 = DWORD2(v77);
        v32 = v77;
      }
      else
      {
        v57 = v81;
        if ( !v81 )
          v57 = (__int64)*v79;
        *(_DWORD *)(*(_QWORD *)(v57 + 40) + 40LL) |= 0x200u;
        v58 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)&v82 = *(_QWORD *)(v58 + 416);
        *(_QWORD *)(v58 + 416) = &v82;
        *((_QWORD *)&v82 + 1) = v57;
        HMLockObject(v57);
        v33 = DWORD2(v77);
        v32 = v77;
        v34 += xxxMenuBarCompute(&v79, (__int64)a1, (unsigned int)(v34 - v29), v86, DWORD2(v77) - (int)v77);
        DWORD1(v77) = v34;
        v59 = *(_QWORD *)(*((_QWORD *)&v82 + 1) + 40LL);
        *(_DWORD *)(v59 + 40) &= ~0x200u;
        ThreadUnlock1(v59, v60, v61);
      }
      v35 = HIDWORD(v77);
    }
    v37 = 0;
    if ( v34 >= v35 )
    {
      v35 = v34;
      HIDWORD(v77) = v34;
      v37 = 1;
    }
    v38 = a1[5];
    if ( (*(_BYTE *)(v38 + 21) & 2) != 0 && v32 >= v33 )
    {
      v33 = v32;
      v37 = 1;
      DWORD2(v77) = v32;
    }
    if ( !v37 )
    {
      v47 = a1[5];
      if ( (*(_BYTE *)(v38 + 25) & 2) != 0 && v33 - v32 >= 4 && v35 - v34 >= 4 )
      {
        SetOrClrWF(1LL, a1, 1040LL, 1LL);
        v47 = a1[5];
        v32 += 2;
        v33 -= 2;
        LODWORD(v77) = v32;
        v34 += 2;
        v35 -= 2;
        *(_QWORD *)((char *)&v77 + 4) = __PAIR64__(v33, v34);
        HIDWORD(v77) = v35;
      }
      if ( (*(_BYTE *)(v47 + 30) & 0x10) != 0
        && ((v53 = *(_DWORD *)(v47 + 288) & 0xF, v53 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v47 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v47 + 232) & 0x8000000) != 0
          ? (WindowDpiLastNotify = GetWindowDpiLastNotify(a1))
          : v53 || (v54 = *(_QWORD *)(a1[2] + 456LL)) == 0 || (*(_DWORD *)(**(_QWORD **)(v54 + 8) + 64LL) & 1) == 0
          ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424LL) + 284LL))
          : (WindowDpiLastNotify = 96),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify),
            v35 - v34 > DpiDependentMetric) )
      {
        SetOrClrWF(1LL, a1, 4LL, 1LL);
        v48 = a3;
        if ( !a3 )
          HIDWORD(v77) = v35 - DpiDependentMetric;
      }
      else
      {
        v48 = a3;
      }
      v49 = a1[5];
      if ( (*(_BYTE *)(v49 + 30) & 0x20) != 0 )
      {
        v50 = *(_DWORD *)(v49 + 288) & 0xF;
        if ( v50 == 3 )
        {
          v51 = (*(_DWORD *)(v49 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
        {
          v51 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v50
               && (v62 = *(_QWORD *)(a1[2] + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 64LL) & 1) != 0 )
        {
          v51 = 96;
        }
        else
        {
          v51 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424LL) + 284LL);
        }
        v52 = GetDpiDependentMetric(0LL, v51);
        if ( v33 - v32 >= v52 )
        {
          SetOrClrWF(1LL, a1, 2LL, 1LL);
          if ( !v48 )
          {
            if ( ((*(_BYTE *)(a1[5] + 25LL) ^ *(_BYTE *)(a1[5] + 26LL)) & 0x40) != 0 )
              LODWORD(v77) = v52 + v32;
            else
              DWORD2(v77) = v33 - v52;
          }
        }
      }
    }
    *(_OWORD *)a2 = v77;
  }
  v39 = a1[5];
  if ( v84 != (*(_BYTE *)(v39 + 16) & 0xF) && *(char *)(v39 + 23) < 0 )
    xxxWindowEvent(0x8004u, 1u);
  v40 = KeGetCurrentThread();
  v41 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v73 = PsGetCurrentProcess(v43, v42, v44),
        v74 = PsGetProcessSessionIdEx(v73),
        v76 = PsGetCurrentThreadProcess(v75),
        v74 == (unsigned int)PsGetProcessSessionIdEx(v76)) )
  {
    v45 = (__int64 *)PsGetThreadWin32Thread(v40);
    if ( v45 )
      v41 = *v45;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v79);
  result = *(_QWORD **)(v41 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v41 + 1472) = result;
  }
  return result;
}
