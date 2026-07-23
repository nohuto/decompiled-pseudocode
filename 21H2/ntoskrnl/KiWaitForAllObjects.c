/*
 * XREFs of KiWaitForAllObjects @ 0x14022A600
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiWaitSatisfyAny @ 0x14022A9EC (KiWaitSatisfyAny.c)
 *     KiUnlockKobjectArray @ 0x14022AAB8 (KiUnlockKobjectArray.c)
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiCheckWaitNext @ 0x140278EE0 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x140278FD0 (KiCheckDueTimeExpired.c)
 *     KiBeginThreadWait @ 0x1402E6E80 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        ULONG_PTR *a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // esi
  unsigned int v9; // edi
  unsigned __int64 v10; // r13
  char v11; // r14
  ULONG_PTR v12; // rax
  unsigned int v13; // r9d
  ULONG_PTR *v14; // r11
  ULONG_PTR *v15; // rbx
  ULONG_PTR v16; // r10
  unsigned int v17; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rdx
  _DWORD *SchedulerAssist; // r9
  char v21; // r15
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  ULONG_PTR v24; // rsi
  __int64 v25; // rcx
  ULONG_PTR *v26; // r15
  char v27; // r8
  __int64 v28; // r10
  __int64 v29; // rcx
  ULONG_PTR *v30; // rdx
  _BYTE *v31; // rax
  int v32; // edx
  ULONG_PTR v33; // rcx
  __int64 *v34; // r11
  unsigned int v35; // r8d
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 **v38; // rdx
  unsigned __int64 v39; // r15
  unsigned int v40; // eax
  __int64 v41; // r13
  unsigned __int8 CurrentIrql; // r10
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // r8
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v48; // r8
  unsigned int v49; // edi
  unsigned __int64 v50; // rax
  char v51; // r14
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int8 v57; // cl
  _KLOCK_ENTRY *v58; // r14
  __int64 v59; // r8
  __int64 v60; // r8
  char v61; // [rsp+30h] [rbp-D0h]
  bool v62; // [rsp+30h] [rbp-D0h]
  unsigned int v64; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v65; // [rsp+38h] [rbp-C8h]
  unsigned int v66; // [rsp+40h] [rbp-C0h]
  int v67; // [rsp+44h] [rbp-BCh]
  int v68; // [rsp+48h] [rbp-B8h]
  unsigned int v69; // [rsp+4Ch] [rbp-B4h]
  __int64 v70; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v72; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v73[512]; // [rsp+68h] [rbp-98h] BYREF

  v7 = a3;
  v69 = a3;
  v9 = a1;
  v66 = a1;
  v10 = 0LL;
  v71 = a7;
  v70 = 0LL;
  v11 = a4;
  memset(v73, 0, 0x1F8uLL);
  v12 = *a2;
  v13 = 1;
  v64 = 0;
  v72 = v12;
  if ( v9 > 1 )
  {
    v14 = a2 + 1;
    v15 = &v72;
    do
    {
      v16 = *v14;
      v17 = v13;
      if ( *v15 > *v14 )
      {
        do
        {
          v43 = v17--;
          *(_QWORD *)&v73[8 * v43 - 8] = *(_QWORD *)&v73[8 * v17 - 8];
        }
        while ( v17 && *(&v72 + v17 - 1) > v16 );
      }
      ++v13;
      ++v15;
      ++v14;
      *(_QWORD *)&v73[8 * v17 - 8] = v16;
    }
    while ( v13 < v9 );
  }
  CurrentThread = KeGetCurrentThread();
  v21 = KiCheckWaitNext((_DWORD)CurrentThread, a6, 0, (unsigned int)&v70, (__int64)&v64);
  v61 = v21;
LABEL_6:
  LOBYTE(SchedulerAssist) = a5;
  LOBYTE(v19) = v11;
  LODWORD(WaitStatus) = KiBeginThreadWait(CurrentThread, v19, v7, SchedulerAssist);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = v72;
    KiAcquireKobjectLockSafe(v72);
    if ( v9 > 1 )
    {
      v25 = v9 - 1;
      v65 = v25;
      v26 = (ULONG_PTR *)v73;
      do
      {
        if ( *v26 != v24 )
        {
          v24 = *v26;
          KiAcquireKobjectLockSafe(*v26);
          v25 = v65;
        }
        ++v26;
        v65 = --v25;
      }
      while ( v25 );
      v21 = v61;
    }
    if ( v9 )
    {
      v27 = 0;
      v28 = v9;
      v29 = v71 + 17;
      v30 = a2;
      do
      {
        v31 = (_BYTE *)*v30;
        *(_BYTE *)(v29 - 1) = 0;
        *(_BYTE *)v29 = 4;
        *(_WORD *)(v29 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v29 + 7) = CurrentThread;
        *(_QWORD *)(v29 + 15) = v31;
        v29 += 48LL;
        if ( (*(_BYTE *)*v30 & 0x7F) == 2 && (*(_BYTE *)(*v30 + 48) & 2) != 0 )
          v10 |= 1LL << v27;
        ++v27;
        ++v30;
        --v28;
      }
      while ( v28 );
    }
    CurrentThread->WaitStatus = 0LL;
    v32 = 0;
    CurrentThread->AbWaitObject = 0LL;
    while ( 1 )
    {
      v33 = a2[v32];
      if ( (*(_BYTE *)v33 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v48 = *(struct _KTHREAD **)(v33 + 40);
        if ( CurrentThread == v48 && *(_BYTE *)(v33 + 2) == DpcRoutineActive && *(_DWORD *)(v33 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v72, v9);
          LOBYTE(v59) = v21;
          KiFastExitThreadWait(CurrentPrcb, CurrentThread, v59);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v33 + 4) <= 0 && (CurrentThread != v48 || *(_BYTE *)(v33 + 2) != DpcRoutineActive) )
        {
LABEL_23:
          if ( v32 == v9 )
          {
            if ( v9 )
            {
              v44 = v9;
              do
              {
                KiWaitSatisfyAny(*a2++);
                --v44;
              }
              while ( v44 );
            }
            KiUnlockKobjectArray(&v72, v9);
            WaitStatus = CurrentThread->WaitStatus;
            LOBYTE(v45) = v21;
            CurrentThread->AbWaitObject = 0LL;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v45);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v64, v70) )
          {
            KiUnlockKobjectArray(&v72, v9);
            LOBYTE(v60) = v21;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v60);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v35 = 0;
            if ( v9 )
            {
              v36 = v34;
              do
              {
                v37 = v36[4] + 8;
                v38 = *(__int64 ***)(v36[4] + 16);
                if ( *v38 != (__int64 *)v37 )
                  __fastfail(3u);
                *v36 = v37;
                ++v35;
                v36[1] = (__int64)v38;
                *v38 = v36;
                *(_QWORD *)(v37 + 8) = v36;
                v36 += 6;
              }
              while ( v35 < v9 );
            }
            KiUnlockKobjectArray(&v72, v9);
            CurrentThread->WaitBlockCount = v9;
            v39 = 0LL;
            if ( v10 )
            {
              v49 = 0;
              do
              {
                _BitScanForward64(&v50, v10);
                v51 = v50;
                v67 = v50;
                _bittestandreset64((__int64 *)&v10, (unsigned int)v50);
                v52 = KeAbPreAcquire(a2[v50], 0LL);
                v53 = v52;
                if ( !v52 )
                  break;
                v39 |= 1LL << v51;
                KeAbPreWait(v52);
                v54 = (unsigned __int128)((v53 - *(_QWORD *)(v53 - 16LL * *(unsigned __int8 *)(v53 + 24) + 800))
                                        * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v55 = v49++;
                v73[v55 + 504] = (2 * ((v54 < 0) + (v54 >> 4))) | 1;
              }
              while ( v10 );
              v9 = v66;
            }
            v40 = KiCommitThreadWait((_DWORD)CurrentThread, v71, v64, v70, 0LL);
            LODWORD(WaitStatus) = v40;
            v62 = v40 <= 0x3F || v40 - 128 <= 0x3F;
            v41 = 0LL;
            CurrentThread->AbWaitObject = 0LL;
            if ( v39 )
            {
              do
              {
                _BitScanForward64(&v56, v39);
                v57 = v73[v41 + 504] >> 1;
                v68 = v56;
                v39 &= ~(1LL << v56);
                v65 = (unsigned int)v56;
                v58 = &KeGetCurrentThread()->LockEntries[v57];
                KeAbPreAcquire(a2[(unsigned int)v56], &v58->TreeNode);
                if ( v62 )
                  v58->AcquiredByte |= 1u;
                else
                  KeAbPostReleaseEx(a2[v65], (ULONG_PTR)v58);
                v41 = (unsigned int)(v41 + 1);
              }
              while ( v39 );
              v9 = v66;
            }
            if ( (_DWORD)WaitStatus == 256 )
            {
              v10 = 0LL;
              v21 = 0;
              v61 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                v19 = SchedulerAssist[5] | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4u;
                SchedulerAssist[5] = v19;
              }
              v7 = v69;
              v11 = a4;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_6;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v33 + 4) <= 0 )
      {
        goto LABEL_23;
      }
      if ( ++v32 >= v9 )
        goto LABEL_23;
    }
  }
  return (unsigned int)WaitStatus;
}
