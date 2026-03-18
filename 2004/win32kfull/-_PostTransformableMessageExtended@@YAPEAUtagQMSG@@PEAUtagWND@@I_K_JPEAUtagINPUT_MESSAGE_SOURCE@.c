/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0
 * Callers:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033AE0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostTransformableMessage @ 0x1C0037938 (_PostTransformableMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 *     _PostMessageExtended @ 0x1C00931C0 (_PostMessageExtended.c)
 *     NtUserPostMessage @ 0x1C0093530 (NtUserPostMessage.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0259664 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0035B10 (xxxBroadcastMessageEx.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C00967B0 (WPP_RECORDER_SF_qqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0097B60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0099FE0 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     _PostThreadMessage @ 0x1C00BE8A8 (_PostThreadMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1C011CBE0 (ProcessSuspendedPostMessage.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     IsMiPEnabledForWindow @ 0x1C01E23D8 (IsMiPEnabledForWindow.c)
 *     xxxDDETrackPostHook @ 0x1C021DACC (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // rbx
  _DWORD *v7; // rdi
  unsigned int v9; // r10d
  struct tagWND *v10; // rsi
  struct tagINPUT_MESSAGE_SOURCE *v11; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v22; // r8
  int v23; // r12d
  __int64 v24; // rbx
  unsigned int DLT; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  tagDomLock *DomainLockRef; // r14
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r8
  int v32; // r12d
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r14
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  tagObjLock *v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  tagDomLock *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  __int128 *v55; // rdx
  __int64 v56; // rax
  __int128 *v57; // rcx
  __int64 v58; // xmm1_8
  __int128 *v59; // rax
  __int64 v60; // xmm1_8
  __int128 v61; // xmm0
  __int64 v62; // xmm1_8
  __int128 v63; // xmm0
  __int64 v64; // xmm1_8
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v69; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // ebx
  __int64 v75; // r8
  __int64 v76; // rax
  struct _KEVENT *v77; // rcx
  int v78; // [rsp+20h] [rbp-89h]
  unsigned __int64 v79; // [rsp+70h] [rbp-39h]
  __int64 v80; // [rsp+78h] [rbp-31h] BYREF
  tagDomLock *v81; // [rsp+80h] [rbp-29h]
  struct tagINPUT_MESSAGE_SOURCE *v82; // [rsp+88h] [rbp-21h]
  __int128 v83; // [rsp+90h] [rbp-19h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-9h]
  __int128 v85; // [rsp+A8h] [rbp-1h]
  __int64 v86; // [rsp+B8h] [rbp+Fh]
  unsigned int v87; // [rsp+108h] [rbp+5Fh] BYREF
  unsigned __int64 v88; // [rsp+110h] [rbp+67h] BYREF
  __int64 v89; // [rsp+118h] [rbp+6Fh] BYREF

  v89 = (__int64)a4;
  v88 = a3;
  v87 = a2;
  v6 = a5;
  v7 = 0LL;
  v84 = 0LL;
  v80 = 0LL;
  v9 = a2;
  v10 = (struct tagWND *)a1;
  v83 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v80);
    a4 = (struct _LARGE_STRING *)v89;
    v9 = v87;
  }
  v11 = (struct tagINPUT_MESSAGE_SOURCE *)&v80;
  if ( v6 )
    v11 = v6;
  v82 = v11;
  if ( v9 < 0x400 )
  {
    a1 = 512LL;
    if ( (MessageTable[v9] & 0x200) != 0 || v9 == 537 && (a3 & 0x8000) != 0 )
      goto LABEL_89;
  }
  if ( v9 != 536 )
  {
    if ( v9 - 577 <= 3 )
      goto LABEL_91;
    goto LABEL_8;
  }
  if ( (a3 & 0x8000) != 0 )
  {
LABEL_89:
    UserSetLastError(1159LL, a2, a3);
    return 0LL;
  }
LABEL_8:
  if ( v9 - 581 > 0x12 || v9 == 589 )
  {
    if ( v9 != 528 || (_DWORD)a3 != 66118 )
      goto LABEL_10;
    goto LABEL_92;
  }
LABEL_91:
  if ( (_WORD)a3 != 1 )
    goto LABEL_10;
LABEL_92:
  if ( v10 && !(unsigned int)IsMiPEnabledForWindow(v10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v66);
    return 0LL;
  }
LABEL_10:
  if ( v10 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, v9, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v69),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v10 )
    return (unsigned int)PostThreadMessage(v13, v87, v88) != 0;
  v19 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 416LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
  if ( v19 != CurrentProcessWin32Process )
  {
    v22 = v87;
    if ( v87 > 0x288 )
      goto LABEL_17;
    if ( v87 > 0xD0 )
    {
      if ( v87 == 272 )
      {
LABEL_106:
        UserSetLastError(5LL, v20, v22);
        return 0LL;
      }
      if ( v87 != 353 && v87 != 424 && v87 != 563 && v87 != 648 )
        goto LABEL_17;
    }
    else if ( v87 != 208 )
    {
      switch ( v87 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_102;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v71 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) + 2LL);
          if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v71 || (*(_BYTE *)(*((_QWORD *)v10 + 5) + 28LL) & 0x20) == 0 )
            goto LABEL_17;
          UserSetLastError(5LL, v71, v87);
          break;
        case 0x4Eu:
          goto LABEL_106;
        default:
          goto LABEL_17;
      }
      goto LABEL_106;
    }
LABEL_102:
    if ( (unsigned __int8)Enforced() && *(_QWORD *)v19 != gpepCSRSS
      || *(_DWORD *)(v19 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
      && *(_DWORD *)(v19 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
    {
      goto LABEL_16;
    }
    goto LABEL_106;
  }
LABEL_16:
  LODWORD(v22) = v87;
LABEL_17:
  LODWORD(a5) = 0;
  v23 = 0;
  v79 = v88;
  if ( (unsigned int)(v22 - 992) > 8 )
    goto LABEL_18;
  *(_QWORD *)&v83 = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = &v83;
  *((_QWORD *)&v83 + 1) = v10;
  HMLockObject(v10);
  v74 = xxxDDETrackPostHook(&v87, v10, 0);
  if ( v74 == 2 )
  {
    v23 = 1;
    LODWORD(a5) = 1;
LABEL_18:
    v24 = *((_QWORD *)v10 + 2);
    DLT = DLT_POST::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v81 = DomainLockRef;
    if ( v24 + 840 == gObjDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v24 + 840));
    v30 = v87;
    v31 = *(_QWORD *)v10;
    if ( v87 == 30 || v87 - 912 <= 0xF )
    {
      v29 = *(_QWORD *)(v24 + 808);
      if ( v29 )
      {
        if ( *(_DWORD *)(v29 + 24) == v87 && *(_QWORD *)(v29 + 16) == v31 )
        {
          DelQEntry(v24 + 800, v29, 1LL);
          v30 = v87;
        }
      }
    }
    if ( v30 - 256 <= 9 )
    {
      v53 = *(_QWORD *)(v24 + 424);
      v54 = *(_QWORD *)(v53 + 96);
      if ( v54 )
        v55 = (__int128 *)(v54 + 384);
      else
        v55 = (__int128 *)gObjDummyLock;
      v56 = *(_QWORD *)(v53 + 88);
      if ( v56 )
        v57 = (__int128 *)(v56 + 384);
      else
        v57 = (__int128 *)gObjDummyLock;
      v58 = *((_QWORD *)&gpsiLock + 2);
      v59 = *(__int128 **)(v24 + 424);
      v85 = gpsiLock;
      v86 = v58;
      v60 = *((_QWORD *)v59 + 2);
      v85 = *v59;
      v61 = *v57;
      v86 = v60;
      v62 = *((_QWORD *)v57 + 2);
      v85 = v61;
      v63 = *v55;
      v86 = v62;
      v64 = *((_QWORD *)v55 + 2);
      v85 = v63;
      v86 = v64;
      PostUpdateKeyStateEvent(v59);
    }
    else if ( v30 == 576 )
    {
      if ( !HMValidateHandle(v89, 0x14u) )
        goto LABEL_71;
    }
    else if ( v30 == 281 && !HMValidateHandle(v89, 0x15u) )
    {
      goto LABEL_71;
    }
    if ( (*(_DWORD *)(v24 + 1224) & 0x20) == 0 )
      goto LABEL_26;
    if ( v24 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      v79 = v88;
      goto LABEL_26;
    }
    v78 = v89;
    v79 = v88;
    if ( (unsigned int)ProcessSuspendedPostMessage(v24, v10, v87, v88) )
    {
LABEL_26:
      v32 = 0;
      if ( *(_DWORD *)(v24 + 816) >= gUserPostMessageLimit )
      {
        UserSetLastError(1816LL, v29, v31);
        v36 = 0LL;
      }
      else
      {
        v33 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
        v36 = v33;
        if ( v33 )
        {
          memset(v33, 0, 0xA0uLL);
          v39 = 4;
          if ( *(_DWORD *)(v24 + 820) == 2 )
            v39 = 8;
          v36[25] |= v39;
          v40 = *(_QWORD **)(v24 + 808);
          if ( v40 )
          {
            *v40 = v36;
            *((_QWORD *)v36 + 1) = *(_QWORD *)(v24 + 808);
          }
          else
          {
            *(_QWORD *)(v24 + 800) = v36;
          }
          *(_QWORD *)(v24 + 808) = v36;
          v41 = *(_DWORD *)(v24 + 816) + 1;
          *(_DWORD *)(v24 + 816) = v41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqdd(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              8,
              v37,
              v38,
              v78,
              (char)v36,
              v24 + 32,
              *(_DWORD *)(v24 + 820),
              v41);
          if ( a6 && (unsigned int)IsWindowDesktopComposed(v10) )
            TransformMessageBetweenCoordinateSpaces(v87, 0, (unsigned int)&v88, (unsigned int)&v89, (__int64)v10, 0LL);
          StoreQMessage(
            (struct tagQMSG *)v36,
            v10,
            v87,
            v79,
            v89,
            0,
            0LL,
            0,
            0LL,
            0,
            v82,
            *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL),
            0LL,
            0LL);
          v42 = v87;
          if ( v87 == 576 || v87 == 281 )
          {
            v76 = _HMObjectFromHandle(v89);
            if ( v76 )
              HMChangeOwnerThread(v76, v24);
          }
          if ( (*(_DWORD *)(v24 + 480) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v24 + 440) + 6LL) |= 0x108u;
            *(_WORD *)(*(_QWORD *)(v24 + 440) + 4LL) |= 0x108u;
            if ( (*(_WORD *)(*(_QWORD *)(v24 + 440) + 10LL) & 0x108) != 0 )
              KeSetEvent(*(PRKEVENT *)(v24 + 728), 2, 0);
          }
          if ( v87 == 786 )
          {
            if ( (*(_DWORD *)(v24 + 1224) & 0x40000) != 0 )
            {
              v77 = *(struct _KEVENT **)(v24 + 1376);
              if ( v77 )
                KeSetEvent(v77, 1, 0);
            }
            SetWakeBit(v24, 0x80u);
          }
          v32 = 1;
        }
        else
        {
          UserSetLastError(8LL, v34, v35);
          v36 = 0LL;
        }
      }
      v43 = *(tagObjLock **)(v24 + 424);
      v44 = DLT_QUEUE::getDLT(v42);
      v47 = (tagDomLock *)GetDomainLockRef(v44);
      if ( v43 == (tagObjLock *)gObjDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45);
      tagDomLock::LockShared(v47);
      tagObjLock::LockExclusive(v43);
      v48 = *(_QWORD *)(v24 + 424);
      if ( v24 == *(_QWORD *)(v48 + 64) )
        *(_QWORD *)(v48 + 72) = v36;
      tagObjLock::UnLockExclusive(v43);
      tagDomLock::UnLockShared(v47);
      if ( (_DWORD)a5 )
        ThreadUnlock1(v50, v49, v51);
      if ( v32 )
        v7 = v36;
      DomainLockRef = v81;
LABEL_53:
      tagObjLock::UnLockExclusive((tagObjLock *)(v24 + 840));
      tagDomLock::UnLockShared(DomainLockRef);
      return (unsigned __int64)v7;
    }
LABEL_71:
    if ( v23 )
      ThreadUnlock1(v65, v29, v31);
    goto LABEL_53;
  }
  ThreadUnlock1(v73, v72, v75);
  return v74;
}
