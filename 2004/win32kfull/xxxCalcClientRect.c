/*
 * XREFs of xxxCalcClientRect @ 0x1C00AC73C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxUpdateClientRect @ 0x1C0240270 (xxxUpdateClientRect.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A7698 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0 (GetWindowBordersWithDpiAwareness.c)
 *     GetCaptionHeight @ 0x1C01084FC (GetCaptionHeight.c)
 */

_QWORD *__fastcall xxxCalcClientRect(__int64 a1, _DWORD *a2, int a3)
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
  unsigned int v16; // r12d
  _DWORD *v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // ebx
  __int64 v21; // rax
  int v22; // r14d
  int v23; // esi
  int v24; // r15d
  _DWORD *v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r12
  int v31; // r15d
  int WindowBordersWithDpiAwareness; // eax
  int v33; // r14d
  int v34; // ebx
  int v35; // r15d
  int v36; // esi
  __int64 v37; // rbx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  _QWORD *result; // rax
  __int64 v48; // rcx
  int v49; // r15d
  __int64 v50; // rdx
  int v51; // ecx
  unsigned int v52; // eax
  int v53; // esi
  int v54; // edx
  __int64 v55; // rax
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r12d
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v66; // rcx
  __int64 CurrentThreadProcess; // rax
  int v68; // ecx
  unsigned int v69; // r15d
  __int64 v70; // rcx
  void *v71; // rax
  int v72; // ecx
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rax
  int v76; // ebx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int128 v79; // [rsp+30h] [rbp-40h]
  __int64 *v81; // [rsp+40h] [rbp-30h] BYREF
  __int64 v82; // [rsp+48h] [rbp-28h] BYREF
  __int64 v83; // [rsp+50h] [rbp-20h]
  __int128 v84; // [rsp+58h] [rbp-18h] BYREF
  __int64 v85; // [rsp+68h] [rbp-8h]
  char v86; // [rsp+B0h] [rbp+40h]
  int v88; // [rsp+C8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v66),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v81 = (__int64 *)gSmartObjNullRef;
  v82 = *(_QWORD *)(v6 + 1464);
  *(_QWORD *)(v6 + 1464) = &v82;
  v11 = *(_QWORD *)(a1 + 40);
  v83 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v12 = *(_DWORD *)(v11 + 28);
  v13 = *(_BYTE *)(v11 + 16);
  v14 = *(_DWORD *)(v11 + 24);
  v15 = *(_DWORD *)(v11 + 232);
  *(_BYTE *)(v11 + 16) = v13 & 0xF0;
  v86 = v13 & 0xF;
  v16 = -268435456;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_8;
  v17 = *(_DWORD **)(a1 + 40);
  v18 = v17[7];
  v19 = v17[6];
  v20 = v17[58];
  if ( v12 != v18 )
    goto LABEL_79;
  if ( v14 == v19 && v15 == v20 )
    goto LABEL_8;
  if ( v12 != v18 )
  {
LABEL_79:
    v68 = ((v18 ^ v12) & 0xB1CF0000) != 0;
    v69 = -v68 & 0xFFFFFFF0;
    v20 = v18 & -v68;
    goto LABEL_82;
  }
  if ( v14 != v19 )
  {
    v68 = ((v19 ^ v14) & 0x4E27A9) != 0;
    v69 = -v68 & 0xFFFFFFEC;
    v20 = v19 & -v68;
    goto LABEL_82;
  }
  if ( ((v20 ^ v15) & 0x2E00300) != 0 )
  {
    v68 = 1;
    v69 = -268435456;
LABEL_82:
    if ( v68 )
    {
      DirtyVisRgnTrackers((struct tagWND *)a1);
      v71 = (void *)ReferenceDwmApiPort(v70);
      DwmAsyncChildStyleChange(v71, *(_QWORD *)a1, v69, v20);
    }
  }
