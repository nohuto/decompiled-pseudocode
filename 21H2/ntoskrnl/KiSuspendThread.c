/*
 * XREFs of KiSuspendThread @ 0x1402EE4D4
 * Callers:
 *     KiFreezeSingleThread @ 0x140244508 (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x1402EE3D8 (KeSuspendThread.c)
 *     KiAdjustThreadTimer @ 0x140573898 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiDecrementProcessStackCount @ 0x1402D0CE0 (KiDecrementProcessStackCount.c)
 *     KiInsertQueueApc @ 0x1402EE784 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1402F6ED0 (KiSignalThread.c)
 *     KiCancelTimer @ 0x140357840 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v4; // di
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // r11
  char v9; // si
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  volatile signed __int32 *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rcx
  struct _KPRCB *v19; // rsi
  _DWORD *v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // [rsp+50h] [rbp+8h] BYREF
  int v31; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v30 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = SchedulerAssist[6];
        SchedulerAssist[6] = v25 + 1;
        if ( v25 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v24[6] - 1;
        v24[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v30);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      v8 = a1 + 648;
      *(_DWORD *)(a1 + 740) = 0;
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
        v11 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v11;
        *(_BYTE *)(a1 + 193) = 1;
        KiReleaseThreadLockSafe(a1);
        v13 = *(_QWORD *)(a1 + 208);
        v14 = v13 + 17;
        v15 = v13 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v14 < 5u )
          {
            v16 = *(volatile signed __int32 **)(v14 + 15);
            KiAcquireKobjectLockSafe(v16);
            if ( *(_BYTE *)v14 == 4 )
            {
              v17 = *(_QWORD **)(v14 - 9);
              v12 = v14 - 17;
              v18 = *(_QWORD *)(v14 - 17);
              if ( *(_QWORD *)(v18 + 8) != v14 - 17 || *v17 != v12 )
                __fastfail(3u);
              *v17 = v18;
              *(_QWORD *)(v18 + 8) = v17;
            }
            _InterlockedAnd(v16, 0xFFFFFF7F);
            *(_BYTE *)v14 = 6;
          }
          v14 += 48LL;
        }
        while ( v14 - 17 != v15 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(v12) = 1;
          v22 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, v12) )
          {
            v23 = *(_QWORD *)(a1 + 280);
            if ( v23 <= v22 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v22;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v22 - v23;
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
        v19 = KeGetCurrentPrcb();
        v31 = 0;
        while ( 1 )
        {
          v20 = v19->SchedulerAssist;
          if ( v20 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v27 = v20[6];
              v20[6] = v27 + 1;
              if ( v27 == -1 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v28 = v19->SchedulerAssist;
          if ( v28 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v29 = v28[6] - 1;
              v28[6] = v29;
              if ( !v29 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          do
            KeYieldProcessorEx(&v31);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v21 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v21 |= 4u;
        *(_BYTE *)(a1 + 112) = v21;
        if ( (v21 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
    v4 = 1;
  }
  KiReleaseThreadLockSafe(a1);
  return v4;
}
