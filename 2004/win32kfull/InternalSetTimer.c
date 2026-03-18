/*
 * XREFs of InternalSetTimer @ 0x1C0089420
 * Callers:
 *     _SetSystemTimer @ 0x1C006024C (_SetSystemTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0089050 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C0089280 (NtUserSetTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0108D64 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     SetRITTimer @ 0x1C010A3A0 (SetRITTimer.c)
 *     xxxSoundSentry @ 0x1C014FB00 (xxxSoundSentry.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     _SetTimer @ 0x1C01EB858 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C023639C (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02363F8 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02377D4 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C024926C (UserSetTimer.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00C0FFC (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C0105AE8 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0108984 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8BC4 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rbp
  unsigned int v24; // esi
  _QWORD **v25; // r14
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v29; // rax
  int v30; // ecx
  int v31; // r8d
  unsigned int v32; // edx
  _QWORD *v33; // rdx
  char *v34; // rdx
  char *v35; // rcx
  char **v36; // rax
  _QWORD *v37; // rdi
  _DWORD *v38; // r14
  _QWORD *v39; // rsi
  int v40; // ecx
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // r9d
  unsigned int v44; // edx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  int v47; // r8d
  unsigned int v48; // r10d
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // edx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-58h]
  _QWORD *v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-40h]
  _QWORD v61[2]; // [rsp+40h] [rbp-38h] BYREF

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
  v57 = 0LL;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v17);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
    {
LABEL_16:
      v23 = gptiRit;
      goto LABEL_17;
    }
    v11 = 0LL;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v57 = *ThreadWin32Thread;
  }
  v23 = v11;
  if ( !v11 || (a6 & 4) != 0 )
    goto LABEL_16;
  if ( a1 )
    v23 = *(_QWORD *)(a1 + 16);
LABEL_17:
  if ( a5 == -1 || !a5 && v23 && (v20 = 0x800000000LL, (*(_QWORD *)(v23 + 640) & 0x800000000LL) != 0) )
    v24 = a6 & 0xFFFFFDFF;
  else
    v24 = a6 | 0x200;
  v60 = a1 >> 8;
  v25 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v26 = *v25;
  if ( *v25 == v25 )
  {
LABEL_32:
    if ( v23 && (*(_DWORD *)(v23 + 480) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
    }
    else
    {
      LOBYTE(v21) = 16;
      v29 = (_QWORD *)HMAllocObject(v23, 0LL, v21);
      v58 = v29;
      v27 = v29;
      if ( v29 )
      {
        v29[11] = 0LL;
        if ( a1 )
        {
          v29[12] = a2;
        }
        else
        {
          v30 = g_cTimerId;
          v31 = g_cTimerId;
          while ( 1 )
          {
            g_cTimerId = --v30;
            v32 = v30;
            if ( v30 < 0 )
            {
              v30 = 32511;
              g_cTimerId = 32511;
              v32 = 32511;
            }
            if ( !_bittestandset(gTimerId, v32) )
              break;
            if ( v32 == v31 )
            {
              UserSetLastError(8LL);
              HMFreeObject(v27);
              return 0LL;
            }
          }
          v29[12] = (int)(v32 + 256);
        }
        v33 = v29 + 9;
        if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead
          || (*v33 = gtmrListHead,
              v29[10] = gtmrListHead,
              *(_QWORD *)(gtmrListHead + 8LL) = v33,
              gtmrListHead = v29 + 9,
              v34 = (char *)(v29 + 14),
              v35 = (char *)&gTimerHashTable + 16 * ((*((_DWORD *)v29 + 24) + (int)v60) & 0x3F),
              v36 = (char **)*((_QWORD *)v35 + 1),
              *v36 != v35) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v34 = v35;
        v27[15] = v36;
        *v36 = v34;
        *((_QWORD *)v35 + 1) = v34;
        goto LABEL_56;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v27 = v26 - 14;
    if ( *(v26 - 3) == a1 && v27[12] == a2 )
    {
      v20 = *((unsigned int *)v27 + 12);
      if ( (((unsigned __int8)v24 ^ *((_BYTE *)v27 + 48)) & 6) == 0 )
      {
        if ( (v20 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
        v20 = v27[3];
        if ( CurrentProcessWin32Process == *(_QWORD *)(v20 + 416)
          || !a1 && (((unsigned __int8)v24 ^ *((_BYTE *)v27 + 48)) & 4) == 0 )
        {
          break;
        }
      }
    }
    v26 = (_QWORD *)*v26;
    if ( v26 == v25 )
      goto LABEL_32;
  }
  v58 = v26 - 14;
  if ( (v27[6] & 1) != 0 )
    DecTimerCount((struct tagTIMER *)(v26 - 14));
  if ( v23 && v27[3] != v23 && (*(_DWORD *)(v23 + 480) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
LABEL_56:
  v61[1] = a1;
  v61[0] = v27 + 11;
  HMAssignmentLock(v61);
  *((_DWORD *)v27 + 10) = v10;
  *((_DWORD *)v27 + 13) = v10;
  v27[4] = a4;
  v27[13] = 0LL;
  if ( (v24 & 0x200) != 0 )
    *((_DWORD *)v27 + 11) = a5;
  v37 = v58;
  *((_DWORD *)v58 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v24 & 0x80u) == 0 )
  {
    if ( (v24 & 0x100) != 0 )
      v27[13] = v57;
  }
  else
  {
    v24 &= ~0x80u;
  }
  v38 = v58 + 6;
  *((_DWORD *)v58 + 12) = v24 | 8;
  v58[3] = v23;
  v39 = v58 + 3;
  v40 = *(_DWORD *)(*(_QWORD *)(v23 + 416) + 1036LL);
  if ( v40 )
  {
    v41 = *((_DWORD *)v27 + 13) + v40;
    v42 = 0x7FFFFFFF;
    if ( v41 < 0x7FFFFFFF )
      v42 = v41;
    *((_DWORD *)v27 + 13) = v42;
  }
  EtwTraceInternalSetTimer(v58);
  if ( gbRITAlerted )
    goto LABEL_101;
  if ( gbTimersProcActive )
  {
    gbRITRescan = 1;
    goto LABEL_101;
  }
  v37 = v58;
  v43 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
  if ( (*v38 & 0x200) != 0 )
  {
    v44 = *((_DWORD *)v58 + 11);
    v45 = gCurrentTimerCoalescingTolerance;
    v46 = gCurrentTimerCoalescingTolerance;
    v47 = *((_DWORD *)v27 + 13);
    if ( v44 > gCurrentTimerCoalescingTolerance )
      v46 = *((_DWORD *)v58 + 11);
    if ( v47 + v46 >= 0x7FFFFFFF )
    {
      v48 = 0x7FFFFFFF;
    }
    else
    {
      if ( v44 > gCurrentTimerCoalescingTolerance )
        v45 = *((_DWORD *)v58 + 11);
      v48 = v47 + v45;
    }
    v49 = *(_DWORD *)(*(_QWORD *)(*v39 + 416LL) + 1040LL);
    if ( v49 )
    {
      v50 = v48 + v49;
      v48 = 0x7FFFFFFF;
      if ( v50 < 0x7FFFFFFF )
        v48 = v50;
    }
  }
  else
  {
    v48 = *((_DWORD *)v27 + 13);
  }
  v51 = gdmsNextTimer;
  if ( v43 <= gdmsNextTimer )
  {
    v52 = guNextCoalescableTimerDue;
    if ( v43 <= guNextCoalescableTimerDue && !*(_DWORD *)(*(_QWORD *)(*v39 + 416LL) + 1044LL) )
    {
      v53 = v48 + v43;
      if ( v48 + v43 >= v48 )
      {
        *v38 &= ~8u;
        *((_DWORD *)v27 + 13) += v43;
        v54 = *((_DWORD *)v27 + 13);
        if ( v51 > v54 )
          goto LABEL_88;
        if ( v52 <= v53 )
          goto LABEL_92;
        if ( v54 < v51 )
        {
LABEL_88:
          v51 = *((_DWORD *)v27 + 13);
          gdmsNextTimer = v51;
        }
        if ( v52 >= v53 )
        {
          v52 = v48 + v43;
          guNextCoalescableTimerDue = v48 + v43;
        }
        SetDelayableTimer(v51 - v43, v52 - v43);
      }
    }
  }
LABEL_92:
  if ( (*v38 & 8) != 0 )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)&v59,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v59);
      result = v58[12];
      gbRITAlerted = 1;
      if ( !result )
        return 1LL;
    }
    else
    {
      ExReleasePushLockSharedEx(v59, 0LL);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, v55);
      result = v58[12];
      if ( !result )
        return 1LL;
    }
    return result;
  }
LABEL_101:
  result = v37[12];
  if ( !result )
    return 1LL;
  return result;
}
