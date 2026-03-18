/*
 * XREFs of KiSetSystemAffinityThread @ 0x14033D1E8
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE850 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1402D884C (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x1402D8E00 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  _DWORD *v23; // rcx
  int v24; // eax
  bool v25; // zf
  int v26; // eax
  int v28; // [rsp+40h] [rbp+8h] BYREF
  int v29; // [rsp+50h] [rbp+18h]

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
  if ( !KiPrcbInGroupAffinity(v7, a2) )
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
    v29 = v12;
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
      v28 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v24 = SchedulerAssist[6];
            v25 = v24 == -1;
            LODWORD(v15) = v24 + 1;
            SchedulerAssist[6] = v15;
            if ( v25 )
              LOBYTE(v15) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v23 = CurrentPrcb->SchedulerAssist;
        if ( v23 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v26 = v23[6] - 1;
            v23[6] = v26;
            if ( !v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
        {
          KeYieldProcessorEx(&v28, v16, v17, v18);
          v15 = *(_QWORD *)(a1 + 48);
        }
        while ( v15 );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        LOBYTE(v15) = KiSelectNextThread(a1, a4);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          LODWORD(v15) = v22[6] - 1;
          v22[6] = v15;
          if ( !(_DWORD)v15 )
            LOBYTE(v15) = KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
  }
  return v15;
}
