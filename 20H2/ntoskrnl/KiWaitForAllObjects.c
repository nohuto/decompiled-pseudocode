/*
 * XREFs of KiWaitForAllObjects @ 0x1402F5424
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     KiBeginThreadWait @ 0x14028EC70 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402D8158 (KiFastExitThreadWait.c)
 *     KiCheckWaitNext @ 0x1402DA930 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x1402DAA20 (KiCheckDueTimeExpired.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyAny @ 0x1402F5810 (KiWaitSatisfyAny.c)
 *     KiUnlockKobjectArray @ 0x1402F5D8C (KiUnlockKobjectArray.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        ULONG_PTR *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  int v7; // esi
  unsigned int v9; // edi
  unsigned __int64 v10; // r13
  char v11; // r14
  volatile signed __int32 *v12; // rax
  unsigned int v13; // r9d
  unsigned __int64 *v14; // r11
  volatile signed __int32 **v15; // rbx
  unsigned __int64 v16; // r10
  unsigned int v17; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  char v19; // r15
  __int64 v20; // rdx
  volatile __int64 WaitStatus; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  volatile signed __int32 **v30; // r15
  char v31; // r8
  __int64 v32; // r10
  char *v33; // rcx
  ULONG_PTR *v34; // rdx
  _BYTE *v35; // rax
  int v36; // edx
  ULONG_PTR v37; // rcx
  __int64 *v38; // r11
  unsigned int v39; // r8d
  __int64 *v40; // rcx
  __int64 v41; // rax
  __int64 **v42; // rdx
  unsigned __int64 v43; // r15
  unsigned int v44; // eax
  __int64 v45; // r13
  unsigned __int8 CurrentIrql; // r10
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // r8
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v52; // r8
  unsigned int v53; // edi
  unsigned __int64 v54; // rax
  char v55; // r14
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int8 v63; // cl
  _KLOCK_ENTRY *v64; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v66; // r8
  __int64 v67; // r8
  char v68; // [rsp+30h] [rbp-D0h]
  bool v69; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v72; // [rsp+38h] [rbp-C8h]
  unsigned int v73; // [rsp+40h] [rbp-C0h]
  int v74; // [rsp+44h] [rbp-BCh]
  int v75; // [rsp+48h] [rbp-B8h]
  int v76; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v77; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v78; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v79; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v80[512]; // [rsp+68h] [rbp-98h] BYREF

  v7 = a3;
  v76 = a3;
  v9 = a1;
  v73 = a1;
  v10 = 0LL;
  v78 = a7;
  v77 = 0LL;
  v11 = a4;
  memset(v80, 0, 0x1F8uLL);
  v12 = (volatile signed __int32 *)*a2;
  v13 = 1;
  v71 = 0;
  v79 = v12;
  if ( v9 > 1 )
  {
    v14 = a2 + 1;
    v15 = &v79;
    do
    {
      v16 = *v14;
      v17 = v13;
      if ( (unsigned __int64)*v15 > *v14 )
      {
        do
        {
          v47 = v17--;
          *(_QWORD *)&v80[8 * v47 - 8] = *(_QWORD *)&v80[8 * v17 - 8];
        }
        while ( v17 && (unsigned __int64)*(&v79 + v17 - 1) > v16 );
      }
      ++v13;
      ++v15;
      ++v14;
      *(_QWORD *)&v80[8 * v17 - 8] = v16;
    }
    while ( v13 < v9 );
  }
  CurrentThread = KeGetCurrentThread();
  v19 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, &v77, &v71);
  v68 = v19;
LABEL_6:
  LODWORD(WaitStatus) = KiBeginThreadWait((__int64)CurrentThread, v11, v7, a5);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = v79;
    KiAcquireKobjectLockSafe(v79, v20, v22, v23);
    if ( v9 > 1 )
    {
      v29 = v9 - 1;
      v72 = v29;
      v30 = (volatile signed __int32 **)v80;
      do
      {
        if ( *v30 != v25 )
        {
          v25 = *v30;
          KiAcquireKobjectLockSafe(*v30, v26, v27, v28);
          v29 = v72;
        }
        ++v30;
        v72 = --v29;
      }
      while ( v29 );
      v19 = v68;
    }
    if ( v9 )
    {
      v31 = 0;
      v32 = v9;
      v33 = (char *)v78 + 17;
      v34 = a2;
      do
      {
        v35 = (_BYTE *)*v34;
        *(v33 - 1) = 0;
        *v33 = 4;
        *(_WORD *)(v33 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v33 + 7) = CurrentThread;
        *(_QWORD *)(v33 + 15) = v35;
        v33 += 48;
        if ( (*(_BYTE *)*v34 & 0x7F) == 2 && (*(_BYTE *)(*v34 + 48) & 2) != 0 )
          v10 |= 1LL << v31;
        ++v31;
        ++v34;
        --v32;
      }
      while ( v32 );
    }
    CurrentThread->WaitStatus = 0LL;
    v36 = 0;
    CurrentThread->AbWaitObject = 0LL;
    while ( 1 )
    {
      v37 = a2[v36];
      if ( (*(_BYTE *)v37 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v52 = *(struct _KTHREAD **)(v37 + 40);
        if ( CurrentThread == v52 && *(_BYTE *)(v37 + 2) == DpcRoutineActive && *(_DWORD *)(v37 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v79, v9);
          LOBYTE(v66) = v19;
          KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v66);
          RtlRaiseStatus(3221225873LL);
        }
        if ( *(int *)(v37 + 4) <= 0 && (CurrentThread != v52 || *(_BYTE *)(v37 + 2) != DpcRoutineActive) )
        {
LABEL_23:
          if ( v36 == v9 )
          {
            if ( v9 )
            {
              v48 = v9;
              do
              {
                KiWaitSatisfyAny(*a2++);
                --v48;
              }
              while ( v48 );
            }
            KiUnlockKobjectArray(&v79, v9);
            WaitStatus = CurrentThread->WaitStatus;
            LOBYTE(v49) = v19;
            CurrentThread->AbWaitObject = 0LL;
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v49);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v71, v77) )
          {
            KiUnlockKobjectArray(&v79, v9);
            LOBYTE(v67) = v19;
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v67);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v39 = 0;
            if ( v9 )
            {
              v40 = v38;
              do
              {
                v41 = v40[4] + 8;
                v42 = *(__int64 ***)(v40[4] + 16);
                if ( *v42 != (__int64 *)v41 )
                  __fastfail(3u);
                *v40 = v41;
                ++v39;
                v40[1] = (__int64)v42;
                *v42 = v40;
                *(_QWORD *)(v41 + 8) = v40;
                v40 += 6;
              }
              while ( v39 < v9 );
            }
            KiUnlockKobjectArray(&v79, v9);
            CurrentThread->WaitBlockCount = v9;
            v43 = 0LL;
            if ( v10 )
            {
              v53 = 0;
              do
              {
                _BitScanForward64(&v54, v10);
                v55 = v54;
                v74 = v54;
                _bittestandreset64((__int64 *)&v10, (unsigned int)v54);
                v56 = KeAbPreAcquire(a2[v54], 0LL, 0LL);
                v59 = v56;
                if ( !v56 )
                  break;
                v43 |= 1LL << v55;
                KeAbPreWait(v56, v57, v58);
                v60 = (unsigned __int128)((v59 - *(_QWORD *)(v59 - 16LL * *(unsigned __int8 *)(v59 + 24) + 800))
                                        * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v61 = v53++;
                v80[v61 + 504] = (2 * ((v60 < 0) + (v60 >> 4))) | 1;
              }
              while ( v10 );
              v9 = v73;
            }
            v44 = KiCommitThreadWait((__int64)CurrentThread, v78, v71, v77, 0LL);
            LODWORD(WaitStatus) = v44;
            v69 = v44 <= 0x3F || v44 - 128 <= 0x3F;
            v45 = 0LL;
            CurrentThread->AbWaitObject = 0LL;
            if ( v43 )
            {
              do
              {
                _BitScanForward64(&v62, v43);
                v63 = v80[v45 + 504] >> 1;
                v75 = v62;
                v43 &= ~(1LL << v62);
                v72 = (unsigned int)v62;
                v64 = &KeGetCurrentThread()->LockEntries[v63];
                KeAbPreAcquire(a2[(unsigned int)v62], (__int64)v64, 0LL);
                if ( v69 )
                  v64->AcquiredByte |= 1u;
                else
                  KeAbPostReleaseEx(a2[v72], (ULONG_PTR)v64);
                v45 = (unsigned int)(v45 + 1);
              }
              while ( v43 );
              v9 = v73;
            }
            if ( (_DWORD)WaitStatus == 256 )
            {
              v10 = 0LL;
              v19 = 0;
              v68 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
              }
              v7 = v76;
              v11 = a4;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_6;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v37 + 4) <= 0 )
      {
        goto LABEL_23;
      }
      if ( ++v36 >= v9 )
        goto LABEL_23;
    }
  }
  return (unsigned int)WaitStatus;
}
