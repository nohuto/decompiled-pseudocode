/*
 * XREFs of KiWaitForAllObjects @ 0x14030EAC0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x1402BC710 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x1402BC800 (KiCheckDueTimeExpired.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 *     KiWaitSatisfyAny @ 0x14030EEAC (KiWaitSatisfyAny.c)
 *     KiUnlockKobjectArray @ 0x14030F42C (KiUnlockKobjectArray.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        ULONG_PTR *a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned int v7; // esi
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
  __int64 v19; // rdx
  _DWORD *SchedulerAssist; // r9
  char v21; // r15
  __int64 v22; // rdx
  volatile __int64 WaitStatus; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  volatile signed __int32 **v32; // r15
  char v33; // r8
  __int64 v34; // r10
  char *v35; // rcx
  ULONG_PTR *v36; // rdx
  _BYTE *v37; // rax
  int v38; // edx
  ULONG_PTR v39; // rcx
  __int64 *v40; // r11
  unsigned int v41; // r8d
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 **v44; // rdx
  unsigned __int64 v45; // r15
  unsigned int v46; // eax
  __int64 v47; // r13
  unsigned __int8 CurrentIrql; // r10
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // r9
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v55; // r8
  unsigned int v56; // edi
  unsigned __int64 v57; // rax
  char v58; // r14
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int8 v64; // cl
  _KLOCK_ENTRY *v65; // r14
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  char v70; // [rsp+30h] [rbp-D0h]
  bool v71; // [rsp+30h] [rbp-D0h]
  int v73; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v74; // [rsp+38h] [rbp-C8h]
  unsigned int v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+44h] [rbp-BCh]
  int v77; // [rsp+48h] [rbp-B8h]
  unsigned int v78; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v80; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v81; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v82[512]; // [rsp+68h] [rbp-98h] BYREF

  v7 = a3;
  v78 = a3;
  v9 = a1;
  v75 = a1;
  v10 = 0LL;
  v80 = a7;
  v79 = 0LL;
  v11 = a4;
  memset(v82, 0, 0x1F8uLL);
  v12 = (volatile signed __int32 *)*a2;
  v13 = 1;
  v73 = 0;
  v81 = v12;
  if ( v9 > 1 )
  {
    v14 = a2 + 1;
    v15 = &v81;
    do
    {
      v16 = *v14;
      v17 = v13;
      if ( (unsigned __int64)*v15 > *v14 )
      {
        do
        {
          v49 = v17--;
          *(_QWORD *)&v82[8 * v49 - 8] = *(_QWORD *)&v82[8 * v17 - 8];
        }
        while ( v17 && (unsigned __int64)*(&v81 + v17 - 1) > v16 );
      }
      ++v13;
      ++v15;
      ++v14;
      *(_QWORD *)&v82[8 * v17 - 8] = v16;
    }
    while ( v13 < v9 );
  }
  CurrentThread = KeGetCurrentThread();
  v21 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, &v79, &v73);
  v70 = v21;
LABEL_6:
  LOBYTE(SchedulerAssist) = a5;
  LOBYTE(v19) = v11;
  LODWORD(WaitStatus) = KiBeginThreadWait((__int64)CurrentThread, v19, v7, SchedulerAssist);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = v81;
    KiAcquireKobjectLockSafe(v81, v22, v24, v25);
    if ( v9 > 1 )
    {
      v31 = v9 - 1;
      v74 = v31;
      v32 = (volatile signed __int32 **)v82;
      do
      {
        if ( *v32 != v27 )
        {
          v27 = *v32;
          KiAcquireKobjectLockSafe(*v32, v28, v29, v30);
          v31 = v74;
        }
        ++v32;
        v74 = --v31;
      }
      while ( v31 );
      v21 = v70;
    }
    if ( v9 )
    {
      v33 = 0;
      v34 = v9;
      v35 = (char *)v80 + 17;
      v36 = a2;
      do
      {
        v37 = (_BYTE *)*v36;
        *(v35 - 1) = 0;
        *v35 = 4;
        *(_WORD *)(v35 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v35 + 7) = CurrentThread;
        *(_QWORD *)(v35 + 15) = v37;
        v35 += 48;
        if ( (*(_BYTE *)*v36 & 0x7F) == 2 && (*(_BYTE *)(*v36 + 48) & 2) != 0 )
          v10 |= 1LL << v33;
        ++v33;
        ++v36;
        --v34;
      }
      while ( v34 );
    }
    CurrentThread->WaitStatus = 0LL;
    v38 = 0;
    CurrentThread->AbWaitObject = 0LL;
    while ( 1 )
    {
      v39 = a2[v38];
      if ( (*(_BYTE *)v39 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v55 = *(struct _KTHREAD **)(v39 + 40);
        if ( CurrentThread == v55 && *(_BYTE *)(v39 + 2) == DpcRoutineActive && *(_DWORD *)(v39 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v81, v9);
          LOBYTE(v66) = v21;
          KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v66, v67);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v39 + 4) <= 0 && (CurrentThread != v55 || *(_BYTE *)(v39 + 2) != DpcRoutineActive) )
        {
LABEL_23:
          if ( v38 == v9 )
          {
            if ( v9 )
            {
              v50 = v9;
              do
              {
                KiWaitSatisfyAny(*a2++);
                --v50;
              }
              while ( v50 );
            }
            KiUnlockKobjectArray(&v81, v9);
            WaitStatus = CurrentThread->WaitStatus;
            LOBYTE(v51) = v21;
            CurrentThread->AbWaitObject = 0LL;
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v51, v52);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v73, v79) )
          {
            KiUnlockKobjectArray(&v81, v9);
            LOBYTE(v68) = v21;
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v68, v69);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v41 = 0;
            if ( v9 )
            {
              v42 = v40;
              do
              {
                v43 = v42[4] + 8;
                v44 = *(__int64 ***)(v42[4] + 16);
                if ( *v44 != (__int64 *)v43 )
                  __fastfail(3u);
                *v42 = v43;
                ++v41;
                v42[1] = (__int64)v44;
                *v44 = v42;
                *(_QWORD *)(v43 + 8) = v42;
                v42 += 6;
              }
              while ( v41 < v9 );
            }
            KiUnlockKobjectArray(&v81, v9);
            CurrentThread->WaitBlockCount = v9;
            v45 = 0LL;
            if ( v10 )
            {
              v56 = 0;
              do
              {
                _BitScanForward64(&v57, v10);
                v58 = v57;
                v76 = v57;
                _bittestandreset64((__int64 *)&v10, (unsigned int)v57);
                v59 = KeAbPreAcquire(a2[v57], 0LL, 0);
                v60 = v59;
                if ( !v59 )
                  break;
                v45 |= 1LL << v58;
                KeAbPreWait(v59);
                v61 = (unsigned __int128)((v60 - *(_QWORD *)(v60 - 16LL * *(unsigned __int8 *)(v60 + 24) + 800))
                                        * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v62 = v56++;
                v82[v62 + 504] = (2 * ((v61 < 0) + (v61 >> 4))) | 1;
              }
              while ( v10 );
              v9 = v75;
            }
            v46 = KiCommitThreadWait((__int64)CurrentThread, v80, v73, v79, 0LL);
            LODWORD(WaitStatus) = v46;
            v71 = v46 <= 0x3F || v46 - 128 <= 0x3F;
            v47 = 0LL;
            CurrentThread->AbWaitObject = 0LL;
            if ( v45 )
            {
              do
              {
                _BitScanForward64(&v63, v45);
                v64 = v82[v47 + 504] >> 1;
                v77 = v63;
                v45 &= ~(1LL << v63);
                v74 = (unsigned int)v63;
                v65 = &KeGetCurrentThread()->LockEntries[v64];
                KeAbPreAcquire(a2[(unsigned int)v63], (__int64)v65, 0);
                if ( v71 )
                  v65->AcquiredByte |= 1u;
                else
                  KeAbPostReleaseEx(a2[v74], (ULONG_PTR)v65);
                v47 = (unsigned int)(v47 + 1);
              }
              while ( v45 );
              v9 = v75;
            }
            if ( (_DWORD)WaitStatus == 256 )
            {
              v10 = 0LL;
              v21 = 0;
              v70 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                v19 = SchedulerAssist[5] | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4u;
                SchedulerAssist[5] = v19;
              }
              v7 = v78;
              v11 = a4;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_6;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v39 + 4) <= 0 )
      {
        goto LABEL_23;
      }
      if ( ++v38 >= v9 )
        goto LABEL_23;
    }
  }
  return (unsigned int)WaitStatus;
}
