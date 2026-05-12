/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C00060E0
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0004EF0 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C0004FB0 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0005020 (RaUnitStartIo.c)
 * Callees:
 *     RaidLogGetParm4 @ 0x1C0006670 (RaidLogGetParm4.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00069A8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006B2C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterRequestComplete @ 0x1C000DA70 (RaidAdapterRequestComplete.c)
 *     IsZonedWriteRequest @ 0x1C0014400 (IsZonedWriteRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C0029F28 (RaAllocateConcurrentChannelToken.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0033EB4 (RaidUpdateZoneIoSubmission.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 ConcurrentChannelToken; // r13
  int v8; // edx
  unsigned __int64 v9; // r12
  int v10; // r8d
  bool v11; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  char v18; // bl
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // r14
  int v24; // r9d
  char *v25; // r8
  char v26; // al
  char v27; // al
  __int64 Parm4; // rax
  __int64 v29; // r10
  __int64 v30; // rbx
  __int64 v31; // r11
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // r15d
  unsigned int i; // r14d
  __int64 v45; // rcx
  unsigned __int64 v46; // r11
  __int64 v47; // r10
  __int64 v48; // rbx
  int v49; // ecx
  int v50; // ecx
  LARGE_INTEGER v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // ebx
  unsigned int j; // r11d
  __int64 v55; // rcx
  unsigned __int64 v56; // r9
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rdx
  LARGE_INTEGER v61; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+90h] [rbp+8h] BYREF
  __int64 v64; // [rsp+98h] [rbp+10h]
  __int64 v65; // [rsp+A0h] [rbp+18h]
  __int64 v66; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v64 = 0LL;
  v4 = *(_QWORD *)(a2 + 168);
  v5 = *(_QWORD *)(a2 + 224);
  memset(&LockHandle, 0, sizeof(LockHandle));
  ConcurrentChannelToken = 0LL;
  v65 = 0LL;
  v8 = *(unsigned __int8 *)(v4 + 2);
  v9 = 0LL;
  v66 = 0LL;
  if ( (_BYTE)v8 == 40 )
  {
    v8 = *(_DWORD *)(v4 + 20);
    v10 = *(_DWORD *)(v4 + 24);
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 12);
  }
  if ( v5 )
  {
    if ( *(int *)(v5 + 684) > 0 )
    {
      if ( v8 == 32 || (v42 = 1, v8 == 19) )
        v42 = 0;
      if ( v42 )
        goto LABEL_97;
    }
    else if ( *(_BYTE *)(v5 + 692) && (v10 & 0x10) == 0 || *(_BYTE *)(v5 + 693) && (v10 & 0x80000) == 0 )
    {
      goto LABEL_97;
    }
  }
  else if ( *(_DWORD *)(a1 + 876) && (unsigned int)(v8 - 36) > 1 && (*(_BYTE *)(a2 + 17) & 8) == 0 )
  {
LABEL_97:
    *(_BYTE *)(v4 + 3) = 5;
    RaidAdapterRequestComplete(a1, a2, 1LL);
    return 0LL;
  }
  if ( StorEtwLoggingEnabled )
  {
    v11 = UseQPCTime == 0;
    goto LABEL_9;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_101:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_11;
    }
    v11 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_9:
    if ( !v11 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_11;
    }
    goto LABEL_101;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_11:
  v11 = FUAEnabled == 0;
  v13 = *(_QWORD *)(a2 + 168);
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( v11 && v13 )
  {
    if ( *(_BYTE *)(v13 + 2) != 40 )
    {
      v24 = *(unsigned __int8 *)(v13 + 2);
      v25 = (char *)(v13 + 72);
      goto LABEL_50;
    }
    v24 = *(_DWORD *)(v13 + 20);
    v25 = 0LL;
    if ( !v24 )
    {
      v43 = *(_DWORD *)(v13 + 56);
      for ( i = 0; i < v43; ++i )
      {
        v45 = *(unsigned int *)(v13 + 4LL * i + 120);
        if ( (unsigned int)v45 >= 0x80 )
        {
          v46 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v45 < (unsigned int)v46 )
          {
            v47 = v45 + v13;
            v48 = (unsigned int)v45;
            v49 = *(_DWORD *)(v45 + v13) - 64;
            if ( v49 )
            {
              v50 = v49 - 1;
              if ( v50 )
              {
                if ( v50 == 1 && v48 + 40 <= v46 )
                {
                  v25 = (char *)(v47 + 32);
                  if ( !*(_DWORD *)(v47 + 12) )
                    v25 = 0LL;
                  break;
                }
              }
              else if ( v48 + 56 <= v46 )
              {
                goto LABEL_115;
              }
            }
            else if ( v48 + 40 <= v46 )
            {
LABEL_115:
              if ( *(_BYTE *)(v47 + 10) )
                v25 = (char *)(v47 + 24);
              break;
            }
          }
        }
      }
    }
LABEL_50:
    if ( v25 )
    {
      if ( !v24 )
      {
        v26 = *v25;
        if ( *v25 == 42 || v26 == -86 || v26 == -118 )
        {
          v27 = v25[1];
          if ( (v27 & 8) != 0 )
            v25[1] = v27 & 0xF7;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 4514) )
  {
    if ( (qword_1C0068350 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(a2, v13);
      v29 = *(_QWORD *)(a2 + 160);
      v30 = Parm4;
      v31 = *(_QWORD *)(a2 + 168);
      if ( !v29 && v31 )
      {
        if ( *(_BYTE *)(v31 + 2) == 40 )
          v29 = *(_QWORD *)(v31 + 80);
        else
          v29 = *(_QWORD *)(v31 + 48);
      }
      v32 = *(_QWORD *)(a2 + 224);
      if ( v32 )
        v33 = (unsigned __int8)BYTE2(*(_DWORD *)(v32 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v32 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v32 + 96))) << 8);
      else
        v33 = 0LL;
      v34 = *(_QWORD *)(a2 + 216);
      if ( v34 && *(_DWORD *)(v34 + 5060) && *(_QWORD *)(v34 + 5064) )
      {
        v35 = *(_QWORD *)(v34 + 5064)
            + 48LL
            * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v34 + 5056)) % *(_DWORD *)(v34 + 5060));
        *(_DWORD *)v35 = 36;
        *(_QWORD *)(v35 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v35 + 8) = v29;
        *(_QWORD *)(v35 + 16) = v33;
        *(_QWORD *)(v35 + 24) = v31;
        *(_QWORD *)(v35 + 32) = v30;
      }
    }
    v14 = *(_QWORD *)(a2 + 160);
    if ( v14 )
      *(_BYTE *)(v14 + 141) = -82;
    v15 = *(_QWORD *)(a2 + 216);
    v16 = *(_QWORD *)(a2 + 168);
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v15 + 536) + 128LL);
    if ( v17 )
      v18 = v17(*(_QWORD *)(v15 + 544) + 16LL, v16);
    else
      v18 = 1;
    if ( StorEtwLoggingEnabled && ((byte_1C0068841 & 2) != 0 || (byte_1C0068843 & 2) != 0) )
    {
      if ( UseQPCTime )
        v51 = KeQueryPerformanceCounter(0LL);
      else
        v51.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v51;
    }
    if ( !v18 )
      return 0LL;
    if ( *(int *)(a1 + 4808) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 704) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 696), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1, v16);
    }
    else if ( *(_DWORD *)(a1 + 4808) < KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      ConcurrentChannelToken = RaAllocateConcurrentChannelToken(a1);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(ConcurrentChannelToken + 20);
    }
    else
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
  }
  if ( (qword_1C0068350 & 4) != 0 )
  {
    v36 = *(_QWORD *)(a2 + 224);
    if ( v36 )
      v9 = (unsigned __int8)BYTE2(*(_DWORD *)(v36 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v36 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v36 + 96))) << 8);
    v37 = RaidLogGetParm4(a2, v13);
    v38 = *(_QWORD *)(a2 + 160);
    v39 = *(_QWORD *)(a2 + 168);
    v66 = v37;
    v65 = v39;
    if ( v38 )
    {
      v64 = v38;
    }
    else if ( v39 )
    {
      if ( *(_BYTE *)(v39 + 2) == 40 )
        v41 = *(_QWORD *)(v39 + 80);
      else
        v41 = *(_QWORD *)(v39 + 48);
      v64 = v41;
    }
  }
  v19 = *(_QWORD *)(a2 + 224);
  if ( v19 && *(_BYTE *)(v19 + 129) )
  {
    v52 = *(_QWORD *)(a2 + 168);
    if ( *(_BYTE *)(v52 + 2) == 40 && !*(_DWORD *)(v52 + 20) )
    {
      v53 = *(_DWORD *)(v52 + 56);
      for ( j = 0; j < v53; ++j )
      {
        v55 = *(unsigned int *)(v52 + 4LL * j + 120);
        if ( (unsigned int)v55 >= 0x80 )
        {
          v56 = *(unsigned int *)(v52 + 16);
          if ( (unsigned int)v55 < (unsigned int)v56 )
          {
            v57 = (unsigned int)v55;
            v58 = *(_DWORD *)(v52 + v55) - 64;
            if ( v58 )
            {
              v59 = v58 - 1;
              if ( v59 )
              {
                if ( v59 == 1 && v57 + 40 <= v56 )
                  break;
              }
              else if ( v57 + 56 <= v56 )
              {
                break;
              }
            }
            else if ( v57 + 40 <= v56 )
            {
              break;
            }
          }
        }
      }
    }
    v63 = 0;
    if ( (unsigned __int8)IsZonedWriteRequest(v19, 0LL, a2, &v63) )
    {
      RtlInterlockedClearBitRun(*(_QWORD *)(a2 + 224) + 3296LL, v63, 1LL);
      RaidUpdateZoneIoSubmission(*(_QWORD *)(a2 + 224) + 656LL, v60, a2);
    }
  }
  v20 = *(_QWORD *)(a2 + 160);
  if ( v20 )
    *(_BYTE *)(v20 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v21 = MEMORY[0xFFFFF78000000014];
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 536) + 16LL))(
          *(_QWORD *)(a1 + 544) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( StorEtwLoggingEnabled && ((byte_1C0068841 & 2) != 0 || (byte_1C0068843 & 2) != 0) )
  {
    if ( UseQPCTime )
      v61 = KeQueryPerformanceCounter(0LL);
    else
      v61.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v61;
  }
  if ( *(_BYTE *)(a1 + 4514) )
  {
    if ( *(int *)(a1 + 4808) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 704) )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        RaidAdapterReleaseInterruptLock(a1, LOBYTE(LockHandle.LockQueue.Next));
    }
    else if ( ConcurrentChannelToken )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 4816) + ((unsigned __int64)*(unsigned int *)(ConcurrentChannelToken + 16) << 6)),
        (PSLIST_ENTRY)ConcurrentChannelToken);
    }
  }
  if ( (qword_1C0068350 & 4) != 0 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v40 = *(_QWORD *)(a1 + 5064)
        + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5056)) % *(_DWORD *)(a1 + 5060));
    *(_DWORD *)v40 = 0;
    if ( v21 )
      *(_QWORD *)(v40 + 40) = v21;
    else
      *(_QWORD *)(v40 + 40) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v40 + 8) = v64;
    *(_QWORD *)(v40 + 24) = v65;
    *(_QWORD *)(v40 + 32) = v66;
    *(_QWORD *)(v40 + 16) = v9;
  }
  if ( !v22 )
    return (unsigned int)-1073741823;
  return v2;
}
