/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C006B23C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     NtUserInheritWindowMonitor @ 0x1C014C0F0 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0023520 (ScaleDPIRect.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0051580 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00515B4 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006E75C (BuildWindowListWithDpiBoundaryInfo.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C011D888 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E6868 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  struct tagRECT v8; // xmm0
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 i; // r14
  unsigned __int16 v12; // r12
  __int64 *v13; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  struct tagBWL *v27; // r15
  __int64 v28; // rdx
  __int64 *v29; // rbx
  _QWORD *j; // r14
  struct tagWND *v31; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v41; // rcx
  __int64 CurrentThreadProcess; // rax
  struct tagRECT v43; // [rsp+30h] [rbp-30h] BYREF
  __int64 v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+48h] [rbp-18h]
  __int64 v46; // [rsp+50h] [rbp-10h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(struct tagRECT *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v43 = v8;
  v10 = a2;
  for ( i = ValidateHmonitorNoRip(v9); v10; v10 = (__int64 *)v10[13] )
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
    v36 = (unsigned __int16)gatomMonitorInheritance;
    if ( a2 )
    {
      v7 = InternalSetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, *a2, 1u);
    }
    else
    {
      v37 = *((_QWORD *)a1 + 18);
      if ( gatomMonitorInheritance == word_1C033AF24 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v37, v36, 1LL);
    }
  }
  v13 = 0LL;
  if ( a2 != (__int64 *)a1 )
    v13 = a2;
  v46 = 0LL;
  if ( !v13
    || v10 && (*(_BYTE *)(v10[5] + 20) & 0x20) != 0
    || (v33 = ValidateHmonitorNoRip(*(_QWORD *)(v13[5] + 256))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL, (__int64)&v43);
    CurrentThread = KeGetCurrentThread();
    v16 = NewMonitor;
    v17 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v18)
      || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v41),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    v44 = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = &v44;
    v45 = v16;
    HMLockObject(v16);
    v25 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 40) + 64LL);
    if ( (_WORD)v25 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v25, *((_QWORD *)a1 + 5) + 88LL, &v43);
  }
  else
  {
    v34 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v44 = *(_QWORD *)(v34 + 408);
    *(_QWORD *)(v34 + 408) = &v44;
    v45 = v33;
    HMLockObject(v33);
    if ( !HasMaximizedState(a1) )
    {
      v25 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v25 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 )
      {
        if ( i )
        {
          v24 = v25 + 88;
          v35 = *(_QWORD *)(v25 + 88);
          v25 = *(unsigned __int16 *)(*(_QWORD *)(v33 + 40) + 64LL);
          if ( (_WORD)v25 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v25, v24, &v43) )
            ScaleDPIRect(
              &v43,
              (__m128i *)(*((_QWORD *)a1 + 5) + 88LL),
              *(_WORD *)(*(_QWORD *)(v33 + 40) + 64LL),
              v12,
              v35,
              v35);
        }
      }
    }
  }
  if ( ThreadUnlock1(v23, v25, v24) )
  {
    v26 = BuildHwndList(a1);
    v27 = (struct tagBWL *)v26;
    if ( v26 )
    {
      v29 = (__int64 *)BuildWindowListWithDpiBoundaryInfo(a1, *((_QWORD *)a1 + 13), v26, 0LL);
      for ( j = (_QWORD *)((char *)v27 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v28) = 1;
        v31 = (struct tagWND *)HMValidateHandleNoSecure(*j, v28);
        if ( v31 )
          UpdateWindowMonitor(v31);
      }
      if ( v29 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v29, v28);
        FreeListFree((struct tagFREELIST *)v29);
      }
      xxxNotifyMonitorChanged(a1, &v43, v27, v12);
    }
  }
  return v7;
}
