/*
 * XREFs of PfFileInfoNotify @ 0x1402CCCF0
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PfSnReferenceProcessTrace @ 0x1402CD7F0 (PfSnReferenceProcessTrace.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PfLogDeleteHelper @ 0x140360158 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14036044C (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14036053C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140360618 (PfFbLogEntryComplete.c)
 *     PfSnLogPageFaultCommon @ 0x140366094 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x140366BE8 (PfSnCheckLoggingForThread.c)
 *     _wcsupr @ 0x1403E17B0 (_wcsupr.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x140675300 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x1406B5F74 (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x1406CE4C4 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x1407E5234 (PfSnLogStreamCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  PSLIST_ENTRY k; // rdx
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _SLIST_ENTRY *Next; // rbx
  int v30; // esi
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // r15d
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // edx
  const void *v39; // r12
  int v40; // ebx
  unsigned int v41; // r15d
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  unsigned int v50; // r15d
  int v51; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v53; // r12d
  struct _KTHREAD *v54; // rax
  struct _KTHREAD *v55; // r13
  __int64 SessionId; // rdx
  char *p_Process; // rsi
  __int64 v58; // r8
  struct _KTHREAD *v59; // r14
  char *v60; // rbx
  unsigned __int64 v61; // rdx
  unsigned int v62; // ecx
  int v63; // r9d
  int v64; // r9d
  int v65; // ecx
  struct _KTHREAD *v66; // rax
  unsigned int v67; // r12d
  struct _KTHREAD *v68; // rax
  __int64 i; // rsi
  struct _KTHREAD *v70; // r13
  __int64 v71; // rdx
  char *v72; // rsi
  __int64 v73; // r8
  int v74; // r9d
  char *v75; // rbx
  unsigned __int64 v76; // rdx
  unsigned int j; // ecx
  __int64 v78; // [rsp+30h] [rbp-40h] BYREF
  __int64 v79; // [rsp+38h] [rbp-38h]
  unsigned __int64 v80; // [rsp+40h] [rbp-30h]
  __int128 v81; // [rsp+48h] [rbp-28h]
  __int128 v82; // [rsp+58h] [rbp-18h]
  unsigned __int64 v83; // [rsp+68h] [rbp-8h]
  __int64 v84; // [rsp+C0h] [rbp+50h]

  v1 = *a1 == 15;
  HIDWORD(v78) = 0;
  if ( !v1 )
  {
    v30 = -1073741811;
    goto LABEL_25;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v33 = a1[1];
    if ( v33 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_140CF5E50);
      return 0;
    }
    v51 = v33 - 10;
    if ( !v51 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54648, 0LL);
      v53 = -1;
      if ( qword_140C54638 )
      {
        v30 = -1073741791;
      }
      else
      {
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
        dword_140C54668 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C54650);
        v55 = KeGetCurrentThread();
        if ( (unsigned __int64)&qword_140C54650 - qword_140C50630 >= 0x8000000000LL )
          SessionId = 0xFFFFFFFFLL;
        else
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v55->ApcState.Process);
        _disable();
        p_Process = (char *)&v55[1].Process;
        v58 = 0LL;
        while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C54650 & 0x7FFFFFFFFFFFFFFCLL)
             || !p_Process[18]
             || (*(_DWORD *)p_Process & 1) != 0
             || *((_DWORD *)p_Process + 2) != (_DWORD)SessionId )
        {
          v58 = (unsigned int)(v58 + 1);
          p_Process += 96;
          if ( (unsigned int)v58 >= 6 )
          {
            if ( (*((_DWORD *)&v55->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v55, (ULONG_PTR)&qword_140C54650, (unsigned int)SessionId, 0LL);
            _enable();
            goto LABEL_80;
          }
        }
        p_Process[18] = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, SessionId, v58);
          _disable();
        }
        v63 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        v55->AbEntrySummary |= 1 << p_Process[16];
        _enable();
        if ( v63 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v55, (__int64)&qword_140C54650, v63);
LABEL_80:
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)()))(*((_QWORD *)a1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        qword_140C54638 = *((_QWORD *)a1 + 2);
        v30 = 0;
        _InterlockedExchange64((volatile __int64 *)&stru_140C54640, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54648, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C54648);
      v59 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C54648 - qword_140C50630 < 0x8000000000LL )
        v53 = MmGetSessionIdEx((__int64)v59->ApcState.Process);
      _disable();
      v60 = (char *)&v59[1].Process;
      v61 = (unsigned __int64)&qword_140C54648 & 0x7FFFFFFFFFFFFFFCLL;
      v62 = 0;
      while ( (*(_QWORD *)v60 & 0x7FFFFFFFFFFFFFFCLL) != v61
           || !v60[18]
           || (*(_DWORD *)v60 & 1) != 0
           || *((_DWORD *)v60 + 2) != v53 )
      {
        ++v62;
        v60 += 96;
        if ( v62 >= 6 )
        {
          if ( (*((_DWORD *)&v59->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v59, (ULONG_PTR)&qword_140C54648, v53, 0LL);
          goto LABEL_92;
        }
      }
      v60[18] = 0;
      if ( *(__int64 *)v60 < 0 )
      {
        *v60 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v60, v61, 0LL);
        _disable();
      }
      v64 = *((_DWORD *)v60 + 22);
      *((_DWORD *)v60 + 22) = 0;
      v60[17] = 0;
      *(_QWORD *)v60 = 0LL;
      v59->AbEntrySummary |= 1 << v60[16];
LABEL_101:
      _enable();
      if ( v64 )
      {
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v59, (__int64)&qword_140C54648, v64);
        KeLeaveCriticalRegion();
        goto LABEL_19;
      }
LABEL_93:
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    v65 = v51 - 1;
    if ( !v65 )
    {
      v66 = KeGetCurrentThread();
      --v66->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54648, 0LL);
      v67 = -1;
      if ( qword_140C54638 )
      {
        v68 = KeGetCurrentThread();
        --v68->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54650, 0LL);
        dword_140C54668 |= 1u;
        for ( i = qword_140C54658; (__int64 *)i != &qword_140C54658; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C54650);
        v70 = KeGetCurrentThread();
        if ( (unsigned __int64)&qword_140C54650 - qword_140C50630 >= 0x8000000000LL )
          v71 = 0xFFFFFFFFLL;
        else
          v71 = (unsigned int)MmGetSessionIdEx((__int64)v70->ApcState.Process);
        _disable();
        v72 = (char *)&v70[1].Process;
        v73 = 0LL;
        do
        {
          if ( (*(_QWORD *)v72 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C54650 & 0x7FFFFFFFFFFFFFFCLL)
            && v72[18]
            && (*(_DWORD *)v72 & 1) == 0
            && *((_DWORD *)v72 + 2) == (_DWORD)v71 )
          {
            v72[18] = 0;
            if ( *(__int64 *)v72 < 0 )
            {
              *v72 |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(v72, v71, v73);
              _disable();
            }
            v74 = *((_DWORD *)v72 + 22);
            *((_DWORD *)v72 + 22) = 0;
            v72[17] = 0;
            *(_QWORD *)v72 = 0LL;
            v70->AbEntrySummary |= 1 << v72[16];
            _enable();
            if ( v74 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)v70, (__int64)&qword_140C54650, v74);
            goto LABEL_131;
          }
          v73 = (unsigned int)(v73 + 1);
          v72 += 96;
        }
        while ( (unsigned int)v73 < 6 );
        if ( (*((_DWORD *)&v70->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v70, (ULONG_PTR)&qword_140C54650, (unsigned int)v71, 0LL);
        _enable();
LABEL_131:
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease(&stru_140C54640);
        ExRundownCompleted(&stru_140C54640);
        qword_140C54638 = 0LL;
        v30 = 0;
      }
      else
      {
        v30 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54648, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C54648);
      v59 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C54648 - qword_140C50630 < 0x8000000000LL )
        v67 = MmGetSessionIdEx((__int64)v59->ApcState.Process);
      _disable();
      v75 = (char *)&v59[1].Process;
      v76 = (unsigned __int64)&qword_140C54648 & 0x7FFFFFFFFFFFFFFCLL;
      for ( j = 0; j < 6; ++j )
      {
        if ( (*(_QWORD *)v75 & 0x7FFFFFFFFFFFFFFCLL) == v76
          && v75[18]
          && (*(_DWORD *)v75 & 1) == 0
          && *((_DWORD *)v75 + 2) == v67 )
        {
          v75[18] = 0;
          if ( *(__int64 *)v75 < 0 )
          {
            *v75 |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(v75, v76, 0LL);
            _disable();
          }
          v64 = *((_DWORD *)v75 + 22);
          *((_DWORD *)v75 + 22) = 0;
          v75[17] = 0;
          *(_QWORD *)v75 = 0LL;
          v59->AbEntrySummary |= 1 << v75[16];
          goto LABEL_101;
        }
        v75 += 96;
      }
      if ( (*((_DWORD *)&v59->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v59, (ULONG_PTR)&qword_140C54648, v67, 0LL);
LABEL_92:
      _enable();
      goto LABEL_93;
    }
    if ( v65 == 1 )
    {
      if ( (dword_140C54790 & 2) == 0 )
        return 0;
      v30 = -1073741431;
    }
    else
    {
LABEL_109:
      v30 = -1073741637;
    }
LABEL_25:
    if ( (int)a1[1] <= 3 )
      ++dword_140C4EC84;
    return (unsigned int)v30;
  }
  if ( (v3 & 4) != 0 )
  {
    v34 = a1[1];
    if ( v34 == 2 )
    {
      PfSnLogStreamCreate(*((_QWORD *)a1 + 2));
    }
    else if ( v34 )
    {
      if ( v34 == 3 )
        PfSnNameRemoveAll(*((_QWORD *)a1 + 2));
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)a1 + 2));
    }
  }
  if ( (a1[2] & 1) == 0 )
    return 0;
  if ( dword_140C4EB80 >= (unsigned int)dword_140C4EB84 )
  {
    v32 = a1[1];
    v4 = v32;
    if ( v32 != 4 && v32 != 2 && v32 != 3 )
    {
LABEL_24:
      v30 = -1073741697;
      goto LABEL_25;
    }
  }
  else
  {
    v4 = a1[1];
  }
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)a1 + 2);
    v6 = v5[1] & 0xFFF;
    v7 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v8 = v5[4];
      v9 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
      v10 = v5[1];
      v11 = v5[3];
      v84 = *v5;
      v12 = PfSnReferenceProcessTrace(*(_QWORD *)(v8 + 544));
      v13 = (struct _EX_RUNDOWN_REF *)v12;
      if ( v12 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v8, v12, 0LL) )
        {
          v35 = v10 & 0xFFFFF000;
          if ( v7 )
          {
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v13, v84, v11, v35, 0) < 0 )
                break;
              v35 += 4096;
              --v9;
            }
            while ( v9 );
          }
        }
        ExReleaseRundownProtection(v13 + 45);
      }
    }
    if ( dword_140C4EB80 < (unsigned int)dword_140C4EB84 )
    {
      v14 = *((_QWORD *)a1 + 2);
      v15 = *(_QWORD *)(v14 + 32);
      v16 = *(int *)(v14 + 20);
      v17 = *(_QWORD *)(v14 + 8);
      v18 = *(_QWORD *)(v14 + 24);
      v19 = *(_QWORD *)(v15 + 544);
      v20 = (*(_DWORD *)(v15 + 1376) >> 12) & 7;
      if ( (*(_DWORD *)(v19 + 1124) & 0x100000) != 0 )
      {
        v49 = 2;
        if ( v20 < 2 )
          v49 = (*(_DWORD *)(v15 + 1376) >> 12) & 7;
        v20 = v49;
      }
      if ( v20 < dword_140C52B6C )
      {
        v30 = 0;
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 1088);
        *(_QWORD *)&v82 = v7 | (v16 << 63);
        v22 = (v21 ^ *(_QWORD *)(v19 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
        *(_QWORD *)&v81 = v18;
        *((_QWORD *)&v82 + 1) = v22;
        v83 = __PAIR64__(v21, dword_140CF5E50);
        *((_QWORD *)&v81 + 1) = v17 >> 12;
        v23 = dword_140C5451C
            + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
              + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
        if ( ExAcquireRundownProtection(&stru_140C4EAC0) )
        {
          while ( 1 )
          {
            for ( k = RtlpInterlockedPopEntrySList(&stru_140C4EAE0); !k; k = RtlpInterlockedPopEntrySList(&stru_140C4EAE0) )
            {
              k = RtlpInterlockedPopEntrySList(&stru_140C4EAD0);
              if ( k )
                break;
              v30 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140C4EB20)(&stru_140C4EAC0);
              if ( v30 < 0 )
                goto LABEL_158;
            }
            v25 = (unsigned __int64 *)*((_QWORD *)&k[1].Next + 1);
            if ( (char *)k[2].Next - (char *)v25 >= 64 )
            {
              v26 = *v25;
              v27 = v81;
              *((_DWORD *)v25 + 2) = v23;
              v28 = v82;
              *v25 = v26 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
              *((_OWORD *)v25 + 1) = v27;
              *(_QWORD *)&v27 = v83;
              *((_OWORD *)v25 + 2) = v28;
              v25[6] = v27;
              *((_QWORD *)&k[1].Next + 1) += 64LL;
              ++*((_DWORD *)&k[2].Next + 2);
              Next = k[1].Next;
              if ( (__int64)k[2].Next - *((_QWORD *)&k[1].Next + 1) < SHIDWORD(Next[5].Next) )
              {
                (*((void (__fastcall **)(PSLIST_ENTRY))&Next[6].Next + 1))(k);
              }
              else
              {
                RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], k);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
              }
              v30 = 0;
              goto LABEL_19;
            }
            if ( !*((_DWORD *)&k[2].Next + 2) )
              break;
            ((void (__fastcall *)(PSLIST_ENTRY))qword_140C4EB28)(k);
            if ( !ExAcquireRundownProtection(&stru_140C4EAC0) )
              goto LABEL_155;
          }
          RtlpInterlockedPushEntrySList(&stru_140C4EAD0, k);
          v30 = -1073741789;
LABEL_158:
          ++dword_140C4EB34;
          dword_140C4EB38 += 64;
          ExReleaseRundownProtection(&stru_140C4EAC0);
        }
        else
        {
LABEL_155:
          v30 = -1073741431;
        }
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4EC70 + 1, 1u);
      }
LABEL_19:
      if ( v30 >= 0 )
        return (unsigned int)v30;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  switch ( v4 )
  {
    case 0:
      v50 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v30 = PfFbLogEntryReserve(&stru_140C4EA40);
      if ( v30 < 0 )
        goto LABEL_25;
      MEMORY[0] = (8 * ((v50 + 65) & 0xFFFFFFF8)) | MEMORY[0] & 0x80000002 | 2;
      MEMORY[4] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      MEMORY[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      MEMORY[0x18] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      MEMORY[0x24] ^= (MEMORY[0x24] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      MEMORY[0x24] ^= (MEMORY[0x24] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF0;
      MEMORY[0x10] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      MEMORY[0x20] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      MEMORY[0x28] = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      MEMORY[0x2A] = MEMORY[0x28];
      memmove((void *)0x38, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v50);
      v42 = 56LL;
      *(_WORD *)(2LL * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 0x38) = 0;
      goto LABEL_43;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 56LL));
      return 0;
    case 2:
      v36 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v36 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v36 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C54598, v36, 1LL);
      if ( dword_140C4EB80 >= (unsigned int)dword_140C4EB84 )
        goto LABEL_24;
      v37 = *((_QWORD *)a1 + 2);
      v38 = *(_DWORD *)(v37 + 32);
      v39 = (const void *)(*(_QWORD *)(v37 + 24) + 2LL * (unsigned __int16)v38);
      v40 = HIWORD(v38) - (unsigned __int16)v38;
      v41 = 2 * v40;
      v30 = PfFbLogEntryReserve(&stru_140C4EA40);
      if ( v30 < 0 )
        goto LABEL_25;
      MEMORY[0] = MEMORY[0] & 0x80000000 | (8 * ((v41 + 53) & 0xFFFFFF8));
      MEMORY[4] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
      MEMORY[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
      MEMORY[0x18] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      MEMORY[0x20] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
      MEMORY[0x10] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      MEMORY[0x28] ^= (MEMORY[0x28] ^ *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
      MEMORY[0x28] ^= (MEMORY[0x28] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
      MEMORY[0x28] ^= (MEMORY[0x28] ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
      MEMORY[0x2A] = v40;
      memmove((void *)0x2C, v39, v41);
      v42 = 44LL;
      *(_WORD *)(2LL * MEMORY[0x2A] + 0x2C) = 0;
LABEL_43:
      wcsupr((wchar_t *)v42);
      PfFbLogEntryComplete(0LL);
      return 0;
    case 3:
      v48 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v48 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C54598, v48, 0LL);
      if ( dword_140C4EB80 >= (unsigned int)dword_140C4EB84 )
        goto LABEL_24;
      PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 44LL));
      return 0;
    case 8:
      v43 = *((_QWORD *)a1 + 2);
      HIDWORD(v78) = 0;
      v44 = *(_QWORD *)(v43 + 16);
      LODWORD(v78) = *(_DWORD *)(v43 + 4);
      v79 = *(_QWORD *)(v43 + 8);
      v80 = (2LL * (*(_DWORD *)v43 & 3)) | (v44 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v45 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v46 = 24LL;
      goto LABEL_50;
    case 13:
      v47 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( !v47[1] )
      {
        v30 = -1073741747;
        goto LABEL_25;
      }
      v79 = v47[1];
      v80 = (unsigned int)dword_140CF5E50;
      v78 = *v47;
      v45 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v46 = 31LL;
LABEL_50:
      PfLogEvent(v46, dword_140C5451C + (unsigned int)(v45 >> 10), &v78);
      v30 = 0;
      break;
    default:
      goto LABEL_109;
  }
  return (unsigned int)v30;
}
