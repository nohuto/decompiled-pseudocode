/*
 * XREFs of KiSetSystemAffinityThread @ 0x14029CC14
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 * Callees:
 *     KiUpdateNodeAffinitizedFlag @ 0x140265E74 (KiUpdateNodeAffinitizedFlag.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSetSystemAffinityThread(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v20; // rcx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  int v25; // [rsp+40h] [rbp+8h] BYREF
  int v26; // [rsp+50h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v4 + 584) = *(_WORD *)(a2 + 8);
  *(_QWORD *)(v4 + 576) = *(_QWORD *)a2;
  if ( a3 < 0x500 )
  {
    *(_DWORD *)(v4 + 588) = a3;
    v14 = a3;
    v9 = 0x140000000uLL;
LABEL_7:
    v7 = *(_QWORD *)(v9 + 8 * v14 + 13622464);
    goto LABEL_8;
  }
  v7 = KiProcessorBlock[*(unsigned int *)(v4 + 588)];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v7, a2) )
  {
    v10 = *(_QWORD *)(v7 + 192);
    v11 = *(unsigned __int16 *)(v8 + 8);
    v12 = *(_QWORD *)v8;
    if ( (_WORD)v11 == *(_WORD *)(v10 + 144) )
    {
      v13 = v12 & *(_QWORD *)(v10 + 136);
      if ( v13 )
        v12 = v13;
    }
    _BitScanReverse64(&v12, v12);
    v26 = v12;
    v14 = *(unsigned int *)(v9 + 4LL * (unsigned int)(v12 + (v11 << 6)) + 13640912);
    *(_DWORD *)(v4 + 588) = v14;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)(v4 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v4) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v7, v4);
    KiUpdateNodeAffinitizedFlag(v4);
  }
  LODWORD(v15) = KiPrcbInGroupAffinity(a1, v4 + 576);
  if ( !(_DWORD)v15 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v21 = SchedulerAssist[6];
            v22 = v21 == -1;
            LODWORD(v15) = v21 + 1;
            SchedulerAssist[6] = v15;
            if ( v22 )
              LOBYTE(v15) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v20 = CurrentPrcb->SchedulerAssist;
        if ( v20 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = v20[6] - 1;
            v20[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
        {
          KeYieldProcessorEx(&v25);
          v15 = *(_QWORD *)(a1 + 48);
        }
        while ( v15 );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        LOBYTE(v15) = KiSelectNextThread(a1, a4);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          LODWORD(v15) = v19[6] - 1;
          v19[6] = v15;
          if ( !(_DWORD)v15 )
            LOBYTE(v15) = KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
  }
  return v15;
}
