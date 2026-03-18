/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C0092A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00929C8 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C00967B0 (WPP_RECORDER_SF_qqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0097B60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ProcessSuspendedEventMessage @ 0x1C011CB20 (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??1?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01E04C0 (--1-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ScheduleDispatchNotification(struct tagWND *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 CurrentProcessWin32Process; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned int DLT; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  tagDomLock *DomainLockRef; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // rax
  _DWORD *v17; // rbp
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  _QWORD *v22; // rax
  int v23; // eax
  unsigned int v25; // eax
  int v26; // [rsp+20h] [rbp-78h]
  _QWORD v27[2]; // [rsp+70h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 416) == CurrentProcessWin32Process )
  {
    v6 = 0;
    if ( v1 != gptiCurrent
      && !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, *(_QWORD *)(v1 + 424) + 428LL) )
    {
      return 1LL;
    }
    v7 = *(_QWORD *)(v1 + 424);
    DLT = DLT_QUEUE::getDLT(CurrentProcessWin32Process);
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v27[0] = DomainLockRef;
    v27[1] = v7;
    if ( v7 == gObjDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)v7);
    if ( (*(_DWORD *)(v1 + 480) & 1) == 0 )
    {
      vAdjustDelegatePriority((struct tagTHREADINFO *)v1, v12, v13);
      if ( (*(_DWORD *)(v1 + 1224) & 0x20) == 0 || (v26 = 0, (unsigned int)ProcessSuspendedEventMessage(v1, 9LL, a1)) )
      {
        if ( *(_DWORD *)(v7 + 40) >= gUserPostMessageLimit )
        {
          v25 = 1816;
        }
        else
        {
          v16 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v17 = v16;
          if ( v16 )
          {
            memset(v16, 0, 0xA0uLL);
            v21 = 8;
            if ( *(_DWORD *)(v7 + 44) != 2 )
              v21 = 4;
            v17[25] |= v21;
            v22 = *(_QWORD **)(v7 + 32);
            if ( v22 )
            {
              *v22 = v17;
              *((_QWORD *)v17 + 1) = *(_QWORD *)(v7 + 32);
            }
            else
            {
              *(_QWORD *)(v7 + 24) = v17;
            }
            *(_QWORD *)(v7 + 32) = v17;
            v23 = *(_DWORD *)(v7 + 40) + 1;
            *(_DWORD *)(v7 + 40) = v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqdd(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                v18,
                v19,
                v20,
                v26,
                (char)v17,
                v7 + 24,
                *(_DWORD *)(v7 + 44),
                v23);
            StoreQMessage(
              (struct tagQMSG *)v17,
              a1,
              0x60u,
              0LL,
              0LL,
              0,
              0LL,
              9u,
              0LL,
              0,
              0LL,
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
              0LL,
              0LL);
            *((_QWORD *)v17 + 13) = v1;
            if ( (*(_DWORD *)(v1 + 480) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v1 + 440) + 6LL) |= 0x2040u;
              *(_WORD *)(*(_QWORD *)(v1 + 440) + 4LL) |= 0x2040u;
              if ( (*(_WORD *)(*(_QWORD *)(v1 + 440) + 10LL) & 0x2040) != 0 )
                KeSetEvent(*(PRKEVENT *)(v1 + 728), 2, 0);
            }
            tagObjLock::UnLockExclusive((tagObjLock *)v7);
            tagDomLock::UnLockShared(DomainLockRef);
            return 2;
          }
          v25 = 8;
        }
        UserSetLastError(v25, v14, v15);
      }
    }
    CLockExclusiveInUserCrit<DLT_QUEUE>::~CLockExclusiveInUserCrit<DLT_QUEUE>(v27);
    return v6;
  }
  UserSetLastError(5LL, v3, v5);
  return 0LL;
}