LABEL_8:
  v21 = *(_QWORD *)(a1 + 40);
  v22 = *(_DWORD *)(v21 + 28);
  v23 = *(_DWORD *)(v21 + 24);
  v24 = *(_DWORD *)(v21 + 232);
  *(_BYTE *)(v21 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_12;
  v25 = *(_DWORD **)(a1 + 40);
  v26 = v25[7];
  v27 = v25[6];
  v28 = v25[58];
  if ( v22 != v26 )
    goto LABEL_87;
  if ( v23 == v27 && v24 == v28 )
    goto LABEL_12;
  if ( v22 == v26 )
  {
    if ( v23 == v27 )
    {
      if ( ((v28 ^ v24) & 0x2E00300) == 0 )
        goto LABEL_12;
      v72 = 1;
    }
    else
    {
      v72 = ((v27 ^ v23) & 0x4E27A9) != 0;
      v16 = -v72 & 0xFFFFFFEC;
      v28 = v27 & -v72;
    }
  }
  else
  {
LABEL_87:
    v72 = ((v26 ^ v22) & 0xB1CF0000) != 0;
    v16 = -v72 & 0xFFFFFFF0;
    v28 = v26 & -v72;
  }
  if ( v72 )
  {
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v74 = (void *)ReferenceDwmApiPort(v73);
    DwmAsyncChildStyleChange(v74, *(_QWORD *)a1, v16, v28);
  }
LABEL_12:
  v29 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v29 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v30 = HIDWORD(*(_QWORD *)a2);
    v31 = HIDWORD(*(_QWORD *)a2);
    v79 = *(_OWORD *)a2;
    if ( (*(_BYTE *)(v29 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1, a1, 8u, 1);
      v31 = GetCaptionHeight(a1) + v30;
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
    v33 = v79 + WindowBordersWithDpiAwareness;
    v34 = DWORD2(v79) - WindowBordersWithDpiAwareness;
    v88 = WindowBordersWithDpiAwareness;
    v35 = v31 + WindowBordersWithDpiAwareness;
    v36 = HIDWORD(v79) - WindowBordersWithDpiAwareness;
    LODWORD(v79) = v79 + WindowBordersWithDpiAwareness;
    DWORD2(v79) -= WindowBordersWithDpiAwareness;
    DWORD1(v79) = v35;
    HIDWORD(v79) -= WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      v37 = *(_QWORD *)(a1 + 168);
      v83 = 0LL;
      if ( (v37 == *v81
         || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v81), !v37)
           ? (v81 = (__int64 *)gSmartObjNullRef)
           : (__int64 *)(v81 = *(__int64 **)(v37 + 152), ++*((_DWORD *)v81 + 2)),
             !v83))
        && !*v81
        || (SetOrClrWF(1, a1, 1u, 1), a3) )
      {
        v34 = DWORD2(v79);
        v33 = v79;
      }
      else
      {
        v58 = v83;
        if ( !v83 )
          v58 = *v81;
        *(_DWORD *)(*(_QWORD *)(v58 + 40) + 40LL) |= 0x200u;
        v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v84 = *(_QWORD *)(v59 + 408);
        *(_QWORD *)(v59 + 408) = &v84;
        *((_QWORD *)&v84 + 1) = v58;
        HMLockObject(v58);
        v34 = DWORD2(v79);
        v33 = v79;
        v35 += xxxMenuBarCompute(&v81, a1, v35 - (int)v30, v88, DWORD2(v79) - (int)v79);
        DWORD1(v79) = v35;
        v60 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 40LL);
        *(_DWORD *)(v60 + 40) &= ~0x200u;
        ThreadUnlock1(v60, v61, v62);
      }
      v36 = HIDWORD(v79);
    }
    v38 = 0;
    if ( v35 >= v36 )
    {
      v36 = v35;
      HIDWORD(v79) = v35;
      v38 = 1;
    }
    v39 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v39 + 21) & 2) != 0 && v33 >= v34 )
    {
      v34 = v33;
      v38 = 1;
      DWORD2(v79) = v33;
    }
    if ( !v38 )
    {
      v48 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v39 + 25) & 2) != 0 && v34 - v33 >= 4 && v36 - v35 >= 4 )
      {
        SetOrClrWF(1, a1, 0x410u, 1);
        v48 = *(_QWORD *)(a1 + 40);
        v33 += 2;
        v34 -= 2;
        LODWORD(v79) = v33;
        v35 += 2;
        v36 -= 2;
        *(_QWORD *)((char *)&v79 + 4) = __PAIR64__(v34, v35);
        HIDWORD(v79) = v36;
      }
      if ( (*(_BYTE *)(v48 + 30) & 0x10) != 0
        && ((v54 = *(_DWORD *)(v48 + 288) & 0xF, v54 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v48 + 232) & 0x8000000) != 0
          ? (WindowDpiLastNotify = GetWindowDpiLastNotify(a1))
          : v54
         || (v55 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) == 0
         || (*(_DWORD *)(**(_QWORD **)(v55 + 8) + 64LL) & 1) == 0
          ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL))
          : (WindowDpiLastNotify = 96),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify),
            v36 - v35 > DpiDependentMetric) )
      {
        SetOrClrWF(1, a1, 4u, 1);
        v49 = a3;
        if ( !a3 )
          HIDWORD(v79) = v36 - DpiDependentMetric;
      }
      else
      {
        v49 = a3;
      }
      v50 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v50 + 30) & 0x20) != 0 )
      {
        v51 = *(_DWORD *)(v50 + 288) & 0xF;
        if ( v51 == 3 )
        {
          v52 = (*(_DWORD *)(v50 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v50 + 232) & 0x8000000) != 0 )
        {
          v52 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v51
               && (v63 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v63 + 8) + 64LL) & 1) != 0 )
        {
          v52 = 96;
        }
        else
        {
          v52 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
        }
        v53 = GetDpiDependentMetric(0LL, v52);
        if ( v34 - v33 >= v53 )
        {
          SetOrClrWF(1, a1, 2u, 1);
          if ( !v49 )
          {
            if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) ^ *(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL)) & 0x40) != 0 )
              LODWORD(v79) = v53 + v33;
            else
              DWORD2(v79) = v34 - v53;
          }
        }
      }
    }
    *(_OWORD *)a2 = v79;
  }
  v40 = *(_QWORD *)(a1 + 40);
  if ( v86 != (*(_BYTE *)(v40 + 16) & 0xF) && *(char *)(v40 + 23) < 0 )
    xxxWindowEvent(0x8004u, (struct tagWND *)a1, 0, 0, 1u);
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v40)
    || (v75 = PsGetCurrentProcess(v44, v43, v45),
        v76 = PsGetProcessSessionIdEx(v75),
        v78 = PsGetCurrentThreadProcess(v77),
        v76 == (unsigned int)PsGetProcessSessionIdEx(v78)) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v46 )
      v42 = *v46;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v81);
  result = *(_QWORD **)(v42 + 1464);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v42 + 1464) = result;
  }
  return result;
}
