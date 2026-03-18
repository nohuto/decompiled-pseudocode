/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0
 * Callers:
 *     _PostTransformableMessage @ 0x1C001A3A8 (_PostTransformableMessage.c)
 *     _PostMessageExtended @ 0x1C004EE90 (_PostMessageExtended.c)
 *     NtUserPostMessage @ 0x1C004F200 (NtUserPostMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BF1B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0258054 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0052480 (WPP_RECORDER_SF_qqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0055CC0 (TransformMessageBetweenCoordinateSpaces.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _PostThreadMessage @ 0x1C00BE598 (_PostThreadMessage.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     DelQEntry @ 0x1C00F6B9C (DelQEntry.c)
 *     ProcessSuspendedPostMessage @ 0x1C011DC94 (ProcessSuspendedPostMessage.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     IsMiPEnabledForWindow @ 0x1C01E1718 (IsMiPEnabledForWindow.c)
 *     xxxDDETrackPostHook @ 0x1C021CC3C (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        unsigned int a2,
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 CurrentProcessWin32Process; // r14
  unsigned int v23; // r8d
  int v24; // r12d
  __int64 v25; // rbx
  unsigned int DLT; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  tagDomLock *DomainLockRef; // r14
  __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // r12d
  _DWORD *v35; // rax
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
  __int64 v47; // r8
  __int64 v48; // r9
  tagDomLock *v49; // r15
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  __int128 *v57; // rdx
  __int64 v58; // rax
  __int128 *v59; // rcx
  __int64 v60; // xmm1_8
  __int128 *v61; // rax
  __int64 v62; // xmm1_8
  __int128 v63; // xmm0
  __int64 v64; // xmm1_8
  __int128 v65; // xmm0
  __int64 v66; // xmm1_8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v74; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // ebx
  __int64 v79; // r8
  __int64 v80; // rax
  struct _KEVENT *v81; // rcx
  int v82; // [rsp+20h] [rbp-89h]
  unsigned __int64 v83; // [rsp+70h] [rbp-39h]
  __int64 v84; // [rsp+78h] [rbp-31h] BYREF
  tagDomLock *v85; // [rsp+80h] [rbp-29h]
  struct tagINPUT_MESSAGE_SOURCE *v86; // [rsp+88h] [rbp-21h]
  __int128 v87; // [rsp+90h] [rbp-19h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-9h]
  __int128 v89; // [rsp+A8h] [rbp-1h]
  __int64 v90; // [rsp+B8h] [rbp+Fh]
  unsigned int v91; // [rsp+108h] [rbp+5Fh] BYREF
  unsigned __int64 v92; // [rsp+110h] [rbp+67h] BYREF
  __int64 v93; // [rsp+118h] [rbp+6Fh] BYREF

  v93 = (__int64)a4;
  v92 = a3;
  v91 = a2;
  v6 = a5;
  v7 = 0LL;
  v88 = 0LL;
  v84 = 0LL;
  v9 = a2;
  v10 = (struct tagWND *)a1;
  v87 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v84);
    a4 = (struct _LARGE_STRING *)v93;
    v9 = v91;
  }
  v11 = (struct tagINPUT_MESSAGE_SOURCE *)&v84;
  if ( v6 )
    v11 = v6;
  v86 = v11;
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
    UserSetLastError(1159LL);
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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v70, v71, a4);
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
        CurrentThreadProcess = PsGetCurrentThreadProcess(v74),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v10 )
    return (unsigned int)PostThreadMessage(v13, v91, v92) != 0;
  v21 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18, v20);
  if ( v21 != CurrentProcessWin32Process )
  {
    v23 = v91;
    if ( v91 > 0x288 )
      goto LABEL_17;
    if ( v91 > 0xD0 )
    {
      if ( v91 == 272 )
      {
LABEL_106:
        UserSetLastError(5LL);
        return 0LL;
      }
      if ( v91 != 353 && v91 != 424 && v91 != 563 && v91 != 648 )
        goto LABEL_17;
    }
    else if ( v91 != 208 )
    {
      switch ( v91 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_102;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          if ( *(_WORD *)(gpsi + 870LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)v10 + 5) + 28LL) & 0x20) == 0 )
          {
            goto LABEL_17;
          }
          UserSetLastError(5LL);
          break;
        case 0x4Eu:
          goto LABEL_106;
        default:
          goto LABEL_17;
      }
      goto LABEL_106;
    }
