/*
 * XREFs of KiSuspendThread @ 0x140356DBC
 * Callers:
 *     KeSuspendThread @ 0x140356CF8 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x140358E3C (KiFreezeSingleThread.c)
 *     KiAdjustThreadTimer @ 0x1405194D4 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1402466D0 (KiSignalThread.c)
 *     KiDecrementProcessStackCount @ 0x14025E0F8 (KiDecrementProcessStackCount.c)
 *     KiCancelTimer @ 0x140266F50 (KiCancelTimer.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140357158 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403572DC (KiInsertQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v5; // di
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // r11
  char v10; // si
  char v12; // al
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  volatile signed __int32 *v20; // rbp
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct _KPRCB *v23; // rsi
  _DWORD *v24; // rcx
  char v25; // al
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rcx
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  int v34; // [rsp+50h] [rbp+8h] BYREF
  int v35; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v34 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = SchedulerAssist[6];
        SchedulerAssist[6] = v29 + 1;
        if ( v29 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v28[6] - 1;
        v28[6] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v34, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v9 = a1 + 648;
      v10 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v10 = 1;
        KiInsertQueueApc(a1 + 648, a2, a3, a4);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v12 = *(_BYTE *)(a1 + 3), (v12 & 0x40) != 0)
        || v12 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v10 )
        {
          LOBYTE(a3) = 2;
          KiSignalThreadForApc(a2, v9, a3);
        }
      }
      else
      {
        v13 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v13;
        *(_BYTE *)(a1 + 193) = 1;
        KiReleaseThreadLockSafe(a1);
        v17 = *(_QWORD *)(a1 + 208);
        v18 = v17 + 17;
        v19 = v17 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v18 < 5u )
          {
            v20 = *(volatile signed __int32 **)(v18 + 15);
            KiAcquireKobjectLockSafe(v20, v14, v15, (__int64)v16);
            if ( *(_BYTE *)v18 == 4 )
            {
              v21 = *(_QWORD **)(v18 - 9);
              v14 = v18 - 17;
              v22 = *(_QWORD *)(v18 - 17);
              if ( *(_QWORD *)(v22 + 8) != v18 - 17 || *v21 != v14 )
                __fastfail(3u);
              *v21 = v22;
              *(_QWORD *)(v22 + 8) = v21;
            }
            _InterlockedAnd(v20, 0xFFFFFF7F);
            *(_BYTE *)v18 = 6;
          }
          v18 += 48LL;
        }
        while ( v18 - 17 != v19 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(v14) = 1;
          v26 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, v14, v15, (__int64)v16) )
          {
            v27 = *(_QWORD *)(a1 + 280);
            if ( v27 <= v26 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v26;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v26 - v27;
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
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184), v14, v15, v16);
        }
        v23 = KeGetCurrentPrcb();
        v35 = 0;
        while ( 1 )
        {
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v31 = v24[6];
              v24[6] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v32 = v23->SchedulerAssist;
          if ( v32 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v33 = v32[6] - 1;
              v32[6] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          do
            KeYieldProcessorEx(&v35, v14, v15, (__int64)v16);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v25 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v25 |= 4u;
        *(_BYTE *)(a1 + 112) = v25;
        if ( (v25 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
    v5 = 1;
  }
  KiReleaseThreadLockSafe(a1);
  return v5;
}
