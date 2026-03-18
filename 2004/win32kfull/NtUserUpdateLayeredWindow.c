/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C00252C0
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E6868 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        struct tagBWL *a3,
        __int64 *a4,
        HDC a5,
        ULONG64 a6,
        unsigned int a7,
        ULONG64 a8,
        unsigned int a9,
        ULONG64 a10)
{
  __int64 *v12; // r13
  int *v13; // r12
  __int128 *v14; // r14
  const struct tagPOINT *v15; // rsi
  struct tagRECT *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  struct tagSIZE *v21; // r13
  __int64 *v22; // rdx
  struct _BLENDFUNCTION *v23; // r12
  __int64 v24; // r14
  NTSTATUS updated; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 NewMonitor; // rax
  __int64 v29; // rdi
  __int64 v31; // r14
  __int64 ThreadWin32Thread; // rax
  __int16 v33; // si
  __int64 v34; // rdx
  int v35; // [rsp+50h] [rbp-128h]
  int v36; // [rsp+54h] [rbp-124h] BYREF
  struct tagBWL *v37; // [rsp+58h] [rbp-120h] BYREF
  __int64 v38; // [rsp+68h] [rbp-110h] BYREF
  __int64 v39; // [rsp+70h] [rbp-108h] BYREF
  __int64 v40; // [rsp+78h] [rbp-100h] BYREF
  struct tagSIZE *v41; // [rsp+80h] [rbp-F8h]
  __int64 v42; // [rsp+88h] [rbp-F0h] BYREF
  struct _BLENDFUNCTION *v43; // [rsp+90h] [rbp-E8h]
  struct tagPOINT *v44; // [rsp+98h] [rbp-E0h]
  struct tagRECT v45; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 *v46; // [rsp+B8h] [rbp-C0h]
  __int128 *v47; // [rsp+C0h] [rbp-B8h]
  HDC v48; // [rsp+C8h] [rbp-B0h]
  __int128 v49; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-98h]
  _QWORD v51[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v52; // [rsp+100h] [rbp-78h]
  __int64 v53; // [rsp+108h] [rbp-70h]
  __int128 v54; // [rsp+118h] [rbp-60h] BYREF
  __int128 v55; // [rsp+128h] [rbp-50h]

  v37 = a3;
  *(_QWORD *)&v45.left = a2;
  v48 = a5;
  v12 = (__int64 *)a6;
  v13 = (int *)a8;
  v14 = (__int128 *)a10;
  v40 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v15 = 0LL;
  v46 = 0LL;
  v36 = 0;
  v43 = 0LL;
  v54 = 0LL;
  v16 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  EnterCrit(0LL, 1LL);
  v19 = ValidateHwnd(a1);
  if ( !v19 )
  {
    v35 = 0;
    goto LABEL_38;
  }
  *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v49;
  *((_QWORD *)&v49 + 1) = v19;
  HMLockObject(v19);
  if ( a6 )
  {
    if ( a6 >= MmUserProbeAddress )
      v12 = (__int64 *)MmUserProbeAddress;
    v52 = *v12;
    v40 = v52;
    v44 = (struct tagPOINT *)&v40;
  }
  if ( !a4 )
  {
    v21 = v41;
LABEL_11:
    v22 = (__int64 *)v37;
    if ( v37 )
    {
      if ( (unsigned __int64)v37 >= MmUserProbeAddress )
        v22 = (__int64 *)MmUserProbeAddress;
      v53 = *v22;
      v42 = v53;
      v15 = (const struct tagPOINT *)&v42;
      v46 = &v42;
    }
    if ( a8 )
    {
      if ( a8 >= MmUserProbeAddress )
        v13 = (int *)MmUserProbeAddress;
      v36 = *v13;
      v23 = (struct _BLENDFUNCTION *)&v36;
      v43 = (struct _BLENDFUNCTION *)&v36;
    }
    else
    {
      v23 = v43;
    }
    if ( a10 )
    {
      if ( a10 >= MmUserProbeAddress )
        v14 = (__int128 *)MmUserProbeAddress;
      v54 = *v14;
      v16 = (struct tagRECT *)&v54;
      v47 = &v54;
    }
    if ( (a9 & 0xFFFFFFD0) != 0 )
    {
      UserSetLastError(87LL);
      v35 = 0;
    }
    else if ( v16 && (v16->left < 0 || v16->top < 0) )
    {
      UserSetLastError(87LL);
      v35 = 0;
      UserSetLastError(87LL);
    }
    else
    {
      v39 = 0LL;
      if ( v15 )
      {
        v31 = *(_QWORD *)(v19 + 104);
        if ( v31 )
        {
          if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v19, v22, 0LL) && !(unsigned int)IsTopLevelWindow(v19) )
          {
            LODWORD(v39) = v15->x + *(_DWORD *)(*(_QWORD *)(v31 + 40) + 104LL);
            HIDWORD(v39) = *(_DWORD *)(*(_QWORD *)(v31 + 40) + 108LL) + v15->y;
            v15 = (const struct tagPOINT *)&v39;
          }
        }
      }
      v24 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
      v55 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
      updated = zzzUpdateLayeredWindow((struct tagWND *)v19, *(HDC *)&v45.left, v15, v21, v48, v44, a7, v23, a9, v16);
      if ( updated < 0 )
      {
        v35 = 0;
        UserSetLastStatus(updated);
      }
      else
      {
        v35 = 1;
        v26 = *(_QWORD *)(v19 + 40);
        v27 = v55 - *(_QWORD *)(v26 + 88);
        if ( (_QWORD)v55 == *(_QWORD *)(v26 + 88) )
          v27 = *((_QWORD *)&v55 + 1) - *(_QWORD *)(v26 + 96);
        if ( v27 )
        {
          v45 = 0LL;
          NewMonitor = GetNewMonitor((struct tagWND *)v19, 0LL);
          v29 = NewMonitor;
          if ( NewMonitor )
          {
            if ( NewMonitor != v24 )
            {
              v51[2] = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v51[0] = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = v51;
              v51[1] = v29;
              HMLockObject(v29);
              v37 = 0LL;
              if ( v24 )
                v33 = *(_WORD *)(*(_QWORD *)(v24 + 40) + 64LL);
              else
                v33 = 0;
              v34 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 40) + 64LL);
              if ( (_WORD)v34 != v33 )
                xxxAppAdjustDpiCandidateRect(v19, v34, *(_QWORD *)(v19 + 40) + 88LL, &v45);
              if ( ThreadUnlock1() && (unsigned int)UpdateMonitorForWindowAndChildren(v19, v29, &v37, 0LL) )
                xxxNotifyMonitorChanged((struct tagWND *)v19, &v45, v37);
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
  v21 = (struct tagSIZE *)&v38;
  v41 = (struct tagSIZE *)&v38;
  if ( (int)v38 >= 0 && v38 >= 0 )
    goto LABEL_11;
  v35 = 0;
  UserSetLastError(87LL);
LABEL_37:
  ThreadUnlock1();
LABEL_38:
  UserSessionSwitchLeaveCrit(v18, v17, v20);
  return v35;
}