LABEL_102:
    if ( (unsigned __int8)Enforced() && *(_QWORD *)v21 != gpepCSRSS
      || *(_DWORD *)(v21 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
      && *(_DWORD *)(v21 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
    {
      goto LABEL_16;
    }
    goto LABEL_106;
  }
LABEL_16:
  v23 = v91;
LABEL_17:
  LODWORD(a5) = 0;
  v24 = 0;
  v83 = v92;
  if ( v23 - 992 > 8 )
    goto LABEL_18;
  *(_QWORD *)&v87 = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = &v87;
  *((_QWORD *)&v87 + 1) = v10;
  HMLockObject(v10);
  v78 = xxxDDETrackPostHook(&v91, v10, 0);
  if ( v78 == 2 )
  {
    v24 = 1;
    LODWORD(a5) = 1;
LABEL_18:
    v25 = *((_QWORD *)v10 + 2);
    DLT = DLT_POST::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v85 = DomainLockRef;
    if ( v25 + 848 == gObjDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v25 + 848));
    v33 = v91;
    if ( v91 == 30 || v91 - 912 <= 0xF )
    {
      v32 = *(_QWORD *)(v25 + 816);
      if ( v32 )
      {
        if ( *(_DWORD *)(v32 + 24) == v91 && *(_QWORD *)(v32 + 16) == *(_QWORD *)v10 )
        {
          DelQEntry(v25 + 808, v32, 1LL);
          v33 = v91;
        }
      }
    }
    if ( v33 - 256 <= 9 )
    {
      v55 = *(_QWORD *)(v25 + 432);
      v56 = *(_QWORD *)(v55 + 96);
      if ( v56 )
        v57 = (__int128 *)(v56 + 392);
      else
        v57 = (__int128 *)gObjDummyLock;
      v58 = *(_QWORD *)(v55 + 88);
      if ( v58 )
        v59 = (__int128 *)(v58 + 392);
      else
        v59 = (__int128 *)gObjDummyLock;
      v60 = *((_QWORD *)&gpsiLock + 2);
      v61 = *(__int128 **)(v25 + 432);
      v89 = gpsiLock;
      v90 = v60;
      v62 = *((_QWORD *)v61 + 2);
      v89 = *v61;
      v63 = *v59;
      v90 = v62;
      v64 = *((_QWORD *)v59 + 2);
      v89 = v63;
      v65 = *v57;
      v90 = v64;
      v66 = *((_QWORD *)v57 + 2);
      v89 = v65;
      v90 = v66;
      PostUpdateKeyStateEvent(v61);
    }
    else if ( v33 == 576 )
    {
      LOBYTE(v32) = 20;
      if ( !HMValidateHandle(v93, v32) )
        goto LABEL_71;
    }
    else if ( v33 == 281 )
    {
      LOBYTE(v32) = 21;
      if ( !HMValidateHandle(v93, v32) )
        goto LABEL_71;
    }
    if ( (*(_DWORD *)(v25 + 1232) & 0x20) == 0 )
      goto LABEL_26;
    if ( v25 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      v83 = v92;
      goto LABEL_26;
    }
    v82 = v93;
    v83 = v92;
    if ( (unsigned int)ProcessSuspendedPostMessage(v25, v10, v91, v92) )
    {
LABEL_26:
      v34 = 0;
      if ( *(_DWORD *)(v25 + 824) >= gUserPostMessageLimit )
      {
        UserSetLastError(1816LL);
        v36 = 0LL;
      }
      else
      {
        v35 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
        v36 = v35;
        if ( v35 )
        {
          memset(v35, 0, 0xA0uLL);
          v39 = 4;
          if ( *(_DWORD *)(v25 + 828) == 2 )
            v39 = 8;
          v36[25] |= v39;
          v40 = *(_QWORD **)(v25 + 816);
          if ( v40 )
          {
            *v40 = v36;
            *((_QWORD *)v36 + 1) = *(_QWORD *)(v25 + 816);
          }
          else
          {
            *(_QWORD *)(v25 + 808) = v36;
          }
          *(_QWORD *)(v25 + 816) = v36;
          v41 = *(_DWORD *)(v25 + 824) + 1;
          *(_DWORD *)(v25 + 824) = v41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqdd(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              8,
              v37,
              v38,
              v82,
              (char)v36,
              v25 + 40,
              *(_DWORD *)(v25 + 828),
              v41);
          if ( a6 && (unsigned int)IsWindowDesktopComposed(v10) )
            TransformMessageBetweenCoordinateSpaces(v91, 0, (unsigned int)&v92, (unsigned int)&v93, (__int64)v10, 0LL);
          StoreQMessage(
            (struct tagQMSG *)v36,
            v10,
            v91,
            v83,
            v93,
            0,
            0LL,
            0,
            0LL,
            0,
            v86,
            *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL),
            0LL,
            0LL);
          v42 = v91;
          if ( v91 == 576 || v91 == 281 )
          {
            v80 = _HMObjectFromHandle(v93);
            if ( v80 )
              HMChangeOwnerThread(v80, v25);
          }
          if ( (*(_DWORD *)(v25 + 488) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v25 + 448) + 6LL) |= 0x108u;
            *(_WORD *)(*(_QWORD *)(v25 + 448) + 4LL) |= 0x108u;
            if ( (*(_WORD *)(*(_QWORD *)(v25 + 448) + 10LL) & 0x108) != 0 )
              KeSetEvent(*(PRKEVENT *)(v25 + 736), 2, 0);
          }
          if ( v91 == 786 )
          {
            if ( (*(_DWORD *)(v25 + 1232) & 0x40000) != 0 )
            {
              v81 = *(struct _KEVENT **)(v25 + 1384);
              if ( v81 )
                KeSetEvent(v81, 1, 0);
            }
            SetWakeBit(v25, 128LL);
          }
          v34 = 1;
        }
        else
        {
          UserSetLastError(8LL);
          v36 = 0LL;
        }
      }
      v43 = *(tagObjLock **)(v25 + 432);
      v44 = DLT_QUEUE::getDLT(v42);
      v49 = (tagDomLock *)GetDomainLockRef(v44);
      if ( v43 == (tagObjLock *)gObjDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
      tagDomLock::LockShared(v49);
      tagObjLock::LockExclusive(v43);
      v50 = *(_QWORD *)(v25 + 432);
      if ( v25 == *(_QWORD *)(v50 + 64) )
        *(_QWORD *)(v50 + 72) = v36;
      tagObjLock::UnLockExclusive(v43);
      tagDomLock::UnLockShared(v49);
      if ( (_DWORD)a5 )
        ThreadUnlock1(v52, v51, v53);
      if ( v34 )
        v7 = v36;
      DomainLockRef = v85;
LABEL_53:
      tagObjLock::UnLockExclusive((tagObjLock *)(v25 + 848));
      tagDomLock::UnLockShared(DomainLockRef);
      return (unsigned __int64)v7;
    }
LABEL_71:
    if ( v24 )
      ThreadUnlock1(v68, v67, v69);
    goto LABEL_53;
  }
  ThreadUnlock1(v77, v76, v79);
  return v78;
}
