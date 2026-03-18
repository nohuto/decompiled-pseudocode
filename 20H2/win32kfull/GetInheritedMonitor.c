/*
 * XREFs of GetInheritedMonitor @ 0x1C004A7D8
 * Callers:
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     DetectNewMonitor @ 0x1C01E4964 (DetectNewMonitor.c)
 * Callees:
 *     UnionRect @ 0x1C003F064 (UnionRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010815C (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C01082F8 (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C010834C (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 Prop; // rax
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbx
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // r8d
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // r9d
  unsigned int v30; // edx
  unsigned int v31; // r8d
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  int v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v48; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v51; // rax
  __int64 v52; // rbx
  int v53; // eax
  int v54; // r14d
  __int64 v55; // rcx
  int v56; // [rsp+20h] [rbp-50h]
  int v57; // [rsp+20h] [rbp-50h]
  __int64 v58; // [rsp+28h] [rbp-48h] BYREF
  __int128 v59; // [rsp+38h] [rbp-38h] BYREF
  __int128 v60; // [rsp+48h] [rbp-28h] BYREF
  __int128 v61; // [rsp+58h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 13);
  v3 = 0LL;
  if ( !v2 )
    return v3;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 24);
  }
  if ( v2 != v6 )
  {
LABEL_6:
    v8 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 256LL);
    return ValidateHmonitorNoRip(v8);
  }
  Prop = GetProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v3;
    v2 = ValidateHwnd(Prop);
    if ( !v2 )
      return v3;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*(_BYTE *)(v11 + 20) & 0x40) != 0
    || (*(_DWORD *)(v11 + 232) & 0x8000) != 0 )
  {
    return v3;
  }
  v13 = *((_QWORD *)a1 + 15);
  if ( !v13 )
  {
LABEL_15:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v58, *(_QWORD *)(*((_QWORD *)a1 + 35) + 8LL));
      if ( *(_QWORD *)v58 )
      {
        v59 = 0LL;
        if ( v13 || (v40 = *(_QWORD *)v58, (v13 = *(_QWORD *)(*(_QWORD *)v58 + 8LL)) != 0) )
        {
          v40 = -(__int64)((unsigned int)IntersectRect(
                                           &v59,
                                           (int *)(*((_QWORD *)a1 + 5) + 88LL),
                                           (int *)(*(_QWORD *)(v13 + 40) + 88LL)) != 0);
          v13 &= v40;
        }
      }
      CurrentThread = KeGetCurrentThread();
      v42 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v40)
        || (CurrentProcess = PsGetCurrentProcess(v44, v43, v45),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v48),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v42 = *ThreadWin32Thread;
      }
      if ( v58 != gSmartObjNullRef && !--*(_DWORD *)(v58 + 8) )
      {
        if ( *(_BYTE *)(v58 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v58);
      }
      v51 = *(_QWORD **)(v42 + 1472);
      if ( v51 )
        *(_QWORD *)(v42 + 1472) = *v51;
    }
    if ( v13 )
    {
      v3 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 256LL));
      if ( v3 )
        return v3;
    }
    v14 = *((_QWORD *)a1 + 12);
    v15 = *((_QWORD *)a1 + 11);
    *(_QWORD *)&v59 = v14;
    while ( 1 )
    {
      v58 = v15;
      do
      {
        if ( v14 )
        {
          v16 = *((_QWORD *)a1 + 5);
          v60 = 0LL;
          v17 = *(_QWORD *)(v59 + 40);
          LOBYTE(v1) = ~*(_BYTE *)(v16 + 27);
          v56 = *(_BYTE *)(v16 + 27) & 8;
          v1 = (*(_BYTE *)(v16 + 26) >> 3) & (unsigned __int8)(v1 >> 5) & 1;
          if ( (*(_BYTE *)(v17 + 31) & 0x10) != 0
            && ((*(_BYTE *)(v17 + 16) & 8) != 0 || (*(_BYTE *)(v17 + 30) & 3) != 0)
            && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v17 + 104))
            && ((*(_BYTE *)(v17 + 26) & 8) == 0 || (*(_BYTE *)(v17 + 27) & 0x20) != 0)
            && (*(_QWORD *)(v27 + 432) == *(_QWORD *)(v28 + 432) || *(_QWORD *)(v27 + 424) == *(_QWORD *)(v28 + 424)) )
          {
            v30 = *(_DWORD *)(v17 + 288);
            v31 = *(_DWORD *)(v16 + 288);
            if ( (((unsigned __int16)(v31 >> 8) ^ (unsigned __int16)(v30 >> 8)) & 0x1FF) == 0 )
            {
              v32 = (v30 & 0xF) == 2 && (v30 & 0x20000000) != 0;
              v33 = (v31 & 0xF) == 2 && (v31 & 0x20000000) != 0;
              if ( v32 == v33 )
              {
                if ( !v29 && !v1 )
                  goto LABEL_42;
                v52 = v16 + 88;
                v53 = IsAdjacentRect((const struct tagRECT *)v52, (const struct tagRECT *)(v17 + 88));
                v54 = v53;
                if ( !v56 || v53 || (unsigned int)IntersectRect(&v60, (int *)v52, (int *)(v17 + 88)) )
                {
                  if ( !v1 || v54 )
                    goto LABEL_42;
                  if ( (unsigned int)UnionRect(&v60, (int *)v52, (int *)(v17 + 88)) )
                  {
                    v55 = v60 - *(_QWORD *)v52;
                    if ( (_QWORD)v60 == *(_QWORD *)v52 )
                      v55 = *((_QWORD *)&v60 + 1) - *(_QWORD *)(v52 + 8);
                    if ( !v55 )
                      goto LABEL_42;
                  }
                }
              }
            }
          }
          v15 = v58;
          v14 = *(_QWORD *)(v59 + 96);
          *(_QWORD *)&v59 = v14;
        }
        else if ( !v15 )
        {
          return v3;
        }
      }
      while ( !v15 );
      v18 = *((_QWORD *)a1 + 5);
      v17 = *(_QWORD *)(v15 + 40);
      LOBYTE(v1) = ~*(_BYTE *)(v18 + 27);
      v57 = *(_BYTE *)(v18 + 27) & 8;
      v1 = (*(_BYTE *)(v18 + 26) >> 3) & (unsigned __int8)(v1 >> 5) & 1;
      v19 = (*(_BYTE *)(v17 + 31) & 0x10) == 0;
      v61 = 0LL;
      if ( !v19
        && ((*(_BYTE *)(v17 + 16) & 8) != 0 || (*(_BYTE *)(v17 + 30) & 3) != 0)
        && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v17 + 104))
        && ((*(_BYTE *)(v17 + 26) & 8) == 0 || (*(_BYTE *)(v17 + 27) & 0x20) != 0)
        && (*(_QWORD *)(v20 + 432) == *(_QWORD *)(v21 + 432) || *(_QWORD *)(v20 + 424) == *(_QWORD *)(v21 + 424)) )
      {
        v23 = *(_DWORD *)(v17 + 288);
        v24 = *(_DWORD *)(v18 + 288);
        if ( (((unsigned __int16)(v24 >> 8) ^ (unsigned __int16)(v23 >> 8)) & 0x1FF) == 0 )
        {
          v25 = (v23 & 0xF) == 2 && (v23 & 0x20000000) != 0;
          v26 = (v24 & 0xF) == 2 && (v24 & 0x20000000) != 0;
          if ( v25 == v26 )
          {
            if ( !v22 && !v1 )
              break;
            v36 = v18 + 88;
            v37 = IsAdjacentRect((const struct tagRECT *)v36, (const struct tagRECT *)(v17 + 88));
            v38 = v37;
            if ( !v57 || v37 || (unsigned int)IntersectRect(&v61, (int *)v36, (int *)(v17 + 88)) )
            {
              if ( !v1 || v38 )
                break;
              if ( (unsigned int)UnionRect(&v61, (int *)v36, (int *)(v17 + 88)) )
              {
                v39 = v61 - *(_QWORD *)v36;
                if ( (_QWORD)v61 == *(_QWORD *)v36 )
                  v39 = *((_QWORD *)&v61 + 1) - *(_QWORD *)(v36 + 8);
                if ( !v39 )
                  break;
              }
            }
          }
        }
      }
      v14 = v59;
      v15 = *(_QWORD *)(v58 + 88);
    }
LABEL_42:
    v8 = *(_QWORD *)(v17 + 256);
    return ValidateHmonitorNoRip(v8);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    || (v34 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL),
        (((unsigned __int16)(v12 >> 8) ^ (unsigned __int16)(v34 >> 8)) & 0x1FF) == 0)
    && ((v34 & 0xF) != 2 || (v34 & 0x20000000) == 0 ? (v35 = 0) : (v35 = 1), !v35) )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v13, a1) )
        break;
      v13 = *(_QWORD *)(v13 + 120);
    }
    while ( v13 );
    goto LABEL_15;
  }
  return 0LL;
}
