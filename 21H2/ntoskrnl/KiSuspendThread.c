/*
 * XREFs of KiSuspendThread @ 0x1402682C4
 * Callers:
 *     KiFreezeSingleThread @ 0x14023A74C (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x140268200 (KeSuspendThread.c)
 *     KiAdjustThreadTimer @ 0x14051F214 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402687E4 (KiInsertQueueApc.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiCancelTimer @ 0x140353020 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v4; // di
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // r11
  char v9; // si
  char v11; // al
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r14
  volatile signed __int32 *v17; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rcx
  struct _KPRCB *v20; // rsi
  _DWORD *v21; // rcx
  char v22; // al
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // [rsp+50h] [rbp+8h] BYREF
  int v32; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v31 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = SchedulerAssist[6];
        SchedulerAssist[6] = v26 + 1;
        if ( v26 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v25[6] - 1;
        v25[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v31);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v8 = a1 + 648;
      v9 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v9 = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v11 = *(_BYTE *)(a1 + 3), (v11 & 0x40) != 0)
        || v11 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v9 )
        {
          LOBYTE(a3) = 2;
          KiSignalThreadForApc(a2, v8, a3);
        }
      }
      else
      {
        v12 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v12;
        *(_BYTE *)(a1 + 193) = 1;
        KiReleaseThreadLockSafe(a1);
        v14 = *(_QWORD *)(a1 + 208);
        v15 = v14 + 17;
        v16 = v14 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v15 < 5u )
          {
            v17 = *(volatile signed __int32 **)(v15 + 15);
            KiAcquireKobjectLockSafe(v17);
            if ( *(_BYTE *)v15 == 4 )
            {
              v18 = *(_QWORD **)(v15 - 9);
              v13 = v15 - 17;
              v19 = *(_QWORD *)(v15 - 17);
              if ( *(_QWORD *)(v19 + 8) != v15 - 17 || *v18 != v13 )
                __fastfail(3u);
              *v18 = v19;
              *(_QWORD *)(v19 + 8) = v18;
            }
            _InterlockedAnd(v17, 0xFFFFFF7F);
            *(_BYTE *)v15 = 6;
          }
          v15 += 48LL;
        }
        while ( v15 - 17 != v16 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(v13) = 1;
          v23 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, v13) )
          {
            v24 = *(_QWORD *)(a1 + 280);
            if ( v24 <= v23 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v23;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v23 - v24;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        }
        v20 = KeGetCurrentPrcb();
        v32 = 0;
        while ( 1 )
        {
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v28 = v21[6];
              v21[6] = v28 + 1;
              if ( v28 == -1 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v29 = v20->SchedulerAssist;
          if ( v29 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v30 = v29[6] - 1;
              v29[6] = v30;
              if ( !v30 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          do
            KeYieldProcessorEx(&v32);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v22 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v22 |= 4u;
        *(_BYTE *)(a1 + 112) = v22;
        if ( (v22 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
    v4 = 1;
  }
  KiReleaseThreadLockSafe(a1);
  return v4;
}
