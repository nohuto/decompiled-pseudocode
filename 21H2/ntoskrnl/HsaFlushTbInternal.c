/*
 * XREFs of HsaFlushTbInternal @ 0x1404E303C
 * Callers:
 *     HsaAttachDeviceDomainInternal @ 0x1404E2738 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushDomainTb @ 0x1404E2F90 (HsaFlushDomainTb.c)
 *     HsaFlushTb @ 0x1404E2FF0 (HsaFlushTb.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuGetNextFlushDevice @ 0x1404CC1BC (HalpIommuGetNextFlushDevice.c)
 *     HsaIommuSendCommand @ 0x1404E3F48 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaFlushTbInternal(
        unsigned __int64 *a1,
        int a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        int a6,
        _QWORD *a7,
        int a8,
        __int64 a9)
{
  int v9; // r13d
  __int64 result; // rax
  int v12; // edi
  int v13; // r14d
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // bl
  _DWORD *v18; // r9
  int v19; // edi
  _QWORD *v20; // r13
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v30; // rdi
  int v31; // r14d
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r15
  unsigned int v34; // edi
  int v35; // esi
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int16 v38; // bx
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rcx
  int v43; // r13d
  unsigned __int64 v44; // r14
  _BYTE *v45; // rax
  unsigned __int8 v46; // bl
  unsigned __int8 v47; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v49; // r9
  int v50; // eax
  int v51; // edi
  unsigned __int8 v52; // bl
  _DWORD *v53; // r9
  struct _EX_RUNDOWN_REF *v54; // rcx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  _BYTE *v59; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-71h] BYREF
  __int64 v61; // [rsp+40h] [rbp-69h]
  PEX_RUNDOWN_REF RunRef; // [rsp+48h] [rbp-61h] BYREF
  __int128 v63; // [rsp+50h] [rbp-59h] BYREF
  int v64; // [rsp+60h] [rbp-49h]
  unsigned int v65; // [rsp+64h] [rbp-45h]
  __int64 v66; // [rsp+68h] [rbp-41h] BYREF
  _QWORD *v67; // [rsp+70h] [rbp-39h] BYREF
  __int64 v68; // [rsp+78h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-29h] BYREF
  __int64 v70; // [rsp+98h] [rbp-11h]
  _QWORD v71[8]; // [rsp+A0h] [rbp-9h] BYREF
  int v72; // [rsp+F0h] [rbp+47h] BYREF
  int v73; // [rsp+F8h] [rbp+4Fh]

  v73 = a2;
  v9 = a2;
  RunRef = 0LL;
  v63 = 0LL;
  v59 = 0LL;
  v72 = 0;
  v67 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v66 = 0LL;
  result = *(_QWORD *)(*a1 + 8224);
  if ( (result & 0x10) == 0 )
    return result;
  v12 = a8;
  v13 = a6;
  v61 = 0LL;
  if ( a8 )
  {
    if ( a5 )
    {
      v26 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
      v27 = 3LL;
    }
    else
    {
      v26 = a2 & 0xFFFFF | 0x3000000000000000LL;
      v27 = 6LL;
    }
    v61 = v27;
    v60 = v26;
    CurrentIrql = KeGetCurrentIrql();
    v68 = CurrentIrql;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LOWORD(v27) = v61;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 19;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)a1 + 19);
    while ( 1 )
    {
      v30 = (unsigned int)(v12 - 1);
      v31 = 12;
      a8 = v30;
      v64 = 12;
      v32 = *(_QWORD *)(a9 + 8 * v30);
      if ( ((v32 >> 10) & 3) != 0 )
      {
        v31 = ((v32 >> 10) & 3) + 8 * ((v32 >> 10) & 3) + 12;
        v64 = v31;
      }
      v33 = v32 & 0xFFFFFFFFFFFFF000uLL;
      v34 = (*(_DWORD *)(a9 + 8 * v30) & 0x3FF) + 1;
      v65 = v34;
      do
      {
        v35 = 0;
        if ( v34 > 1 )
        {
          do
          {
            if ( (((1 << (v31 + 1 + v35)) - 1) & (unsigned int)v33) != 0 )
              break;
            ++v35;
          }
          while ( 1 << v35 < v34 );
        }
        if ( 1 << v35 > v34 )
        {
          v36 = (1 << v35) - v34;
          if ( v36 >= 0x1F )
            goto LABEL_50;
        }
        else
        {
          v36 = 0;
        }
        if ( v31 == 21 && v36 )
LABEL_50:
          --v35;
        v37 = v33;
        if ( v35 || v31 != 12 )
        {
          v38 = v27 | 1;
          v37 = (unsigned int)~(1 << (v35 + v31 - 1)) & (v33 | (unsigned int)((1 << (v35 + v31 - 1)) - 1));
        }
        else
        {
          v38 = v27 & 0xFFFE;
        }
        v61 = v37 ^ ((unsigned __int16)v37 ^ v38) & 0xFFF;
        HsaIommuSendCommand(a1, &v60, 1LL);
        LOWORD(v27) = v61;
        v70 = v61;
        if ( a6 || (_QWORD *)*a7 != a7 && !a5 )
        {
          v39 = a7;
          v40 = v9 & 0xF0000;
          v41 = (unsigned __int8)v9;
          v42 = (unsigned __int16)v9 & 0xFF00;
          v43 = a6;
          v44 = (v42 | ((v40 | (v41 << 8)) << 32) | 0x40000000000000LL) << 8;
          *(_QWORD *)&v63 = v44;
          v67 = 0LL;
          *((_QWORD *)&v63 + 1) = v61 ^ v61 & 0xFFA | 4;
          while ( 1 )
          {
            if ( !v43 && a6 || !HalpIommuGetNextFlushDevice(v39, &v67, &v66, &v72, &RunRef, &v59) )
            {
              LOWORD(v27) = v70;
              v34 = v65;
              v31 = v64;
              v9 = v73;
              break;
            }
            v44 = (unsigned __int16)v66 | v44 & 0xFFFFFFFF00FF0000uLL | ((unsigned __int64)(unsigned __int8)v72 << 24);
            v45 = v59;
            *(_QWORD *)&v63 = v44;
            if ( !*v59 )
            {
              if ( !ExAcquireRundownProtection(RunRef) )
                goto LABEL_66;
              v45 = v59;
            }
            *v45 = 1;
            HsaIommuSendCommand(a1, &v63, 1LL);
            v44 = v63;
LABEL_66:
            --v43;
          }
        }
        if ( v34 <= 1 << v35 )
          break;
        v34 -= 1 << v35;
        v65 = v34;
        v33 += 1LL << ((unsigned __int8)v35 + (unsigned __int8)v31);
      }
      while ( v34 );
      v12 = a8;
      if ( !a8 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v46 = v68;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v47 = KeGetCurrentIrql();
            if ( v47 <= 0xFu && (unsigned __int8)v68 <= 0xFu && v47 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v49 = CurrentPrcb->SchedulerAssist;
              v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v68 + 1));
              v25 = (v50 & v49[5]) == 0;
              v49[5] &= v50;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v46);
        v13 = a6;
        goto LABEL_79;
      }
    }
  }
  v14 = a5;
  if ( a4 )
  {
    v60 = 0x8000000000000000uLL;
  }
  else
  {
    if ( a5 )
    {
      v60 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
      v15 = 0x7FFFFFFFFFFFF003LL;
    }
    else
    {
      v60 = a2 & 0xFFFFF | 0x3000000000000000LL;
      v15 = 0x7FFFFFFFFFFFF007LL;
    }
    v61 = v15;
  }
  HsaIommuSendCommand(a1, &v60, 0LL);
  if ( !v14 )
  {
    v16 = WORD4(v63) & 0xFFE;
    *(_QWORD *)&v63 = 0x4000000000000000LL;
    *((_QWORD *)&v63 + 1) = v16 | 0x7FFFFFFFFFFFF001LL;
    if ( v9 != -1 )
    {
      *(_QWORD *)&v63 = ((unsigned __int16)v9 & 0xFF00 | ((v9 & 0xF0000 | ((unsigned __int64)(unsigned __int8)v9 << 8)) << 32) | 0x40000000000000LL) << 8;
      *((_QWORD *)&v63 + 1) = v16 | 0x7FFFFFFFFFFFF005LL;
    }
    v17 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
    {
      v18 = KeGetCurrentPrcb()->SchedulerAssist;
      v18[5] |= (-1 << (v17 + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 19;
    v19 = v13;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)a1 + 19);
    v20 = a7;
    while ( (v19 || !v13) && HalpIommuGetNextFlushDevice(v20, &v67, &v66, &v72, &RunRef, &v59) )
    {
      if ( ExAcquireRundownProtection(RunRef) )
      {
        *v59 = 1;
        *(_QWORD *)&v63 = (unsigned __int16)v66 | v63 & 0xFFFFFFFF00FF0000uLL | ((unsigned __int64)(unsigned __int8)v72 << 24);
        HsaIommuSendCommand(a1, &v63, 1LL);
      }
      --v19;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && v17 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v17 + 1));
          v25 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
      }
    }
    __writecr8(v17);
    goto LABEL_80;
  }
LABEL_79:
  v20 = a7;
LABEL_80:
  v71[1] = 0LL;
  v71[0] = 0x1000000000000000LL;
  HsaIommuSendCommand(a1, v71, 0LL);
  v67 = 0LL;
  v51 = v13;
  v52 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v52 <= 0xFu )
  {
    v53 = KeGetCurrentPrcb()->SchedulerAssist;
    v53[5] |= (-1 << (v52 + 1)) & 0xFFFC;
  }
  while ( (v51 || !v13) && HalpIommuGetNextFlushDevice(v20, &v67, &v66, &v72, &RunRef, &v59) )
  {
    if ( *v59 )
    {
      v54 = RunRef;
      *v59 = 0;
      ExReleaseRundownProtection(v54);
    }
    --v51;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v55 = KeGetCurrentIrql();
      if ( v55 <= 0xFu && v52 <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << (v52 + 1));
        v25 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)v56);
      }
    }
  }
  result = v52;
  __writecr8(v52);
  return result;
}
