/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C004A0B0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     NtUserInheritWindowMonitor @ 0x1C014E900 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C001B748 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0047020 (BuildWindowListWithDpiBoundaryInfo.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F9B10 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F9B44 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5BA8 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 i; // r14
  unsigned __int16 v12; // r12
  struct tagWND *v13; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct tagBWL *v26; // rax
  struct tagBWL *v27; // r15
  __int64 v28; // rdx
  struct tagFREELIST *v29; // rbx
  _QWORD *j; // r14
  struct tagWND *v31; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v40; // rcx
  __int64 CurrentThreadProcess; // rax
  __int128 v42; // [rsp+30h] [rbp-30h] BYREF
  __int64 v43; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v44; // [rsp+48h] [rbp-18h]
  __int64 v45; // [rsp+50h] [rbp-10h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(_OWORD *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v42 = v8;
  v10 = (__int64)a2;
  for ( i = ValidateHmonitorNoRip(v9); v10; v10 = *(_QWORD *)(v10 + 104) )
  {
    if ( (unsigned int)IsTopLevelWindow(v10) )
      break;
  }
  if ( i )
    v12 = *(_WORD *)(*(_QWORD *)(i + 40) + 64LL);
  else
    v12 = 0;
  if ( a3 )
  {
    v35 = (unsigned __int16)gatomMonitorInheritance;
    if ( a2 )
    {
      v7 = InternalSetProp(a1, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)a2, 1LL);
    }
    else
    {
      v36 = *((_QWORD *)a1 + 18);
      if ( gatomMonitorInheritance == word_1C0339F54 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v36, v35, 1LL);
    }
  }
  v13 = 0LL;
  if ( a2 != a1 )
    v13 = a2;
  v45 = 0LL;
  if ( !v13
    || v10 && (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 20LL) & 0x20) != 0
    || (v16 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v13 + 5) + 256LL))) == 0LL )
  {
    NewMonitor = GetNewMonitor(a1, 0LL);
    CurrentThread = KeGetCurrentThread();
    v16 = (_QWORD *)NewMonitor;
    v17 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v18)
      || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v40),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    v43 = *(_QWORD *)(v17 + 416);
    *(_QWORD *)(v17 + 416) = &v43;
    v44 = v16;
    HMLockObject(v16);
    v25 = *(unsigned __int16 *)(v16[5] + 64LL);
    if ( (_WORD)v25 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v25, *((_QWORD *)a1 + 5) + 88LL, &v42);
  }
  else
  {
    v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v43 = *(_QWORD *)(v33 + 416);
    *(_QWORD *)(v33 + 416) = &v43;
    v44 = v16;
    HMLockObject(v16);
    if ( !HasMaximizedState(a1) )
    {
      v25 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v25 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 )
      {
        if ( i )
        {
          v24 = v25 + 88;
          v34 = *(_QWORD *)(v25 + 88);
          v25 = *(unsigned __int16 *)(v16[5] + 64LL);
          if ( (_WORD)v25 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v25, v24, &v42) )
            ScaleDPIRect(&v42, (__m128i *)(*((_QWORD *)a1 + 5) + 88LL), *(_WORD *)(v16[5] + 64LL), v12, v34, v34);
        }
      }
    }
  }
  if ( ThreadUnlock1(v23, v25, v24) )
  {
    v26 = BuildHwndList(a1, 1, 0LL);
    v27 = v26;
    if ( v26 )
    {
      v29 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, *((_QWORD *)a1 + 13), (__int64)v26, 0LL);
      for ( j = (_QWORD *)((char *)v27 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v28) = 1;
        v31 = (struct tagWND *)HMValidateHandleNoSecure(*j, v28);
        if ( v31 )
          UpdateWindowMonitor(v31, v16);
      }
      if ( v29 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v29);
        FreeListFree(v29);
      }
      xxxNotifyMonitorChanged(a1);
    }
  }
  return v7;
}
