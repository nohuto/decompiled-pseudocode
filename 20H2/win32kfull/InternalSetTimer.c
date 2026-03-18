/*
 * XREFs of InternalSetTimer @ 0x1C00CCA00
 * Callers:
 *     _SetSystemTimer @ 0x1C0017B98 (_SetSystemTimer.c)
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00CC630 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C00CC860 (NtUserSetTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0109D84 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C015B154 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     _SetTimer @ 0x1C01EABE8 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C023550C (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235568 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236944 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0247CBC (UserSetTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00C96F8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C00CB7D0 (-SetDelayableTimer@@YAXKK@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01099A4 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D7F04 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rbp
  unsigned int v25; // esi
  _QWORD **v26; // r14
  _QWORD *v27; // rdi
  _QWORD *v28; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v30; // rax
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // edx
  _QWORD *v34; // rdx
  char *v35; // rdx
  char *v36; // rcx
  char **v37; // rax
  _QWORD *v38; // rdi
  _DWORD *v39; // r14
  _QWORD *v40; // rsi
  int v41; // ecx
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // r9d
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // r8d
  unsigned int v49; // r10d
  int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // r8d
  unsigned int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // [rsp+20h] [rbp-58h]
  _QWORD *v61; // [rsp+28h] [rbp-50h]
  __int64 v62; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-40h]
  _QWORD v64[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( gbCleanupInitiated )
  {
    UserSetLastError(641LL);
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v60 = 0LL;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v17);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
    {
LABEL_16:
      v24 = gptiRit;
      goto LABEL_17;
    }
    v11 = 0LL;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v60 = *ThreadWin32Thread;
  }
  v24 = v11;
  if ( !v11 || (a6 & 4) != 0 )
    goto LABEL_16;
  if ( a1 )
    v24 = *(_QWORD *)(a1 + 16);
LABEL_17:
  if ( a5 == -1 || !a5 && v24 && (v20 = 0x800000000LL, (*(_QWORD *)(v24 + 648) & 0x800000000LL) != 0) )
    v25 = a6 & 0xFFFFFDFF;
  else
    v25 = a6 | 0x200;
  v63 = a1 >> 8;
  v26 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v27 = *v26;
  if ( *v26 == v26 )
  {
LABEL_32:
    if ( v24 && (*(_DWORD *)(v24 + 488) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
    }
    else
    {
      LOBYTE(v21) = 16;
      v30 = (_QWORD *)HMAllocObject(v24, 0LL, v21);
      v61 = v30;
      v28 = v30;
      if ( v30 )
      {
        v30[11] = 0LL;
        if ( a1 )
        {
          v30[12] = a2;
        }
        else
        {
          v31 = g_cTimerId;
          v32 = g_cTimerId;
          while ( 1 )
          {
            g_cTimerId = --v31;
            v33 = v31;
            if ( v31 < 0 )
            {
              v31 = 32511;
              g_cTimerId = 32511;
              v33 = 32511;
            }
            if ( !_bittestandset(gTimerId, v33) )
              break;
            if ( v33 == v32 )
            {
              UserSetLastError(8LL);
              HMFreeObject(v28);
              return 0LL;
            }
          }
          v30[12] = (int)(v33 + 256);
        }
        v34 = v30 + 9;
        if ( *(_QWORD *)(gtmrListHead[0] + 8LL) != gtmrListHead[0]
          || (*v34 = gtmrListHead[0],
              v30[10] = gtmrListHead[0],
              *(_QWORD *)(gtmrListHead[0] + 8LL) = v34,
              gtmrListHead[0] = v30 + 9,
              v35 = (char *)(v30 + 14),
              v36 = (char *)&gTimerHashTable + 16 * ((*((_DWORD *)v30 + 24) + (int)v63) & 0x3F),
              v37 = (char **)*((_QWORD *)v36 + 1),
              *v37 != v36) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v35 = v36;
        v28[15] = v37;
        *v37 = v35;
        *((_QWORD *)v36 + 1) = v35;
        goto LABEL_56;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v28 = v27 - 14;
    if ( *(v27 - 3) == a1 && v28[12] == a2 )
    {
      v20 = *((unsigned int *)v28 + 12);
      if ( (((unsigned __int8)v25 ^ *((_BYTE *)v28 + 48)) & 6) == 0 )
      {
        if ( (v20 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20, v19, v21);
        v20 = v28[3];
        if ( CurrentProcessWin32Process == *(_QWORD *)(v20 + 424)
          || !a1 && (((unsigned __int8)v25 ^ *((_BYTE *)v28 + 48)) & 4) == 0 )
        {
          break;
        }
      }
    }
    v27 = (_QWORD *)*v27;
    if ( v27 == v26 )
      goto LABEL_32;
  }
  v61 = v27 - 14;
  if ( (v28[6] & 1) != 0 )
    DecTimerCount((struct tagTIMER *)(v27 - 14));
  if ( v24 && v28[3] != v24 && (*(_DWORD *)(v24 + 488) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
LABEL_56:
  v64[1] = a1;
  v64[0] = v28 + 11;
  HMAssignmentLock(v64);
  *((_DWORD *)v28 + 10) = v10;
  *((_DWORD *)v28 + 13) = v10;
  v28[4] = a4;
  v28[13] = 0LL;
  if ( (v25 & 0x200) != 0 )
    *((_DWORD *)v28 + 11) = a5;
  v38 = v61;
  *((_DWORD *)v61 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v25 & 0x80u) == 0 )
  {
    if ( (v25 & 0x100) != 0 )
      v28[13] = v60;
  }
  else
  {
    v25 &= ~0x80u;
  }
  v39 = v61 + 6;
  *((_DWORD *)v61 + 12) = v25 | 8;
  v61[3] = v24;
  v40 = v61 + 3;
  v41 = *(_DWORD *)(*(_QWORD *)(v24 + 424) + 1036LL);
  if ( v41 )
  {
    v42 = *((_DWORD *)v28 + 13) + v41;
    v43 = 0x7FFFFFFF;
    if ( v42 < 0x7FFFFFFF )
      v43 = v42;
    *((_DWORD *)v28 + 13) = v43;
  }
  EtwTraceInternalSetTimer(v61);
  if ( gbRITAlerted )
    goto LABEL_101;
  if ( gbTimersProcActive )
  {
    gbRITRescan = 1;
    goto LABEL_101;
  }
  v38 = v61;
  v44 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
  if ( (*v39 & 0x200) != 0 )
  {
    v45 = *((_DWORD *)v61 + 11);
    v46 = gCurrentTimerCoalescingTolerance;
    v47 = gCurrentTimerCoalescingTolerance;
    v48 = *((_DWORD *)v28 + 13);
    if ( v45 > gCurrentTimerCoalescingTolerance )
      v47 = *((_DWORD *)v61 + 11);
    if ( v48 + v47 >= 0x7FFFFFFF )
    {
      v49 = 0x7FFFFFFF;
    }
    else
    {
      if ( v45 > gCurrentTimerCoalescingTolerance )
        v46 = *((_DWORD *)v61 + 11);
      v49 = v48 + v46;
    }
    v50 = *(_DWORD *)(*(_QWORD *)(*v40 + 424LL) + 1040LL);
    if ( v50 )
    {
      v51 = v49 + v50;
      v49 = 0x7FFFFFFF;
      if ( v51 < 0x7FFFFFFF )
        v49 = v51;
    }
  }
  else
  {
    v49 = *((_DWORD *)v28 + 13);
  }
  v52 = gdmsNextTimer;
  if ( v44 <= gdmsNextTimer )
  {
    v53 = guNextCoalescableTimerDue;
    if ( v44 <= guNextCoalescableTimerDue && !*(_DWORD *)(*(_QWORD *)(*v40 + 424LL) + 1044LL) )
    {
      v54 = v49 + v44;
      if ( v49 + v44 >= v49 )
      {
        *v39 &= ~8u;
        *((_DWORD *)v28 + 13) += v44;
        v55 = *((_DWORD *)v28 + 13);
        if ( v52 > v55 )
          goto LABEL_88;
        if ( v53 <= v54 )
          goto LABEL_92;
        if ( v55 < v52 )
        {
LABEL_88:
          v52 = *((_DWORD *)v28 + 13);
          gdmsNextTimer = v52;
        }
        if ( v53 >= v54 )
        {
          v53 = v49 + v44;
          guNextCoalescableTimerDue = v49 + v44;
        }
        SetDelayableTimer(v52 - v44, v53 - v44);
      }
    }
  }
LABEL_92:
  if ( (*v39 & 8) != 0 )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)&v62,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v62);
      result = v61[12];
      gbRITAlerted = 1;
      if ( !result )
        return 1LL;
    }
    else
    {
      ExReleasePushLockSharedEx(v62, 0LL);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58, v59);
      result = v61[12];
      if ( !result )
        return 1LL;
    }
    return result;
  }
LABEL_101:
  result = v38[12];
  if ( !result )
    return 1LL;
  return result;
}
