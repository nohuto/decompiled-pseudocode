/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C00C7E50
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00472B4 (IsTopLevelOrLayeredChildWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     UserSetLastStatus @ 0x1C008004C (UserSetLastStatus.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F9A00 (UpdateMonitorForWindowAndChildren.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5BA8 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        ULONG64 a6,
        int a7,
        ULONG64 a8,
        int a9,
        ULONG64 a10)
{
  __int64 *v12; // r13
  _DWORD *v13; // r12
  __int128 *v14; // r14
  const struct tagPOINT *v15; // rsi
  int *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  const struct tagSIZE *v19; // r13
  __int64 *v20; // rdx
  _DWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v28; // rdi
  __int64 v30; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int16 v34; // si
  __int64 v35; // rdx
  int v36; // [rsp+50h] [rbp-128h]
  _DWORD v37[5]; // [rsp+54h] [rbp-124h] BYREF
  __int64 v38; // [rsp+68h] [rbp-110h] BYREF
  __int64 v39; // [rsp+70h] [rbp-108h] BYREF
  __int64 v40; // [rsp+78h] [rbp-100h] BYREF
  const struct tagSIZE *v41; // [rsp+80h] [rbp-F8h]
  __int64 v42; // [rsp+88h] [rbp-F0h] BYREF
  _DWORD *v43; // [rsp+90h] [rbp-E8h]
  __int64 v44; // [rsp+98h] [rbp-E0h]
  struct tagRECT v45; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 *v46; // [rsp+B8h] [rbp-C0h]
  __int128 *v47; // [rsp+C0h] [rbp-B8h]
  __int64 v48; // [rsp+C8h] [rbp-B0h]
  __int128 v49; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-98h]
  _QWORD v51[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v52; // [rsp+100h] [rbp-78h]
  __int64 v53; // [rsp+108h] [rbp-70h]
  __int128 v54; // [rsp+118h] [rbp-60h] BYREF
  __int128 v55; // [rsp+128h] [rbp-50h]

  *(_QWORD *)&v37[1] = a3;
  *(_QWORD *)&v45.left = a2;
  v48 = a5;
  v12 = (__int64 *)a6;
  v13 = (_DWORD *)a8;
  v14 = (__int128 *)a10;
  v40 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v15 = 0LL;
  v46 = 0LL;
  v37[0] = 0;
  v43 = 0LL;
  v54 = 0LL;
  v16 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = ValidateHwnd(a1);
  if ( !v18 )
  {
    v36 = 0;
    goto LABEL_38;
  }
  *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v49;
  *((_QWORD *)&v49 + 1) = v18;
  HMLockObject(v18);
  if ( a6 )
  {
    if ( a6 >= MmUserProbeAddress )
      v12 = (__int64 *)MmUserProbeAddress;
    v52 = *v12;
    v40 = v52;
    v44 = (__int64)&v40;
  }
  if ( !a4 )
  {
    v19 = v41;
LABEL_11:
    v20 = *(__int64 **)&v37[1];
    if ( *(_QWORD *)&v37[1] )
    {
      if ( *(_QWORD *)&v37[1] >= MmUserProbeAddress )
        v20 = (__int64 *)MmUserProbeAddress;
      v53 = *v20;
      v42 = v53;
      v15 = (const struct tagPOINT *)&v42;
      v46 = &v42;
    }
    if ( a8 )
    {
      if ( a8 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      v37[0] = *v13;
      v21 = v37;
      v43 = v37;
    }
    else
    {
      v21 = v43;
    }
    if ( a10 )
    {
      if ( a10 >= MmUserProbeAddress )
        v14 = (__int128 *)MmUserProbeAddress;
      v54 = *v14;
      v16 = (int *)&v54;
      v47 = &v54;
    }
    if ( (a9 & 0xFFFFFFD0) != 0 )
    {
      UserSetLastError(87LL);
      v36 = 0;
    }
    else if ( v16 && (*v16 < 0 || v16[1] < 0) )
    {
      UserSetLastError(87LL);
      v36 = 0;
      UserSetLastError(87LL);
    }
    else
    {
      v39 = 0LL;
      if ( v15 )
      {
        v30 = *(_QWORD *)(v18 + 104);
        if ( v30 )
        {
          if ( IsTopLevelOrLayeredChildWindow(v18) && !(unsigned int)IsTopLevelWindow(v18) )
          {
            LODWORD(v39) = v15->x + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 104LL);
            HIDWORD(v39) = *(_DWORD *)(*(_QWORD *)(v30 + 40) + 108LL) + v15->y;
            v15 = (const struct tagPOINT *)&v39;
          }
        }
      }
      v25 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL));
      v55 = *(_OWORD *)(*(_QWORD *)(v18 + 40) + 88LL);
      updated = zzzUpdateLayeredWindow(
                  (struct tagWND *)v18,
                  *(__int64 *)&v45.left,
                  v15,
                  v19,
                  v48,
                  v44,
                  a7,
                  (__int64)v21,
                  a9,
                  (__int64)v16);
      if ( updated < 0 )
      {
        v36 = 0;
        UserSetLastStatus(updated, 1);
      }
      else
      {
        v36 = 1;
        v22 = *(_QWORD *)(v18 + 40);
        v23 = v55 - *(_QWORD *)(v22 + 88);
        if ( (_QWORD)v55 == *(_QWORD *)(v22 + 88) )
          v23 = *((_QWORD *)&v55 + 1) - *(_QWORD *)(v22 + 96);
        if ( v23 )
        {
          v45 = 0LL;
          NewMonitor = GetNewMonitor((struct tagWND *)v18, 0LL, (__int64)&v45);
          v28 = NewMonitor;
          if ( NewMonitor )
          {
            if ( NewMonitor != v25 )
            {
              v51[2] = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v51[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v51;
              v51[1] = v28;
              HMLockObject(v28);
              *(_QWORD *)&v37[1] = 0LL;
              if ( v25 )
                v34 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL);
              else
                v34 = 0;
              v35 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 40) + 64LL);
              if ( (_WORD)v35 != v34 )
                xxxAppAdjustDpiCandidateRect(v18, v35, *(_QWORD *)(v18 + 40) + 88LL, &v45);
              if ( ThreadUnlock1(v32, v35, v33)
                && (unsigned int)UpdateMonitorForWindowAndChildren(v18, v28, &v37[1], 0LL) )
              {
                xxxNotifyMonitorChanged((struct tagWND *)v18, &v45, *(struct tagBWL **)&v37[1], v34);
              }
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int64 *)MmUserProbeAddress;
  v38 = *a4;
  v19 = (const struct tagSIZE *)&v38;
  v41 = (const struct tagSIZE *)&v38;
  if ( (int)v38 >= 0 && v38 >= 0 )
    goto LABEL_11;
  v36 = 0;
  UserSetLastError(87LL);
LABEL_37:
  ThreadUnlock1(v23, v22, v24);
LABEL_38:
  UserSessionSwitchLeaveCrit(v17);
  return v36;
}
