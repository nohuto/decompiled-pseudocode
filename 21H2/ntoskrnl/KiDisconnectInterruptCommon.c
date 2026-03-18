/*
 * XREFs of KiDisconnectInterruptCommon @ 0x1403AF3B4
 * Callers:
 *     KeDisconnectInterrupt @ 0x1403AEB58 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056EE94 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectInterruptInternal @ 0x1403AF4FC (KiDisconnectInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x1403AF9E8 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14045A41A (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x14056EFD8 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x14057657C (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v4; // rcx
  char v7; // r15
  KSPIN_LOCK *v8; // rdi
  unsigned int v9; // esi
  unsigned __int8 v10; // bl
  __int64 v11; // rdx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // bl
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  char v23[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+28h] [rbp-48h] BYREF
  char *v25; // [rsp+38h] [rbp-38h]
  _QWORD v26[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  v26[1] = a3;
  v26[0] = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v4 = *(struct _KTHREAD **)(a2 + 152);
  v24 = 0LL;
  v23[0] = 0;
  v7 = 0;
  PreviousAffinity = 0LL;
  if ( v4 != KeGetCurrentThread() )
  {
    LOWORD(v24) = 1;
    v25 = (char *)&v24 + 8;
    *((_QWORD *)&v24 + 1) = (char *)&v24 + 8;
    v26[0] = &v24;
    BYTE2(v24) = 6;
    DWORD1(v24) = 0;
  }
  if ( a1 )
  {
    v8 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v8);
  }
  else
  {
    v8 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v23, &PreviousAffinity);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( !*(_WORD *)(a2 + 102) )
    {
      if ( !a1 )
      {
        v9 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v9 = KiDisconnectSecondaryInterruptInternal(a2);
      goto LABEL_20;
    }
    _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
    v7 = 1;
    *(_QWORD *)(a2 + 144) = v26;
  }
  v9 = -1073741585;
  if ( !a1 )
  {
LABEL_10:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v10 = v23[0];
      if ( v23[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v23[0];
        v22 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
        v18 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v10 = v23[0];
    }
    __writecr8(v10);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_13;
  }
LABEL_20:
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v13 = KeGetCurrentIrql(), v13 <= 0xFu) )
  {
    v14 = v23[0];
    if ( v23[0] <= 0xFu && v13 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v14 = v23[0];
      v17 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
      v18 = (v17 & v16[5]) == 0;
      v11 = (unsigned int)v17 & v16[5];
      v16[5] = v11;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  else
  {
    v14 = v23[0];
  }
  __writecr8(v14);
LABEL_13:
  if ( v26[0] && v7 )
  {
    LOBYTE(v11) = 1;
    KiSignalWaitDisconnectLock(v26[0], v11);
    return (unsigned int)v27;
  }
  return v9;
}
